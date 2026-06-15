/*
 * XREFs of atexit @ 0x1800349A4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001180 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800011A0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_StreamClassPolicyManager__ @ 0x180001260 (_dynamic_initializer_for__g_StreamClassPolicyManager__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180001280 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x1800012A0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x1800012D0 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     _dynamic_initializer_for__TsSessionListLock__ @ 0x180001320 (_dynamic_initializer_for__TsSessionListLock__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180001350 (_dynamic_initializer_for__TsSessionList__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001370 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1800013B0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800013D0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001460 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180031D58 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800354B0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x18003494C (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
