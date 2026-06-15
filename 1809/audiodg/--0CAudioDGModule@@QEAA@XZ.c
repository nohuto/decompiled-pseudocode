/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x14001A1F0
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010D0 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14001A310 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x140030840 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=9
CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  int v2; // ecx
  const struct wil::FailureInfo *v4; // rdx
  _BYTE v5[152]; // [rsp+60h] [rbp-98h] BYREF

  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>();
  _AtlModule = (__int64)&CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  qword_140088E88 = (__int64)&CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  qword_140088E98 = 0LL;
  hHandle = 0LL;
  qword_140088EA8 = 0LL;
  dword_140088EB0 = 0;
  byte_140088EB4 = 0;
  qword_140088EB8 = 0LL;
  g_fEventTracingEnabled = 1;
  v1 = EtwRegisterTraceGuidsW(AeWmiCallback, 0LL, &AEWMIGUID, 1LL);
  v2 = g_fEventTracingEnabled;
  if ( v1 )
    v2 = 0;
  g_fEventTracingEnabled = v2;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioDgTelemetryProvider::FallbackTelemetryCallback )
  {
    memset_0(v5, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v5, v4);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))AudioDgTelemetryProvider::FallbackTelemetryCallback;
  g_SysFxUtilTlp = (TraceLoggingHProvider)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                            (__int64)AudioDgTelemetryProvider::FallbackTelemetryCallback,
                                            lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
  return (CAudioDGModule *)&_AtlModule;
}
