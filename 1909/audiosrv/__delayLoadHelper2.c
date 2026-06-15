/*
 * XREFs of __delayLoadHelper2 @ 0x180048A90
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x18006468C (__tailMerge_ksuser_dll.c)
 *     __tailMerge_hrtfapo_dll @ 0x180064717 (__tailMerge_hrtfapo_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180065FE8 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180066073 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800660FE (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x180066189 (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180066226 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x1800662B1 (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18006633C (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_0_dll @ 0x18006640F (__tailMerge_api_ms_win_devices_query_l1_1_0_dll.c)
 *     __tailMerge_hid_dll @ 0x1800664AC (__tailMerge_hid_dll.c)
 *     __tailMerge_propsys_dll @ 0x180066621 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18006673C (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x180066A19 (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_0_dll @ 0x180066B22 (__tailMerge_api_ms_win_service_core_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x180066C4F (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_faultrep_dll @ 0x180066D10 (__tailMerge_faultrep_dll.c)
 *     __tailMerge_ssdm_dll @ 0x180066DB6 (__tailMerge_ssdm_dll.c)
 *     __tailMerge_avrt_dll @ 0x180066E41 (__tailMerge_avrt_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180066F58 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180066FF5 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll @ 0x1800670E6 (__tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll @ 0x1800671C8 (__tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x180067253 (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x180067628 (__tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll.c)
 *     __tailMerge_devobj_dll @ 0x1800679E6 (__tailMerge_devobj_dll.c)
 *     __tailMerge_rmclient_dll @ 0x180067AB9 (__tailMerge_rmclient_dll.c)
 *     __tailMerge_comppkgsup_dll @ 0x180067B7A (__tailMerge_comppkgsup_dll.c)
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
