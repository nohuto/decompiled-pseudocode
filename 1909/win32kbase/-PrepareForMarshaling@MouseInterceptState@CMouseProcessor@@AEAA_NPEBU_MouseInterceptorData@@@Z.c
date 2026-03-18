/*
 * XREFs of ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C018FFC8
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C018FCD8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C005EAA0 (CreateKernelEvent.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::PrepareForMarshaling(
        CMouseProcessor::MouseInterceptState *this,
        const struct _MouseInterceptorData *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // di
  struct _KEVENT *KernelEvent; // rax

  if ( *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( *((_DWORD *)this + 9) != (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  v10 = 1;
  *(_OWORD *)((char *)this + 88) = 0uLL;
  *((_QWORD *)this + 13) = 0LL;
  if ( !*((_QWORD *)this + 14) )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *((_QWORD *)this + 14) = KernelEvent;
    if ( !KernelEvent )
      return 0;
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  return v10;
}
