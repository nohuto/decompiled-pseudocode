/*
 * XREFs of ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x1C01934A8
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0191EC8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(
        void **this,
        struct _KTHREAD *a2,
        __int64 a3)
{
  void *v3; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *this;
  if ( !*this )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v3 = *this;
  }
  Object[0] = a2;
  Object[1] = v3;
  return KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL) >= 1;
}
