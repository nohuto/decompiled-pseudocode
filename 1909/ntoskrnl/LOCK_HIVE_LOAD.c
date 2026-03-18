/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1406387C0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     CmpDoFlushNextHive @ 0x140638450 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x14063DDF0 (CmReleaseLoadKeyContext.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1406B9620 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14082A224 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x14082EEA0 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
}
