/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x18004E986
 * Callers:
 *     __imp_load_GetDpiForSystem @ 0x18004E97A (__imp_load_GetDpiForSystem.c)
 *     __imp_load_GetAwarenessFromDpiAwarenessContext @ 0x18004EA90 (__imp_load_GetAwarenessFromDpiAwarenessContext.c)
 *     __imp_load_GetWindowDpiAwarenessContext @ 0x18004EAA2 (__imp_load_GetWindowDpiAwarenessContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18004CEE0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
