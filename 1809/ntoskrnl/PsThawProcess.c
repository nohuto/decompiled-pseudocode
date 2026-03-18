/*
 * XREFs of PsThawProcess @ 0x14067E324
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406035AC (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x140810BD4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140810CCC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140810DEC (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x1408115AC (DbgkpResumeProcess.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeThawProcess @ 0x1400F489C (KeThawProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x1405B1974 (PsSetProcessTelemetryAppState.c)
 *     PsInvokeWin32Callout @ 0x1405F4E90 (PsInvokeWin32Callout.c)
 *     PspWow64GetSharedInformation @ 0x1406783FC (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x140678414 (PsWow64GetProcessNtdllType.c)
 *     VslUpdateFreezeTimeBias @ 0x1408190FC (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1408B73E0 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408BC9D4 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawProcess(ULONG_PTR a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r15
  int ProcessNtdllType; // eax
  _QWORD **SharedInformation; // rax
  __int64 result; // rax
  int v9; // ebx
  int ProcessSessionId; // [rsp+70h] [rbp+18h] BYREF
  struct _KTHREAD *v11; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v11 = CurrentThread;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 936) && (*(_DWORD *)(a1 + 772) & 8) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(23, a1, 1, (__int64)&ProcessSessionId);
    }
    v5 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    if ( *(_QWORD *)(a1 + 1792) )
    {
      v5 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 1792);
      *(_QWORD *)(a1 + 1792) = 0LL;
      *(_QWORD *)(a1 + 1888) += v5;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (*(_BYTE *)(a1 + 720) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v5);
    }
    else
    {
      *(_QWORD *)PspFreezeTimeBiasAddress += v5;
      ProcessNtdllType = PsWow64GetProcessNtdllType(a1);
      if ( ProcessNtdllType )
      {
        SharedInformation = (_QWORD **)PspWow64GetSharedInformation(ProcessNtdllType);
        *SharedInformation[8] += v5;
      }
    }
  }
  result = KeThawProcess(a1, a2);
  v9 = result;
  if ( (_DWORD)result == 1 && (*(_DWORD *)(a1 + 1740) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 3LL);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState(a1, 2);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v9 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
