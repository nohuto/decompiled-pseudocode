/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x140626384
 * Callers:
 *     PfSnCleanupPrefetchHeader @ 0x140628A98 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchRequestPerform @ 0x1406A9098 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A0FA8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x1406285E0 (PsSetCurrentThreadPrefetching.c)
 */

_QWORD *__fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467C90, 0LL);
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140467C90);
    KeAbPostRelease((ULONG_PTR)&qword_140467C90);
    KeLeaveCriticalRegion();
  }
  result = (_QWORD *)*(unsigned int *)(a1 + 68);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140467C80);
    *(_DWORD *)(a1 + 68) &= ~1u;
    result = (_QWORD *)*(unsigned int *)(a1 + 68);
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    PsSetCurrentThreadPrefetching(((unsigned __int8)result & 2) != 0);
    result = (_QWORD *)*(unsigned int *)(a1 + 68);
  }
  if ( ((unsigned __int8)result & 8) != 0 )
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return result;
}
