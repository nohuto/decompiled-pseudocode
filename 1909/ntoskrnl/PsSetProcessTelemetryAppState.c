/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x140638944
 * Callers:
 *     PspExitProcess @ 0x140652A2C (PspExitProcess.c)
 *     PsFreezeProcess @ 0x1406A0E4C (PsFreezeProcess.c)
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 *     PsSetProcessFaultInformation @ 0x140720610 (PsSetProcessFaultInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC040 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     PsGetProcessDeepFreezeStats @ 0x140639374 (PsGetProcessDeepFreezeStats.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(__int64 BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v5; // ebx
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(v10, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(BugCheckParameter1, v9);
    v5 = 0;
    v6 = v9[1] - v9[2] - *(_QWORD *)(BugCheckParameter1 + 1928);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 736, 0LL);
    v7 = *(_QWORD *)(BugCheckParameter1 + 1952);
    if ( v7 >> 61 != 3 && *(_QWORD *)(BugCheckParameter1 + 1944) <= v9[0] )
    {
      v10[2] = *(_QWORD *)(BugCheckParameter1 + 1944);
      LODWORD(v10[6]) = v7 >> 61;
      v10[3] = v7 & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && v7 >> 61 == 1 )
        a2 = 6;
      *(_QWORD *)(BugCheckParameter1 + 1944) = v9[0];
      *(_QWORD *)(BugCheckParameter1 + 1952) = v6 & 0x1FFFFFFFFFFFFFFFLL | ((__int64)a2 << 61);
      v5 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 736), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 736));
    KeAbPostRelease(BugCheckParameter1 + 736);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(BugCheckParameter1 + 1952) >> 61 == 3 )
      break;
    if ( v5 )
      goto LABEL_10;
  }
  if ( !v5 )
    return v5;
LABEL_10:
  v10[0] = v9[0];
  v10[1] = v9[1];
  v10[5] = v9[2];
  v10[4] = v6;
  HIDWORD(v10[6]) = a2;
  EtwTraceAppStateChange(BugCheckParameter1, (__int64)v10);
  return v5;
}
