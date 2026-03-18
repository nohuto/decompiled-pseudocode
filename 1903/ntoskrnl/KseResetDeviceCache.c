/*
 * XREFs of KseResetDeviceCache @ 0x1408829C4
 * Callers:
 *     KseQueryDeviceData @ 0x14074CE50 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140882810 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x14088437C (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_140468424 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140468468;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140468468);
    v2 = (volatile signed __int64 *)qword_140468468;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140468468, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
