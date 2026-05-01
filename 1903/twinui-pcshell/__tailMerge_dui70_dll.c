/*
 * XREFs of __tailMerge_dui70_dll @ 0x18008AC3B
 * Callers:
 *     __imp_load_InitProcessPriv @ 0x18008AC2F (__imp_load_InitProcessPriv.c)
 *     __imp_load_InitThread @ 0x18008ACBA (__imp_load_InitThread.c)
 *     __imp_load_UnInitProcessPriv @ 0x18008ACCC (__imp_load_UnInitProcessPriv.c)
 *     __imp_load_SkipDLLUnloadInitChecks @ 0x18008ACDE (__imp_load_SkipDLLUnloadInitChecks.c)
 *     __imp_load_UnInitThread @ 0x18008ACF0 (__imp_load_UnInitThread.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180083200 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_dui70_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_DUI70_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
