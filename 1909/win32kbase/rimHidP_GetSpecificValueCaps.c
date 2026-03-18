/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C0142CBC
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C013A9FC (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C013B0DC (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C013B290 (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C013C920 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013D458 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C013DB30 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C013E0D4 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C013E7D4 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C013EDF8 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C013F010 (RIMRetrieveLinkCollection.c)
 *     RIMDeliverConfigRequest @ 0x1C0140ABC (RIMDeliverConfigRequest.c)
 *     RIMIsInputUsagePresent @ 0x1C01414D8 (RIMIsInputUsagePresent.c)
 *     RIMPopulatePointerDevice @ 0x1C01415E4 (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C0146250 (RIMIDECheckScanTimeSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
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
