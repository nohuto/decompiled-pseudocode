/*
 * XREFs of PfpPrefetchSharedStart @ 0x14065DF78
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x140667720 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x140865988 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x140660E10 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rax
  PRTL_BALANCED_NODE v6; // rax
  PRTL_BALANCED_NODE v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 8u;
  *(_QWORD *)(BugCheckParameter2 + 16) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 68) ^= (*(_DWORD *)(BugCheckParameter2 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_14043D280) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 1u;
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&::BugCheckParameter2, 0LL);
  if ( (dword_14043D2A8 & 1) == 0 )
  {
    v5 = qword_14043D298;
    if ( *(__int64 **)(qword_14043D298 + 8) != &qword_14043D298 )
      __fastfail(3u);
    *(_QWORD *)BugCheckParameter2 = qword_14043D298;
    *(_QWORD *)(BugCheckParameter2 + 8) = &qword_14043D298;
    *(_QWORD *)(v5 + 8) = BugCheckParameter2;
    qword_14043D298 = BugCheckParameter2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&::BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&::BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)&::BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 128) = v6;
    if ( v6 )
      BYTE2(v6[1].Left) |= 1u;
    v7 = KeAbPreAcquire((ULONG_PTR)&PfGlobals, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 136) = v7;
    if ( v7 )
      BYTE2(v7[1].Left) |= 1u;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}
