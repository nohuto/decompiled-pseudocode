/*
 * XREFs of CmpLockAppHiveLoadList @ 0x140638010
 * Callers:
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
}
