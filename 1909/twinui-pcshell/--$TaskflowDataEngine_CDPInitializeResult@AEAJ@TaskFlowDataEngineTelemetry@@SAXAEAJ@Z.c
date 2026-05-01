/*
 * XREFs of ??$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18020DB74
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180213B6C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

BOOLEAN __fastcall TaskFlowDataEngineTelemetry::TaskflowDataEngine_CDPInitializeResult<long &>(int *a1)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-11h] BYREF
  __int64 v9; // [rsp+40h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  int *v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]
  __int64 *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

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
  result = (unsigned __int8)Context;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    result = TlgKeywordOn(v3, 0x400000000000uLL);
    if ( result )
    {
      v5 = *a1;
      v13 = 0;
      v16 = 0;
      v7 = v5;
      v11 = &v7;
      v14 = &v9;
      v12 = 4;
      v9 = 0x1000000LL;
      v15 = 8;
      return TlgWrite(v4, &unk_1804EF1FB, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
