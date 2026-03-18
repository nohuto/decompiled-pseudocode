/*
 * XREFs of rimHidP_GetUsageValue @ 0x1C00F0DA4
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C00EBBB0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00EC5C4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C00F5D84 (RIMIDE_CreateGenericHidDevice.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01017F0 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0101B7C (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C0102018 (rimExtractScantime.c)
 *     rimFindOrCreateActiveContact @ 0x1C010263C (rimFindOrCreateActiveContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 *     RIMExtractCustomPTPSetting @ 0x1C0108CD0 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetUsageValue(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_GetUsageValue )
    return gpfnHidP_GetUsageValue(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
