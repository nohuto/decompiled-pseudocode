/*
 * XREFs of PsGetNextProcess @ 0x140639220
 * Callers:
 *     MiEmptyAccessLogs @ 0x14017D570 (MiEmptyAccessLogs.c)
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     PsEnumProcesses @ 0x140638AD8 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x1406391C8 (ExGetNextProcess.c)
 *     PsGetNextProcessEx @ 0x1406E5190 (PsGetNextProcessEx.c)
 *     NtGetNextProcess @ 0x140743DC0 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x14077FCB4 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140847740 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140857D98 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140860DFC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x14088DF0C (MiHotPatchAllProcesses.c)
 *     MiScrubProcesses @ 0x14089CB70 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x1408C6120 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1408C9134 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x1408C9480 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1408F4460 (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x140905C54 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140A1BBB4 (PopEtInit.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003F810 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
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
