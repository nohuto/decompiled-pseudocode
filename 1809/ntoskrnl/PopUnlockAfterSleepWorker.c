/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x14056C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14008E560 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140097F00 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x140153394 (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1401785EC (RtlBootStatusDisableFlushing.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406D0D44 (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406D0DAC (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x1406DFC10 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x1406DFFA0 (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x1406E01FC (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x1406E0238 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x1406E0274 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1406E02B0 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x1406E031C (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1406E0520 (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14071E704 (PopReleaseTransitionLock.c)
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
