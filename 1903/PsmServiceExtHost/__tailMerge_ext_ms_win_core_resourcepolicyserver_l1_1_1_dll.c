/*
 * XREFs of __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll @ 0x180048548
 * Callers:
 *     __imp_load_RmRpsInitialize @ 0x18004853C (__imp_load_RmRpsInitialize.c)
 *     __imp_load_RmRpsQueryResourceSetInfo @ 0x18004861C (__imp_load_RmRpsQueryResourceSetInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180046360 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
