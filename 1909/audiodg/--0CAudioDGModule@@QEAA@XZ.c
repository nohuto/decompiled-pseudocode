/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x1400155C0
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010D0 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     atexit @ 0x140016558 (atexit.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x140028BD0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14002988C (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140029D3C (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=10
CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  int v2; // ecx
  const struct wil::FailureInfo *v3; // rdx
  GUID *v5; // [rsp+48h] [rbp-69h] BYREF
  int v6; // [rsp+50h] [rbp-61h]
  __int64 v7; // [rsp+58h] [rbp-59h]
  _BYTE v8[160]; // [rsp+68h] [rbp-49h] BYREF
  CAudioDGModule *fPending; // [rsp+118h] [rbp+67h] BYREF
  LPVOID Context; // [rsp+120h] [rbp+6Fh] BYREF
  void *v11; // [rsp+128h] [rbp+77h]

  fPending = this;
  v7 = -2LL;
  v11 = &_AtlModule;
  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>();
  _AtlModule = &CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  qword_140085FD8 = (__int64)&CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  qword_140085FE8 = 0LL;
  hHandle = 0LL;
  qword_140085FF8 = 0LL;
  dword_140086000 = 0;
  byte_140086004 = 0;
  qword_140086008 = 0LL;
  v5 = &GUID_NULL;
  g_fEventTracingEnabled = 1;
  v1 = EtwRegisterTraceGuidsW(AeWmiCallback, 0LL, &AEWMIGUID);
  v2 = g_fEventTracingEnabled;
  if ( v1 )
    v2 = 0;
  g_fEventTracingEnabled = v2;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioDgTelemetryProvider::FallbackTelemetryCallback )
  {
    memset_0(v8, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v8, v3);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))AudioDgTelemetryProvider::FallbackTelemetryCallback;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v5 = (GUID *)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_140085EE8;
    qword_140085EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140085F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v5);
  }
  g_SysFxUtilTlp = (TraceLoggingHProvider)*((_QWORD *)Context + 1);
  SetUnhandledExceptionFilter(AudioDGUnhandledExceptionFilter);
  return (CAudioDGModule *)&_AtlModule;
}
