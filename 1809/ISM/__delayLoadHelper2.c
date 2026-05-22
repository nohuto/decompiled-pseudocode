/*
 * XREFs of __delayLoadHelper2 @ 0x18009F810
 * Callers:
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll @ 0x18012C730 (__tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll @ 0x18012C7BB (__tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x18012C8AC (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x18012CD19 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll @ 0x18012CE22 (__tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_2_dll @ 0x18012CEBF (__tailMerge_ext_ms_win_ntuser_window_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x18012CF6E (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x18012CFF9 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_session_l1_1_1_dll @ 0x18012D096 (__tailMerge_api_ms_win_rtcore_session_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll @ 0x18012D121 (__tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x18012D22A (__tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x18012D369 (__tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll @ 0x18012D3F4 (__tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x18012D47F (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18012D50A (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll @ 0x18012D601 (__tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_3_dll @ 0x18012D69E (__tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18012D780 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x18012D841 (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x18012D8DE (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
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
