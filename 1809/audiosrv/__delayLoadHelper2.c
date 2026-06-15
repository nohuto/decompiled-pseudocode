/*
 * XREFs of __delayLoadHelper2 @ 0x180015460
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x180060070 (__tailMerge_ksuser_dll.c)
 *     __tailMerge_hrtfapo_dll @ 0x1800600FB (__tailMerge_hrtfapo_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180061939 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x1800619C4 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180061A4F (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x180061ADA (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180061B77 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x180061C02 (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x180061C8D (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_0_dll @ 0x180061D60 (__tailMerge_api_ms_win_devices_query_l1_1_0_dll.c)
 *     __tailMerge_hid_dll @ 0x180061DFD (__tailMerge_hid_dll.c)
 *     __tailMerge_propsys_dll @ 0x180061F72 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18006208D (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x18006236A (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_0_dll @ 0x180062473 (__tailMerge_api_ms_win_service_core_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x1800625A0 (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_faultrep_dll @ 0x180062661 (__tailMerge_faultrep_dll.c)
 *     __tailMerge_ssdm_dll @ 0x180062706 (__tailMerge_ssdm_dll.c)
 *     __tailMerge_avrt_dll @ 0x180062791 (__tailMerge_avrt_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x1800628A8 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180062945 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll @ 0x180062A36 (__tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll @ 0x180062B18 (__tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x180062BA3 (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x180062F78 (__tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll.c)
 *     __tailMerge_bcrypt_dll @ 0x1800632C8 (__tailMerge_bcrypt_dll.c)
 *     __tailMerge_devobj_dll @ 0x1800634BB (__tailMerge_devobj_dll.c)
 *     __tailMerge_rmclient_dll @ 0x18006358E (__tailMerge_rmclient_dll.c)
 *     __tailMerge_comppkgsup_dll @ 0x18006364F (__tailMerge_comppkgsup_dll.c)
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
