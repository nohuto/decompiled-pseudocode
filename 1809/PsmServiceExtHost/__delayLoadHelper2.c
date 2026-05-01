/*
 * XREFs of __delayLoadHelper2 @ 0x1800475A0
 * Callers:
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll @ 0x18004880C (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll @ 0x180048897 (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll @ 0x18004896A (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll @ 0x180048A4C (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll @ 0x180048AD6 (__tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll @ 0x180048BC8 (__tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x180048CA8 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll @ 0x180048D33 (__tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll @ 0x180048DBE (__tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll @ 0x180048EE8 (__tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll.c)
 *     __tailMerge_feclient_dll @ 0x180048FA9 (__tailMerge_feclient_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x1800490FC (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll @ 0x1800491DC (__tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x180049310 (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
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
