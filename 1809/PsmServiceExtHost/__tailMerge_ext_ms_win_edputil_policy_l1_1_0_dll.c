/*
 * XREFs of __tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll @ 0x180048EE8
 * Callers:
 *     __imp_load_EdpUtilIsAppEnlightened @ 0x180048EDC (__imp_load_EdpUtilIsAppEnlightened.c)
 *     __imp_load_EdpGetIsManaged @ 0x180048F67 (__imp_load_EdpGetIsManaged.c)
 *     __imp_load_EdpUtilGetEnterpriseContextByName @ 0x180048F79 (__imp_load_EdpUtilGetEnterpriseContextByName.c)
 *     __imp_load_EdpUtilFreeEnterpriseContext @ 0x180048F8B (__imp_load_EdpUtilFreeEnterpriseContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800475A0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_edputil_policy_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
