/*
 * XREFs of __delayLoadHelper2 @ 0x1800D8EA0
 * Callers:
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800E9049 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x1800E90E6 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x1800E9171 (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_cabinet_dll @ 0x1800E95BB (__tailMerge_cabinet_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800E966A (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x1800E9701 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x1800E979E (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x1800E9883 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800E9932 (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll @ 0x1800E99F3 (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_8_dll @ 0x1800E9A7E (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_8_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll @ 0x1800E9B09 (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x1800E9B94 (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_d3d12_dll @ 0x1800E9C1F (__tailMerge_d3d12_dll.c)
 *     __tailMerge_dwrite_dll @ 0x1800E9CAA (__tailMerge_dwrite_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x1800E9D35 (__tailMerge_wuceffects_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x1800E9DDE (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll @ 0x1800E9E69 (__tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll @ 0x1800E9F6C (__tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x1800EA099 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll @ 0x1800EA19C (__tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll @ 0x1800EA215 (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x1800EA2B2 (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_ninput_dll @ 0x1800EA33D (__tailMerge_ninput_dll.c)
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
