/*
 * XREFs of EtwpCoverageSamplerClose @ 0x140905120
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     EtwpCoverageSamplerStop @ 0x1409062F4 (EtwpCoverageSamplerStop.c)
 */

void __fastcall EtwpCoverageSamplerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // si
  int v7; // eax

  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
    qword_140432568 = (__int64)KeGetCurrentThread();
    v7 = *(_DWORD *)(a2 + 1208);
    if ( (v7 & 1) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a2 + 1208) = v7 | 1;
    }
    qword_140432568 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v5 )
      EtwpCoverageSamplerStop(a2);
  }
}
