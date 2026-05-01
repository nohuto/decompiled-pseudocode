/*
 * XREFs of ??$CriticalProcessDidntUseAnyCpu@PEBG@StartWindowTelemetry@@SAX$$QEAPEBG@Z @ 0x180317B50
 * Callers:
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18031D3D4 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

BOOLEAN __fastcall StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const *>(LPCWSTR *a1)
{
  BOOLEAN result; // al
  TraceLoggingHProvider v3; // r10
  WINBOOL v4; // [rsp+30h] [rbp-58h] BYREF
  TraceLoggingHProvider *v5; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = (TraceLoggingHProvider *)&qword_1805C23C8;
    qword_1805C23C8 = &ShellScreenClippingLogging::`vftable';
    qword_1805C23E0 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C23C8, qword_1805C23E0);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805C23C8);
  }
  result = (unsigned __int8)v5;
  if ( *(_DWORD *)v5[1] > 5u )
  {
    result = TlgKeywordOn(v5[1], 0x400000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, *a1);
      return TlgWrite(v3, &unk_1804FE07C, 0LL, 0LL, 3u, &pData);
    }
  }
  return result;
}
