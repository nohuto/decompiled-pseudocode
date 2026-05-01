/*
 * XREFs of ??$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEBKAEAW4InternalState@XamlLauncherState@@@Z @ 0x1802F8228
 * Callers:
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x1802FC368 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

BOOLEAN __fastcall StartWindowTelemetry::CortanaCancelledDueToTimerCutoff<unsigned long const &,enum XamlLauncherState::InternalState &>(
        __int64 a1,
        int *a2)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  int v9; // [rsp+3Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  int *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]

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
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    result = TlgKeywordOn(v5, 0x400000000000uLL);
    if ( result )
    {
      v7 = *a2;
      v14 = 0;
      v17 = 0;
      v9 = v7;
      v15 = &v9;
      v12 = a1;
      v13 = 4;
      v16 = 4;
      return TlgWrite(v6, &unk_1804D7D41, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
