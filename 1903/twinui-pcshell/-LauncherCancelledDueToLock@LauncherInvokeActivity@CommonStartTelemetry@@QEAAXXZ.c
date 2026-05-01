/*
 * XREFs of ?LauncherCancelledDueToLock@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x1802FC110
 * Callers:
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1802FCBB8 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToLock(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  WINBOOL v4; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = &qword_180599F68;
    qword_180599F68 = &ShellScreenClippingLogging::`vftable';
    qword_180599F80 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599F68, qword_180599F80);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180599F68);
  }
  v2 = (const struct _TlgProvider_t *)v5[1];
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( TlgKeywordOn(v2, 0x200000000000uLL) )
      TlgWrite(v3, &unk_1804D8544, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
  }
}
