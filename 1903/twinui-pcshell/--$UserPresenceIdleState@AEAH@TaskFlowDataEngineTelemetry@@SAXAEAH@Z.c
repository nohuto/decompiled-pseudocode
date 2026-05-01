/*
 * XREFs of ??$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z @ 0x1801FA968
 * Callers:
 *     ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x1801FAD60 (-OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

TLG_STATUS __fastcall TaskFlowDataEngineTelemetry::UserPresenceIdleState<int &>(__int64 a1)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v3; // rcx
  WINBOOL v4; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = qword_180599DF8;
    qword_180599DF8[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599E10 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599DF8, qword_180599E10);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_180599DF8);
  }
  result = (int)v5;
  v3 = (const struct _TlgProvider_t *)v5[1];
  if ( *(_DWORD *)v3 > 5u )
  {
    v9 = 0;
    v7 = a1;
    v8 = 4;
    return TlgWrite(v3, &unk_1804C90DA, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
