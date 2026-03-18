/*
 * XREFs of LOCK_CM_RM_LIST @ 0x14069BB1C
 * Callers:
 *     CmpRunDownCmRM @ 0x14069B940 (CmpRunDownCmRM.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_CM_RM_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
}
