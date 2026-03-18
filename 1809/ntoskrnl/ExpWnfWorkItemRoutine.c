/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x1406B7980
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406B79D4 (ExpWnfDispatchKernelSubscription.c)
 */

_QWORD *ExpWnfWorkItemRoutine()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  do
  {
    _InterlockedAnd((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0xFFFFFFFD);
    ExpWnfDispatchKernelSubscription();
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0, 1) != 1 );
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
