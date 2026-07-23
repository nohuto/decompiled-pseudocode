/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x1400DFFA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PopFxArmResidentTimer @ 0x1400DFEFC (PopFxArmResidentTimer.c)
 *     PopFxIdleComponent @ 0x1400E16B0 (PopFxIdleComponent.c)
 */

__int64 PopFxResidentTimeoutRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  ULONG_PTR v2; // rbx
  LARGE_INTEGER v3; // rsi
  unsigned int i; // edi
  __int64 v5; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  if ( (ULONG_PTR *)PopFxDeviceList != &PopFxDeviceList )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v2 = PopFxDeviceList;
    v3 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v2 != &PopFxDeviceList )
    {
      for ( i = 0; i < *(_DWORD *)(v2 + 820); ++i )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v2 + 824) + 8LL * i);
        if ( *(int *)(v5 + 96) > 0
          && v3.QuadPart - *(_QWORD *)(v5 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v5 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v2, i);
        }
      }
      v2 = *(_QWORD *)v2;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return PopFxArmResidentTimer(1);
}
