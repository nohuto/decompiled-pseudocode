/*
 * XREFs of KseResetDeviceCache @ 0x1408487A8
 * Callers:
 *     KseQueryDeviceData @ 0x140721BD0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140848610 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepCacheReset @ 0x14084A0EC (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_14043D974 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_14043D9B8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_14043D9B8);
    v2 = (volatile signed __int64 *)qword_14043D9B8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_14043D9B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
