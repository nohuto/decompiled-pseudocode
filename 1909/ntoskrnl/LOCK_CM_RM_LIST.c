/*
 * XREFs of LOCK_CM_RM_LIST @ 0x1406BAA4C
 * Callers:
 *     CmpRunDownCmRM @ 0x1406BA870 (CmpRunDownCmRM.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_CM_RM_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
}
