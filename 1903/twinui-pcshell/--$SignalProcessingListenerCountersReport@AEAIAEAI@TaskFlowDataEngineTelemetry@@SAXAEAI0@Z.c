/*
 * XREFs of ??$SignalProcessingListenerCountersReport@AEAIAEAI@TaskFlowDataEngineTelemetry@@SAXAEAI0@Z @ 0x1801EE91C
 * Callers:
 *     ?UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F6C20 (-UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

BOOLEAN TaskFlowDataEngineTelemetry::SignalProcessingListenerCountersReport<unsigned int &,unsigned int &>()
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-21h] BYREF
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  unsigned int *v7; // [rsp+70h] [rbp+17h]
  int v8; // [rsp+78h] [rbp+1Fh]
  int v9; // [rsp+7Ch] [rbp+23h]
  unsigned int *v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+88h] [rbp+2Fh]
  int v12; // [rsp+8Ch] [rbp+33h]
  __int64 *v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599DF8;
    qword_180599DF8[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599E10 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599DF8, qword_180599E10);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_180599DF8);
  }
  result = (unsigned __int8)Context;
  v1 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v1 > 5u )
  {
    result = TlgKeywordOn(v1, 0x400000000000uLL);
    if ( result )
    {
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v7 = &ListenerTelemetryReport::m_knownFailureCounter;
      v10 = &ListenerTelemetryReport::m_unknownFailureCounter;
      v13 = &v5;
      v8 = 4;
      v11 = 4;
      v5 = 0x1000000LL;
      v14 = 8;
      return TlgWrite(v2, &unk_1804C8CDD, 0LL, 0LL, 5u, &pData);
    }
  }
  return result;
}
