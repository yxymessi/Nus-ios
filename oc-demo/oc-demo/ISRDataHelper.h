//
//  ISRDataHelper.h
//  oc-demo
//
//  Created by apple on 2020/8/3.
//  Copyright © 2020 apple. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface ISRDataHelper : NSObject

// 解析命令词返回的结果
+ (NSString*)stringFromAsr:(NSString*)params;

/**
 解析JSON数据
 ****/
+ (NSString *)stringFromJson:(NSString*)params;//


/**
 解析语法识别返回的结果
 ****/
+ (NSString *)stringFromABNFJson:(NSString*)params;

@end
