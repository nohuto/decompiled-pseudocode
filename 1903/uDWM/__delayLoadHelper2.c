/*
 * XREFs of __delayLoadHelper2 @ 0x18004D030
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18004E5FA (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18004E685 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x18004E722 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18004E7F5 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18004E98A (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x18004EA15 (__tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x18004EAD6 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18004EB61 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_comctl32_dll @ 0x18004EC10 (__tailMerge_comctl32_dll.c)
 *     __tailMerge_uxtheme_dll @ 0x18004ECAD (__tailMerge_uxtheme_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x18004ED5C (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_winsta_dll @ 0x18004EDE7 (__tailMerge_winsta_dll.c)
 *     __tailMerge_d2d1_dll @ 0x18004EEA8 (__tailMerge_d2d1_dll.c)
 *     __tailMerge_d3d11_dll @ 0x18004EF33 (__tailMerge_d3d11_dll.c)
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
