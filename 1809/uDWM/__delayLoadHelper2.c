/*
 * XREFs of __delayLoadHelper2 @ 0x18004AD60
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18004C30A (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18004C395 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x18004C432 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18004C505 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18004C69A (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x18004C725 (__tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x18004C7E6 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18004C871 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_comctl32_dll @ 0x18004C920 (__tailMerge_comctl32_dll.c)
 *     __tailMerge_uxtheme_dll @ 0x18004C9BD (__tailMerge_uxtheme_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x18004CA6C (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_winsta_dll @ 0x18004CAF7 (__tailMerge_winsta_dll.c)
 *     __tailMerge_d2d1_dll @ 0x18004CBB8 (__tailMerge_d2d1_dll.c)
 *     __tailMerge_d3d11_dll @ 0x18004CC43 (__tailMerge_d3d11_dll.c)
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
