/*
 * XREFs of ??$UserPresenceFlags@_N_N_N_N@TaskFlowDataEngineTelemetry@@SAX$$QEA_N000@Z @ 0x1802198C8
 * Callers:
 *     ?OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180219FE0 (-OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

TLG_STATUS __fastcall TaskFlowDataEngineTelemetry::UserPresenceFlags<bool,bool,bool,bool>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v9; // rcx
  int v10; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  int v14; // [rsp+44h] [rbp-3Dh] BYREF
  int v15; // [rsp+48h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  int *v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  int *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  int *v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  int *v27; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+B0h] [rbp+2Fh]
  int v29; // [rsp+B4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805C2260;
    qword_1805C2260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2278 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2260, qword_1805C2278);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1805C2260);
  }
  result = (int)Context;
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a1;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v12 = v10;
    v18 = &v12;
    v13 = *a2;
    v21 = &v13;
    v14 = *a3;
    v24 = &v14;
    v15 = *a4;
    v27 = &v15;
    v19 = 4;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    return TlgWrite(v9, &unk_1804EF683, 0LL, 0LL, 6u, &pData);
  }
  return result;
}
