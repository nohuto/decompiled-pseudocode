/*
 * XREFs of CmpLockAppHiveLoadList @ 0x14063B098
 * Callers:
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
}
