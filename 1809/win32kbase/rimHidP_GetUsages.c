/*
 * XREFs of rimHidP_GetUsages @ 0x1C011C970
 * Callers:
 *     rimExtractButtonPageButtonUsages @ 0x1C0129A4C (rimExtractButtonPageButtonUsages.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0129BD8 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractPointerDeviceUsages @ 0x1C012A314 (rimExtractPointerDeviceUsages.c)
 *     RIMExtractCustomPTPSetting @ 0x1C01303F0 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetUsages(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_GetUsages )
    return gpfnHidP_GetUsages(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
