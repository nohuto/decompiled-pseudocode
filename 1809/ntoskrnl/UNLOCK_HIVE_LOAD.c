/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1405B2514
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405B0C50 (CmpLateUnloadHiveWorker.c)
 *     CmpDoFlushNextHive @ 0x1405B2330 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x1405B8C30 (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmKtmNotification @ 0x140695470 (CmKtmNotification.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1407F7440 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
