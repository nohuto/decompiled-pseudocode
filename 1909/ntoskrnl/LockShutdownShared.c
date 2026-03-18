/*
 * XREFs of LockShutdownShared @ 0x14068C7D8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpLazyCommitWorker @ 0x14082EEA0 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 LockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx((ULONG_PTR)&CmpShutdownLock, 0LL);
}
