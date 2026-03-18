/*
 * XREFs of PsThawProcess @ 0x1406A3778
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x14084A5AC (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14084A694 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14084AFAC (DbgkpResumeProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 *     KeThawProcess @ 0x1400EEAF4 (KeThawProcess.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1406356F4 (PsSetProcessTelemetryAppState.c)
 *     PspWow64GetSharedInformation @ 0x140679EC4 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x140679EDC (PsWow64GetProcessNtdllType.c)
 *     VslUpdateFreezeTimeBias @ 0x1408531A0 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1408F3D64 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F9600 (EtwTiLogSuspendResumeProcess.c)
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
