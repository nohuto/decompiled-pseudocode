/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x14059BC20
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400FA670 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140129A60 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x1401600C4 (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x140181E14 (RtlBootStatusDisableFlushing.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406F0350 (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406F03B8 (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x140727268 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x14072750C (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x14072754C (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x14072758C (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1407275CC (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x140727638 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14072783C (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14074733C (PopReleaseTransitionLock.c)
 */

__int64 __fastcall PopUnlockAfterSleepWorker(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  qword_1404431F8 = (__int64)KeGetCurrentThread();
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
  qword_1404431F8 = 0LL;
  return PopReleaseTransitionLock(1LL);
}
