/*
 * XREFs of __delayLoadHelper2 @ 0x1800D8890
 * Callers:
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800E8199 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x1800E8236 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x1800E82C1 (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_cabinet_dll @ 0x1800E870B (__tailMerge_cabinet_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800E87BA (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x1800E8851 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x1800E88EE (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x1800E89D3 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800E8A82 (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll @ 0x1800E8B43 (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_8_dll @ 0x1800E8BCE (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_8_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll @ 0x1800E8C59 (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x1800E8CE4 (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_d3d12_dll @ 0x1800E8D6F (__tailMerge_d3d12_dll.c)
 *     __tailMerge_dwrite_dll @ 0x1800E8DFA (__tailMerge_dwrite_dll.c)
 *     __tailMerge_faultrep_dll @ 0x1800E8E85 (__tailMerge_faultrep_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x1800E8F10 (__tailMerge_wuceffects_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x1800E8FB9 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll @ 0x1800E9044 (__tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll @ 0x1800E9148 (__tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x1800E9275 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll @ 0x1800E9378 (__tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll @ 0x1800E93F1 (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x1800E948E (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_ninput_dll @ 0x1800E9519 (__tailMerge_ninput_dll.c)
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
