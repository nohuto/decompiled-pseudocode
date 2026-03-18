/*
 * XREFs of PiPnpRtlDisableRemoveOperationDispatch @ 0x1406FC078
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN PiPnpRtlDisableRemoveOperationDispatch()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
}
