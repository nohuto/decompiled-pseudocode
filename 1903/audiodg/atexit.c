/*
 * XREFs of atexit @ 0x140016148
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x140001090 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1400010A0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010D0 (_dynamic_initializer_for___AtlModule__.c)
 *     _dynamic_initializer_for__g_CpuManager__ @ 0x1400010F0 (_dynamic_initializer_for__g_CpuManager__.c)
 *     _dynamic_initializer_for__SadMap__ @ 0x140001100 (_dynamic_initializer_for__SadMap__.c)
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001110 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__CVpoContext::s_mapVpoContext__ @ 0x140001130 (_dynamic_initializer_for__CVpoContext--s_mapVpoContext__.c)
 *     _dynamic_initializer_for__SubmixList__ @ 0x140001140 (_dynamic_initializer_for__SubmixList__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001150 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     _dynamic_initializer_for__g_AudioHistoryManager__ @ 0x140001170 (_dynamic_initializer_for__g_AudioHistoryManager__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001180 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x1400011A0 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011E0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001220 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x140001240 (_dynamic_initializer_for__gEventList__.c)
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x140001250 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140001270 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__ @ 0x140001290 (_dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__.c)
 *     ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000A938 (-InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObj.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000BAA0 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000C8B0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x14000EE44 (-IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F6A0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140010120 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x1400151B0 (--0CAudioDGModule@@QEAA@XZ.c)
 *     pre_c_initialization @ 0x1400157E0 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1400171A0 (__scrt_initialize_thread_safe_statics.c)
 *     ?FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x14002A7D0 (-FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14002B8C4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x14002F700 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140037070 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140038A50 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C80 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 * Callees:
 *     _onexit @ 0x1400160F0 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
