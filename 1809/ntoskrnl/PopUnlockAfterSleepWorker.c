/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x14056C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14008E560 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140097F00 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x140153374 (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1401785CC (RtlBootStatusDisableFlushing.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406D0D64 (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406D0DCC (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x1406DFC30 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x1406DFFC0 (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x1406E021C (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x1406E0258 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x1406E0294 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1406E02D0 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x1406E033C (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1406E0540 (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14071E724 (PopReleaseTransitionLock.c)
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
