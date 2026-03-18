/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C01840E0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0191D80 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void ExecuteMarshaledInterceptRequest()
{
  _DWORD *MouseProcessor; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  MouseProcessor = (_DWORD *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    if ( MouseProcessor[16] == (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
    if ( MouseProcessor[2] != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
    CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor::MouseInterceptState *)(MouseProcessor + 862));
  }
}
