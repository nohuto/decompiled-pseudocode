/*
 * XREFs of PsThawProcess @ 0x1406A10B8
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140687F94 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x140849CAC (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140849D94 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14084A6AC (DbgkpResumeProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetProcessSessionIdEx @ 0x1400F17F0 (PsGetProcessSessionIdEx.c)
 *     KeThawProcess @ 0x1400F1A50 (KeThawProcess.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x140638944 (PsSetProcessTelemetryAppState.c)
 *     PspWow64GetSharedInformation @ 0x14067FF78 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x14067FF90 (PsWow64GetProcessNtdllType.c)
 *     VslUpdateFreezeTimeBias @ 0x1408528A0 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1408F36D4 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F8FE0 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawProcess(__int64 BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r15
  char v6; // bl
  int ProcessNtdllType; // eax
  _QWORD **SharedInformation; // rax
  __int64 result; // rax
  int v10; // ebx
  int ProcessSessionId; // [rsp+70h] [rbp+18h] BYREF
  struct _KTHREAD *v12; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread;
  if ( a2 )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 944) && (*(_DWORD *)(BugCheckParameter1 + 780) & 8) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(BugCheckParameter1);
      PsInvokeWin32Callout(23, BugCheckParameter1, 1, (__int64)&ProcessSessionId);
    }
    v5 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 736, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 1840) )
    {
      v5 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(BugCheckParameter1 + 1840);
      *(_QWORD *)(BugCheckParameter1 + 1840) = 0LL;
      *(_QWORD *)(BugCheckParameter1 + 1936) += v5;
    }
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 736), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 736));
    KeAbPostRelease(BugCheckParameter1 + 736);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (*(_BYTE *)(BugCheckParameter1 + 728) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(BugCheckParameter1, v5);
    }
    else
    {
      *(_QWORD *)PspFreezeTimeBiasAddress += v5;
      ProcessNtdllType = PsWow64GetProcessNtdllType(BugCheckParameter1);
      if ( ProcessNtdllType )
      {
        SharedInformation = (_QWORD **)PspWow64GetSharedInformation(ProcessNtdllType);
        *SharedInformation[8] += v5;
      }
    }
  }
  result = KeThawProcess(BugCheckParameter1, a2);
  v10 = result;
  if ( (_DWORD)result == 1 && (*(_DWORD *)(BugCheckParameter1 + 1788) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, BugCheckParameter1, 3LL);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState(BugCheckParameter1, 2);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v10 )
        return EtwTraceFreezeThawProcess(BugCheckParameter1, 0LL);
    }
  }
  return result;
}
