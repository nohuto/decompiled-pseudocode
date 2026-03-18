/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C014532C
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C013D06C (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C013D74C (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C013D900 (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C013EF90 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013FAC8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01401A0 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C0140744 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C0140E44 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0141468 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C0141680 (RIMRetrieveLinkCollection.c)
 *     RIMDeliverConfigRequest @ 0x1C014312C (RIMDeliverConfigRequest.c)
 *     RIMIsInputUsagePresent @ 0x1C0143B48 (RIMIsInputUsagePresent.c)
 *     RIMPopulatePointerDevice @ 0x1C0143C54 (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C01488C0 (RIMIDECheckScanTimeSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
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
