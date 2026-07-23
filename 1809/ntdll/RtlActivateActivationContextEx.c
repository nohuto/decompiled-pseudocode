/*
 * XREFs of RtlActivateActivationContextEx @ 0x180033820
 * Callers:
 *     RtlActivateActivationContext @ 0x1800337D0 (RtlActivateActivationContext.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180003790 (RtlCaptureStackBackTrace.c)
 *     RtlAddRefActivationContext @ 0x18002E500 (RtlAddRefActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180033948 (RtlpAllocateActivationContextStackFrame.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __cdecl RtlActivateActivationContextEx(
        ULONG Flags,
        PTEB Teb,
        PACTIVATION_CONTEXT ActivationContext,
        PULONG_PTR Cookie)
{
  char v5; // di
  _ACTIVATION_CONTEXT *v6; // rsi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r15
  NTSTATUS result; // eax
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v9; // rbx
  unsigned int v10; // edx
  __int64 NextCookieSequenceNumber; // rax
  unsigned __int64 v12; // rcx
  ULONG BackTraceHash; // [rsp+40h] [rbp+8h] BYREF
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v14; // [rsp+50h] [rbp+18h] BYREF

  v5 = Flags;
  if ( Cookie )
    *Cookie = 0LL;
  v6 = (_ACTIVATION_CONTEXT *)&unk_180118318;
  if ( ActivationContext != (PACTIVATION_CONTEXT)-3LL )
    v6 = ActivationContext;
  if ( (Flags & 0xFFFFFFFE) != 0 || !Teb || v6 == (_ACTIVATION_CONTEXT *)-1LL || !Cookie )
    return -1073741811;
  ActivationContextStackPointer = Teb->ActivationContextStackPointer;
  result = RtlpAllocateActivationContextStackFrame(Flags, ActivationContextStackPointer, &v14);
  if ( result >= 0 )
  {
    v9 = v14;
    v14->Flags = 40;
    if ( (v5 & 1) != 0 )
    {
      v9->Flags = 43;
      RtlAddRefActivationContext(v6);
    }
    if ( RtlpCaptureActivationContextActivationStacks )
      v10 = RtlCaptureStackBackTrace(2u, 8u, (PVOID *)&v9[1].ActivationContext, &BackTraceHash);
    else
      v10 = 0;
    if ( v10 < 8 )
      memset(&v9[1].ActivationContext + v10, 0, 8LL * (8 - v10));
    v9->Previous = ActivationContextStackPointer->ActiveFrame;
    v9->ActivationContext = v6;
    NextCookieSequenceNumber = ActivationContextStackPointer->NextCookieSequenceNumber;
    v12 = NextCookieSequenceNumber | ((unsigned __int64)(ActivationContextStackPointer->StackId & 0xFFFFFFF) << 32) | 0x1000000000000000LL;
    ActivationContextStackPointer->NextCookieSequenceNumber = NextCookieSequenceNumber + 1;
    result = 0;
    v9[1].Previous = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v12;
    *Cookie = v12;
    ActivationContextStackPointer->ActiveFrame = v9;
  }
  return result;
}
