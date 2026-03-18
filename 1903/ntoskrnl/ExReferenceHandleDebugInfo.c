/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x14090B650
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     ExpUpdateDebugInfo @ 0x14090B9AC (ExpUpdateDebugInfo.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

volatile signed __int32 *__fastcall ExReferenceHandleDebugInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v3; // rsi
  volatile signed __int32 *v4; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 56);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(volatile signed __int32 **)(a1 + 96);
  if ( v4 )
    _InterlockedIncrement(v4);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
