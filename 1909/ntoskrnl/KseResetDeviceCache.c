/*
 * XREFs of KseResetDeviceCache @ 0x1408820C4
 * Callers:
 *     KseQueryDeviceData @ 0x14074D8E0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140881F10 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x140883A7C (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_140468164 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_1404681A8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_1404681A8);
    v2 = (volatile signed __int64 *)qword_1404681A8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1404681A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
