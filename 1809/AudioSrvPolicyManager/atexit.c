/*
 * XREFs of atexit @ 0x1800370B4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800011D0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800011F0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001260 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001320 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__g_StreamClassPolicyManager__ @ 0x1800013E0 (_dynamic_initializer_for__g_StreamClassPolicyManager__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180001400 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001420 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001450 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x1800014A0 (_dynamic_initializer_for__TsSessionList__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x1800014C0 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001500 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001520 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800015B0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000829C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034F18 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180037BB0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x18003705C (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
