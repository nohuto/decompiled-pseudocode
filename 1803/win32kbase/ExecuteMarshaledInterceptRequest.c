/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C012DE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0134C7C (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void ExecuteMarshaledInterceptRequest()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  v0 = (_DWORD *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( v0 )
  {
    if ( v0[22] == (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1);
    if ( v0[4] != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1);
    CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor::MouseInterceptState *)(v0 + 686));
  }
}
