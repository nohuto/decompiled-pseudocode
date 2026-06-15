/*
 * XREFs of __delayLoadHelper2 @ 0x1800445D0
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x18006369C (__tailMerge_ksuser_dll.c)
 *     __tailMerge_hrtfapo_dll @ 0x180063727 (__tailMerge_hrtfapo_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180064FF8 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180065083 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x18006510E (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x180065199 (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180065236 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x1800652C1 (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18006534C (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_0_dll @ 0x18006541F (__tailMerge_api_ms_win_devices_query_l1_1_0_dll.c)
 *     __tailMerge_hid_dll @ 0x1800654BC (__tailMerge_hid_dll.c)
 *     __tailMerge_propsys_dll @ 0x180065631 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18006574C (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x180065A29 (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_0_dll @ 0x180065B32 (__tailMerge_api_ms_win_service_core_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x180065C5F (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_faultrep_dll @ 0x180065D20 (__tailMerge_faultrep_dll.c)
 *     __tailMerge_ssdm_dll @ 0x180065DC6 (__tailMerge_ssdm_dll.c)
 *     __tailMerge_avrt_dll @ 0x180065E51 (__tailMerge_avrt_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180065F68 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180066005 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll @ 0x1800660F6 (__tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll @ 0x1800661D8 (__tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x180066263 (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x180066638 (__tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll.c)
 *     __tailMerge_devobj_dll @ 0x1800669F6 (__tailMerge_devobj_dll.c)
 *     __tailMerge_rmclient_dll @ 0x180066AC9 (__tailMerge_rmclient_dll.c)
 *     __tailMerge_comppkgsup_dll @ 0x180066B8A (__tailMerge_comppkgsup_dll.c)
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
