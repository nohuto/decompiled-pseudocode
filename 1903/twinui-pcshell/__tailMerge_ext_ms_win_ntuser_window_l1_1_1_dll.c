/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll @ 0x180089FDF
 * Callers:
 *     __imp_load_GetGUIThreadInfo @ 0x180089FD3 (__imp_load_GetGUIThreadInfo.c)
 *     __imp_load_SetLayeredWindowAttributes @ 0x18008A05E (__imp_load_SetLayeredWindowAttributes.c)
 *     __imp_load_GetWindowTextLengthW @ 0x18008A070 (__imp_load_GetWindowTextLengthW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180083200 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
