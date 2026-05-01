/*
 * XREFs of ??$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@TaskFlowDataEngineTelemetry@@SAXAEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@Z @ 0x180219790
 * Callers:
 *     ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x180219E30 (-OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

TLG_STATUS __fastcall TaskFlowDataEngineTelemetry::UserPresenceDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceState &,__int64 &>(
        int *a1,
        __int64 *a2)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v8; // [rsp+3Ch] [rbp-15h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  __int64 v10; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  int *v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  __int64 *v15; // [rsp+88h] [rbp+37h]
  int v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+94h] [rbp+43h]

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
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *a1;
    v14 = 0;
    v17 = 0;
    v8 = v6;
    v12 = &v8;
    v10 = *a2;
    v15 = &v10;
    v13 = 4;
    v16 = 8;
    return TlgWrite(v5, &unk_1804EF6D1, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
