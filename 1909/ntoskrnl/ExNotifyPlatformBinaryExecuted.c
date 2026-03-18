/*
 * XREFs of ExNotifyPlatformBinaryExecuted @ 0x140759648
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140759428 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void ExNotifyPlatformBinaryExecuted()
{
  struct _KTHREAD *CurrentThread; // rsi
  PVOID v1; // rdi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
  v1 = ExpPlatformBinaryTableInformation;
  ExpPlatformBinaryTableInformation = (PVOID)-1LL;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x54425057u);
}
