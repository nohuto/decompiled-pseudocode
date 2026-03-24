/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1405B1514
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405AFC50 (CmpLateUnloadHiveWorker.c)
 *     CmpDoFlushNextHive @ 0x1405B1330 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x1405B7C30 (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmpPerformUnloadKey @ 0x140692390 (CmpPerformUnloadKey.c)
 *     CmKtmNotification @ 0x1406942B0 (CmKtmNotification.c)
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0328 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1407F6240 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
