/*
 * XREFs of rimHidP_GetUsageValueArray @ 0x1C011C908
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C012A314 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetUsageValueArray(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char *a5,
        int a6,
        struct _HIDP_PREPARSED_DATA *a7,
        char *a8,
        unsigned int a9)
{
  if ( gpfnHidP_GetUsageValueArray )
    return gpfnHidP_GetUsageValueArray(HidP_Input, a2, a3, a4, a5, 8u, a7, a8, a9);
  else
    return -1073741637;
}
