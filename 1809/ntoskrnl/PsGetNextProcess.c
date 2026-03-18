/*
 * XREFs of PsGetNextProcess @ 0x1405B21E0
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     PsGetNextProcessEx @ 0x1405B12D0 (PsGetNextProcessEx.c)
 *     PsEnumProcesses @ 0x1405B1AFC (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x1405B2188 (ExGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x14069E2F4 (PfpRpControlRequestReset.c)
 *     NtGetNextProcess @ 0x140718D90 (NtGetNextProcess.c)
 *     DbgkpCloseObject @ 0x14080E7C0 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x14081E728 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14082729C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x1408552A8 (MiHotPatchAllProcesses.c)
 *     MiScrubProcesses @ 0x14085FBE0 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x1408888E0 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x14088AFC4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14088B3A0 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x14088B6D0 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1408B800C (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x1408C8E50 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x140915030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x1409D8A28 (PopEtInit.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
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
    v5 = (__int64 *)Object[93];
  while ( v5 != &PsActiveProcessHead )
  {
    v3 = v5 - 93;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 93)) )
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
