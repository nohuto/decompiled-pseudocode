/*
 * XREFs of PsFreezeProcess @ 0x140589E24
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x1408128E4 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x14084D104 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KeFreezeProcess @ 0x140002940 (KeFreezeProcess.c)
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x1400F353C (KeForceResumeProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x1405B2974 (PsSetProcessTelemetryAppState.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     EtwTraceFreezeThawProcess @ 0x1408B8680 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408BDC74 (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(ULONG_PTR a1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  int ProcessSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
    return 0;
  v4 = KeFreezeProcess(a1, a2);
  if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
  {
    KeForceResumeProcess(a1);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !v4 && (*(_DWORD *)(a1 + 1740) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 2LL);
  if ( a2 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    *(_QWORD *)(a1 + 1792) = KiQueryUnbiasedInterruptTime();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 936) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(22LL, a1, 1LL, &ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v6) = 1;
      EtwTraceFreezeThawProcess(a1, v6);
    }
    PsSetProcessTelemetryAppState(a1);
  }
  return 1;
}
