/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll @ 0x18002CD4D
 * Callers:
 *     __imp_load_GetPropW @ 0x18002CD41 (__imp_load_GetPropW.c)
 *     __imp_load_EnumChildWindows @ 0x18002CE57 (__imp_load_EnumChildWindows.c)
 *     __imp_load_SetForegroundWindow @ 0x18002D4F9 (__imp_load_SetForegroundWindow.c)
 *     __imp_load_GetForegroundWindow @ 0x18002D50B (__imp_load_GetForegroundWindow.c)
 *     __imp_load_GetWindowThreadProcessId @ 0x18002D51D (__imp_load_GetWindowThreadProcessId.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180008D60 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
