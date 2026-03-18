/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C011C844
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C01148F8 (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C0114FC4 (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C0115158 (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C0116740 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C011728C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0117A90 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C0118004 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C01186B4 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0118CAC (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C0118EA0 (RIMRetrieveLinkCollection.c)
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 *     RIMPopulatePointerDevice @ 0x1C011B37C (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C011D5A0 (RIMIDECheckScanTimeSupport.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C013022C (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSetting @ 0x1C01303F0 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificValueCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_VALUE_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificValueCaps )
    return gpfnHidP_GetSpecificValueCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}
