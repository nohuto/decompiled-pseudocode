/*
 * XREFs of ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x1C0157BB0
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C0150D60 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01585B4 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(CMouseProcessor *this)
{
  if ( *((_DWORD *)this + 18) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredMsgKM("We should marshal only when processor hosted on non-MIT (that is DT) thread");
  if ( *((_DWORD *)this + 4) != 1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Currently we should never need to marshal on OneCore");
  CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor *)((char *)this + 2744));
}
