/*
 * XREFs of ?CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ @ 0x180095C1C
 * Callers:
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x180095F5C (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180006D30 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     atexit @ 0x1800CAD84 (atexit.c)
 */

void CortanaProactiveTelemetry::CortanaUndocking_ReplaceDecisionReadBeforeReevaluation(void)
{
  const struct _TlgProvider_t *v0; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v3; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+68h] [rbp-18h]
  int v6; // [rsp+70h] [rbp-10h]
  int v7; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18018F958;
    qword_18018F958[0] = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_18018F970 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18018F958, qword_18018F970);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18018F958);
  }
  v0 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x400000000000LL) == *((_QWORD *)v0 + 3) )
  {
    v7 = 0;
    v5 = &v3;
    v3 = 0x2000000LL;
    v6 = 8;
    TlgWrite(v0, &unk_18016F06B, 0LL, 0LL, 3u, &pData);
  }
}
