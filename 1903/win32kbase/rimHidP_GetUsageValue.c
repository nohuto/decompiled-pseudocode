/*
 * XREFs of rimHidP_GetUsageValue @ 0x1C0145380
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C013EF90 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013FAC8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C014C7A8 (RIMIDE_CreateGenericHidDevice.c)
 *     rimExtractTransducerUsages @ 0x1C01548B0 (rimExtractTransducerUsages.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0156BF8 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0157000 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C01574E0 (rimExtractScantime.c)
 *     rimFindOrCreateActiveContact @ 0x1C0157B48 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
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
