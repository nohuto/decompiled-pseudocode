/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x1406B83A0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400443F0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 */

struct _KTHREAD *__fastcall AlpciDestroyDeferredMessageContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *result; // rax
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(void **)a1;
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)a1 = 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  result = KeGetCurrentThread();
  if ( result->KernelApcDisable++ == -1 )
  {
    v7 = &result->152;
    if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v7->ApcState.ApcListHead[0].Flink != v7 && !result->SpecialApcDisable )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery((__int64)v7);
  }
  return result;
}
