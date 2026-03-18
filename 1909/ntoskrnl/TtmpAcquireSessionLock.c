/*
 * XREFs of TtmpAcquireSessionLock @ 0x1408BDD0C
 * Callers:
 *     TtmpSessionWorker @ 0x1408BE740 (TtmpSessionWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN TtmpAcquireSessionLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
