/*
 * XREFs of ??$ClaimForeground@AEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEAW4InternalState@XamlLauncherState@@@Z @ 0x1802A0024
 * Callers:
 *     ?ClaimForeground@XamlLauncherState@@UEAAXXZ @ 0x1802A28E0 (-ClaimForeground@XamlLauncherState@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall StartWindowTelemetry::ClaimForeground<enum XamlLauncherState::InternalState &>(int *a1)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050FBC0;
    qword_18050FBC0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050FBD8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050FBC0, qword_18050FBD8);
    InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_18050FBC0);
  }
  result = (int)Context;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    v11 = 0;
    v6 = v4;
    v9 = &v6;
    v10 = 4;
    return TlgWrite(v3, &unk_1804621C0, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
