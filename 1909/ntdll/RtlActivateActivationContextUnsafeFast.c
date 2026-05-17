/*
 * XREFs of RtlActivateActivationContextUnsafeFast @ 0x180024F00
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpLoadForwardedDll @ 0x180021EC0 (LdrpLoadForwardedDll.c)
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180033474 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppIopExecuteCallback @ 0x180033520 (TppIopExecuteCallback.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 *     LdrShutdownProcess @ 0x18006B220 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006D950 (LdrpProcessDetachNode.c)
 *     LdrpQuerySxSMUIFile @ 0x180077758 (LdrpQuerySxSMUIFile.c)
 *     RtlDispatchAPC @ 0x18007D5E0 (RtlDispatchAPC.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

void __fastcall RtlActivateActivationContextUnsafeFast(__int64 a1, __int64 a2)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r9
  unsigned __int64 ActiveFrame; // r8
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  if ( *(_QWORD *)a1 >= 0x48uLL )
  {
    *(_QWORD *)(a1 + 40) = ~ActiveFrame;
    *(_QWORD *)(a1 + 48) = ~a2;
    *(_QWORD *)(a1 + 56) = retaddr;
  }
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = ActiveFrame;
  *(_DWORD *)(a1 + 32) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == a2 )
      goto LABEL_8;
  }
  else if ( !a2 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 32) = 48;
    return;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)(a1 + 16);
}
