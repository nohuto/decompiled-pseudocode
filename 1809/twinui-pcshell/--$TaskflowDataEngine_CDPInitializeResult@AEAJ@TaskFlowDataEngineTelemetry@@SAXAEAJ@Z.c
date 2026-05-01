/*
 * XREFs of ??$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x1801A6ED0
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AA9BC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

BOOLEAN __fastcall TaskFlowDataEngineTelemetry::TaskflowDataEngine_CDPInitializeResult<long &>(int *a1)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050FA50;
    qword_18050FA50[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050FA68 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050FA50, qword_18050FA68);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_18050FA50);
  }
  result = (unsigned __int8)Context;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    result = TlgKeywordOn(v3, 0x400000000000uLL);
    if ( result )
    {
      v5 = *a1;
      v12 = 0;
      v7 = v5;
      v10 = &v7;
      v11 = 4;
      return TlgWrite(v4, &unk_180455269, 0LL, 0LL, 3u, &pData);
    }
  }
  return result;
}
