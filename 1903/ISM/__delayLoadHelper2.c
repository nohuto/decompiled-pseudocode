/*
 * XREFs of __delayLoadHelper2 @ 0x180008D60
 * Callers:
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll @ 0x18002CD4D (__tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll @ 0x18002CDD8 (__tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x18002D2C2 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll @ 0x18002D3CB (__tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_2_dll @ 0x18002D47A (__tailMerge_ext_ms_win_ntuser_window_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x18002D53B (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x18002D5C6 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_session_l1_1_1_dll @ 0x18002D663 (__tailMerge_api_ms_win_rtcore_session_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll @ 0x18002D6EE (__tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x18002D779 (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x18002D816 (__tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x18002D955 (__tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll @ 0x18002D9E0 (__tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x18002DA6B (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18002DCA6 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll @ 0x18002DD8B (__tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_3_dll @ 0x18002DE28 (__tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18002DF08 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x18002DFC9 (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x18002E066 (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
