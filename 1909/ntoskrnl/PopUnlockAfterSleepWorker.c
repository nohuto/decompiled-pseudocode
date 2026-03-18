/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x14059D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400F2CE0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14012A480 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x14016A8E8 (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x140182504 (RtlBootStatusDisableFlushing.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406F1DF0 (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406F1E58 (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x14072B450 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x14072BA6C (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x14072BAAC (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x14072BAEC (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x14072BB2C (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x14072BB98 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14072BD9C (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14074923C (PopReleaseTransitionLock.c)
 */

__int64 __fastcall PopUnlockAfterSleepWorker(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  qword_140443178 = (__int64)KeGetCurrentThread();
  CmSetLazyFlushState(a1);
  LOBYTE(v1) = 1;
  ExSwapinWorkerThreads(v1);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  RtlBootStatusDisableFlushing(0);
  PopClearTransitionCheckpoints();
  PopClearSleepMarker();
  PopClearSystemSleepCheckpoint(0LL);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext();
  PopAcquirePolicyLock();
  if ( BYTE8(PopCapabilities) )
    PopAdjustHiberFile();
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock();
  qword_140443178 = 0LL;
  return PopReleaseTransitionLock(1LL);
}
