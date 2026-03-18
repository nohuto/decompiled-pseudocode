/*
 * XREFs of PsGetNextProcess @ 0x140635FC0
 * Callers:
 *     MiEmptyAccessLogs @ 0x14017CE80 (MiEmptyAccessLogs.c)
 *     MiLogHotPatchRundown @ 0x1405B1004 (MiLogHotPatchRundown.c)
 *     PsEnumProcesses @ 0x140635888 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x140635F68 (ExGetNextProcess.c)
 *     PsGetNextProcessEx @ 0x1406E41B0 (PsGetNextProcessEx.c)
 *     NtGetNextProcess @ 0x140741EC0 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x14077D394 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140848040 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140858698 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408616FC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x14088E6EC (MiHotPatchAllProcesses.c)
 *     MiScrubProcesses @ 0x14089D350 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x1408C6840 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1408C9854 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x1408C9BA0 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1408F4AF0 (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x1409062F4 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140A1BC38 (PopEtInit.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 *v3; // rbp
  int v4; // edi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v5 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v5 = (__int64 *)Object[94];
  while ( v5 != &PsActiveProcessHead )
  {
    v3 = v5 - 94;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 94)) )
    {
      v4 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v3 & -(__int64)(v4 != 0);
}
