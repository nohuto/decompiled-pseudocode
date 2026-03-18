/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x1400AFEB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PopFxArmResidentTimer @ 0x1400AFE0C (PopFxArmResidentTimer.c)
 *     PopFxIdleComponent @ 0x1400B15C0 (PopFxIdleComponent.c)
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 */

__int64 PopFxResidentTimeoutRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 InterruptTimePrecise; // rax
  ULONG_PTR v4; // rbx
  __int64 v5; // rsi
  unsigned int i; // edi
  __int64 v7; // rdx
  char v9; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  if ( (ULONG_PTR *)PopFxDeviceList != &PopFxDeviceList )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v9, v1, v2);
    v4 = PopFxDeviceList;
    v5 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v4 != &PopFxDeviceList )
    {
      for ( i = 0; i < *(_DWORD *)(v4 + 820); ++i )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v4 + 824) + 8LL * i);
        if ( *(int *)(v7 + 96) > 0
          && v5 - *(_QWORD *)(v7 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v7 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v4, i);
        }
      }
      v4 = *(_QWORD *)v4;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return PopFxArmResidentTimer(1);
}
