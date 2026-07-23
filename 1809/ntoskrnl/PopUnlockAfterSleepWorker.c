/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x14056D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14008E480 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140097E40 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x140153494 (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1401786EC (RtlBootStatusDisableFlushing.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406D1FE4 (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406D204C (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x1406E0EB0 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x1406E149C (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x1406E14D8 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x1406E1514 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1406E1550 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x1406E15BC (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1406E17C0 (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14071F9A4 (PopReleaseTransitionLock.c)
 */

__int64 __fastcall PopUnlockAfterSleepWorker(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
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
  return PopReleaseTransitionLock(1LL);
}
