/*
 * XREFs of ?CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ @ 0x1801DB3E4
 * Callers:
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YAJPEA_N@Z @ 0x18004965C (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YAJPEA_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void CortanaProactiveTelemetry::CortanaUndocking_ReplaceDecisionReadBeforeReevaluation(void)
{
  const struct _TlgProvider_t *v0; // rcx
  const struct _TlgProvider_t *v1; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+70h] [rbp-10h]
  int v8; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2118;
    qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
  }
  v0 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v0 > 5u )
  {
    if ( TlgKeywordOn(v0, 0x400000000000uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = 0x2000000LL;
      v7 = 8;
      TlgWrite(v1, &unk_1804EA34D, 0LL, 0LL, 3u, &pData);
    }
  }
}
