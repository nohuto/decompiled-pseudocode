/*
 * XREFs of RtlGetActiveActivationContext @ 0x18002D830
 * Callers:
 *     sub_18002AC94 @ 0x18002AC94 (sub_18002AC94.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x180029A80 (RtlAddRefActivationContext.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlGetActiveActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  PACTIVATION_CONTEXT_STACK ActivationContextStackPointer; // rdx
  ULONG_PTR ActiveFrame; // rbx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-59h] BYREF

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( !ActivationContext )
    return -1073741811;
  *(_QWORD *)&ActivationContext->RefCount = 0LL;
  if ( !ActivationContextStackPointer )
    return 0;
  ActiveFrame = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
  if ( !ActivationContextStackPointer->ActiveFrame )
    return 0;
  if ( (*(_DWORD *)(ActiveFrame + 16) & 0x70) == 0x20
    && ((*(_BYTE *)(ActiveFrame + 16) & 8) != 0
     || *(_QWORD *)(ActiveFrame - 16) < 0x48uLL
     || *(_QWORD *)(ActiveFrame + 24) == ~*(_QWORD *)ActiveFrame
     && *(_QWORD *)(ActiveFrame + 32) == ~*(_QWORD *)(ActiveFrame + 8)) )
  {
    RtlAddRefActivationContext(*(PACTIVATION_CONTEXT *)(ActiveFrame + 8));
    *(_QWORD *)&ActivationContext->RefCount = *(_QWORD *)(ActiveFrame + 8);
    return 0;
  }
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 4;
  ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)ActivationContextStackPointer;
  ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
  ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
  ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
  ExceptionRecord.ExceptionCode = -1072365548;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
  return -1073741595;
}
