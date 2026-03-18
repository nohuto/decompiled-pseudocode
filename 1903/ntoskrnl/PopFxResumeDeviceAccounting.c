/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x1402F4E50
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408ABEAC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1402F5418 (PopFxSetGlobalDeviceAccountingEnabled.c)
 */

_QWORD *PopFxResumeDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx
  __int64 v2; // r14
  ULONG_PTR i; // rbx
  KIRQL v4; // si
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int j; // edi
  __int64 v7; // rsi
  KIRQL v8; // bp
  struct _KPRCB *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v2 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      if ( PopFxDeviceAccountingLevel < 0 )
      {
        v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 592));
        memset((void *)(i + 720), 0, 0x60uLL);
        if ( *(_BYTE *)(i + 600) )
          *(_QWORD *)(i + 616) = v2;
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 592));
        v1 = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v4);
      }
      for ( j = 0; j < *(_DWORD *)(i + 820); ++j )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(i + 824) + 8LL * j) + 200LL;
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
        memset((void *)(v7 + 128), 0, 0x60uLL);
        if ( *(_BYTE *)(v7 + 8) )
          *(_QWORD *)(v7 + 24) = v2;
        KxReleaseSpinLock((PKSPIN_LOCK)v7);
        v1 = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
        {
          v9 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v9);
        }
        __writecr8(v8);
      }
    }
  }
  LOBYTE(v1) = 1;
  PopFxSetGlobalDeviceAccountingEnabled(v1);
  PopFxDeviceAccountingPaused = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
