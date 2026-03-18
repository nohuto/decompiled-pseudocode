/*
 * XREFs of PopFxIdleDevicesFromSx @ 0x14015E1C4
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PoFxIdleDevice @ 0x1401457DC (PoFxIdleDevice.c)
 */

_QWORD *PopFxIdleDevicesFromSx()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rbx
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v2 = *(_QWORD *)(i + 48);
    if ( v2 && (*(_DWORD *)(i + 816) & 1) == 0 && !*(_BYTE *)(v2 + 200) )
    {
      PoFxIdleDevice(*(_QWORD *)(v2 + 32));
      *(_DWORD *)(v2 + 296) &= ~0x1000u;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
