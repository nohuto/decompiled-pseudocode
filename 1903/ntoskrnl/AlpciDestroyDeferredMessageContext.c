/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x1406BCB80
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140044350 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 */

struct _KTHREAD *__fastcall AlpciDestroyDeferredMessageContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *result; // rax
  $6EAC78A6FCFADE0A5FA44F358736B38F *v7; // rcx

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
    if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v7->ApcState.ApcListHead[0].Flink != v7 && !result->SpecialApcDisable )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery((__int64)v7);
  }
  return result;
}
