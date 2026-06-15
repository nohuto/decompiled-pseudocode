/*
 * XREFs of ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140004670 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x140004910 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140005F90 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140006DE0 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140009760 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000C7B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140012D18 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140013F48 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140019750 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x14001A1F0 (--0CAudioDGModule@@QEAA@XZ.c)
 *     ?FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x140031C50 (-FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x14001AF50 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x14001C308 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AudioDgTelemetryProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    v7 = &qword_1400891F8;
    qword_1400891F8 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140089210 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v4);
  }
  return v7;
}
