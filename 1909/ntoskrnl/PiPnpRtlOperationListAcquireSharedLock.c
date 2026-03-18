/*
 * XREFs of PiPnpRtlOperationListAcquireSharedLock @ 0x1408632EC
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN PiPnpRtlOperationListAcquireSharedLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
}
