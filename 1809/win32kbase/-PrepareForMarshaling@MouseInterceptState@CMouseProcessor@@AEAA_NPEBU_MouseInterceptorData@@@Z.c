/*
 * XREFs of ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C0158AC8
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01586F8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C006C700 (CreateKernelEvent.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::PrepareForMarshaling(
        CMouseProcessor::MouseInterceptState *this,
        const struct _MouseInterceptorData *a2)
{
  struct _KEVENT *KernelEvent; // rax
  bool v5; // zf

  if ( *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredMsgKM("Marshaling is not needed as we are on the interceptor's thread. Why are we here?");
  if ( *((_DWORD *)this + 9) != (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredMsgKM("Marshaling cannot be initiated on this thread. Why are we here?");
  *(_OWORD *)((char *)this + 88) = 0uLL;
  *((_QWORD *)this + 13) = 0LL;
  KernelEvent = (struct _KEVENT *)*((_QWORD *)this + 14);
  v5 = KernelEvent == 0LL;
  if ( !KernelEvent )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *((_QWORD *)this + 14) = KernelEvent;
    v5 = KernelEvent == 0LL;
  }
  if ( KernelEvent )
  {
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  }
  return !v5;
}
