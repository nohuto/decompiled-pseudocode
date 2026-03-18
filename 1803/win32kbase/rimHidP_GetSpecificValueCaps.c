/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C004DD00
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C004D5E0 (RIMGetPointerDeviceProperties.c)
 *     _PopulatePropertyUsageValues @ 0x1C004DA90 (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C00EA3D4 (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C00EA568 (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C00EBBB0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00EC5C4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPropertyCount @ 0x1C00ECC88 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C00ED2E8 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C00ED92C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C00EDB24 (RIMRetrieveLinkCollection.c)
 *     RIMDeliverConfigRequest @ 0x1C00EF068 (RIMDeliverConfigRequest.c)
 *     RIMPopulatePointerDevice @ 0x1C00EFEF4 (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C00F2B28 (RIMIDECheckScanTimeSupport.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C01045DC (rimValidateCustomHidKeyboardUsages.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C0108B30 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSetting @ 0x1C0108CD0 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
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
