/*
 * XREFs of LockShutdownExclusive @ 0x140832AA4
 * Callers:
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void LockShutdownExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
}
