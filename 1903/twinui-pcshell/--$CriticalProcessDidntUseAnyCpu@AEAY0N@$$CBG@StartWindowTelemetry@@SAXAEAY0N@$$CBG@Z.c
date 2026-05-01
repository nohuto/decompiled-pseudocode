/*
 * XREFs of ??$CriticalProcessDidntUseAnyCpu@AEAY0N@$$CBG@StartWindowTelemetry@@SAXAEAY0N@$$CBG@Z @ 0x1802F85AC
 * Callers:
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1802FDF44 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

BOOLEAN StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[13]>()
{
  BOOLEAN result; // al
  TraceLoggingHProvider v1; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180599F68;
    qword_180599F68 = &ShellScreenClippingLogging::`vftable';
    qword_180599F80 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599F68, qword_180599F80);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180599F68);
  }
  result = (unsigned __int8)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    result = TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, L"searchui.exe");
      return TlgWrite(v1, &unk_1804D7D07, 0LL, 0LL, 3u, &pData);
    }
  }
  return result;
}
