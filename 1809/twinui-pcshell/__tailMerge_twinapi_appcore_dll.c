/*
 * XREFs of __tailMerge_twinapi_appcore_dll @ 0x180087D88
 * Callers:
 *     __imp_load_CoreIsWindowServiceSupported @ 0x180087D7C (__imp_load_CoreIsWindowServiceSupported.c)
 *     __imp_load_CoreEnumWindowServices @ 0x180087E07 (__imp_load_CoreEnumWindowServices.c)
 *     __imp_load_CoreQueryWindowService @ 0x180087E19 (__imp_load_CoreQueryWindowService.c)
 *     __imp_load_CoreUnregisterWindowService @ 0x180087E2B (__imp_load_CoreUnregisterWindowService.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180080A00 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_twinapi_appcore_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_twinapi_appcore_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
