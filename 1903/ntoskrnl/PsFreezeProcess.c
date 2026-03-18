/*
 * XREFs of PsFreezeProcess @ 0x1406A34C4
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x14084B10C (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1408873A4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 *     KeFreezeProcess @ 0x1400EE7A4 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1400EEA04 (KeForceResumeProcess.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1406356F4 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1408F3D64 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F9600 (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(__int64 BugCheckParameter1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  int ProcessSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter1 + 780) & 8) != 0 )
    return 0;
  v4 = KeFreezeProcess(BugCheckParameter1, a2);
  if ( (*(_DWORD *)(BugCheckParameter1 + 780) & 8) != 0 )
  {
    KeForceResumeProcess(BugCheckParameter1);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !v4 && (*(_DWORD *)(BugCheckParameter1 + 1788) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, BugCheckParameter1, 2LL);
  if ( a2 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 736, 0LL);
    *(_QWORD *)(BugCheckParameter1 + 1840) = KiQueryUnbiasedInterruptTime();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 736), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 736));
    KeAbPostRelease(BugCheckParameter1 + 736);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(BugCheckParameter1 + 944) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(BugCheckParameter1);
      PsInvokeWin32Callout(22, BugCheckParameter1, 1, (__int64)&ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v6) = 1;
      EtwTraceFreezeThawProcess(BugCheckParameter1, v6);
    }
    PsSetProcessTelemetryAppState(BugCheckParameter1, 1);
  }
  return 1;
}
