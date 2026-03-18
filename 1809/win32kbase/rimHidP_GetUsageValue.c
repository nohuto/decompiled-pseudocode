/*
 * XREFs of rimHidP_GetUsageValue @ 0x1C011C898
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C0116740 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C011728C (RIMGetMaxCountFeatureDetails.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C01209A8 (RIMIDE_CreateGenericHidDevice.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0129F9C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C012A314 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C012A79C (rimExtractScantime.c)
 *     rimFindOrCreateActiveContact @ 0x1C012ADA8 (rimFindOrCreateActiveContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C012BC0C (rimProcessPointerDeviceContact.c)
 *     RIMExtractCustomPTPSetting @ 0x1C01303F0 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
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
