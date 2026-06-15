/*
 * XREFs of __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x1800353C4
 * Callers:
 *     __imp_load_WinStationQueryEnforcementCore @ 0x1800353B8 (__imp_load_WinStationQueryEnforcementCore.c)
 *     __imp_load_WinStationQueryInformationW @ 0x180035498 (__imp_load_WinStationQueryInformationW.c)
 *     __imp_load_WinStationIsSessionRemoteable @ 0x1800354AA (__imp_load_WinStationIsSessionRemoteable.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180033F60 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_session_winsta_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_session_winsta_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
