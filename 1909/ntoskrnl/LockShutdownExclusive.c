/*
 * XREFs of LockShutdownExclusive @ 0x140832104
 * Callers:
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void LockShutdownExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
}
