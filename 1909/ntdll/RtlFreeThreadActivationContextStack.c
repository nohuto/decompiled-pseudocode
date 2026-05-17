/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x18006EBD0
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x18006EC10 (RtlFreeActivationContextStack.c)
 */

__int64 RtlFreeThreadActivationContextStack()
{
  struct _TEB *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = NtCurrentTeb();
  RtlFreeActivationContextStack(v0->ActivationContextStackPointer);
  v0->ActivationContextStackPointer = 0LL;
  return RtlpInitializeThreadActivationContextStack(v0, v1, v2, v3);
}
