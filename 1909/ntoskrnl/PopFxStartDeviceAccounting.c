/*
 * XREFs of PopFxStartDeviceAccounting @ 0x1402F4F88
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned __int64 PopFxStartDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r14
  ULONG_PTR i; // rbx
  KIRQL v4; // si
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int j; // edi
  __int64 v7; // rsi
  KIRQL v8; // bp
  struct _KPRCB *v9; // rcx
  KIRQL v10; // al
  KIRQL v11; // bl
  struct _KPRCB *v12; // rcx

  result = (unsigned int)PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
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
          memset((void *)(i + 624), 0, 0xC0uLL);
          if ( *(_BYTE *)(i + 600) )
            *(_QWORD *)(i + 616) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)(i + 592));
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
          memset((void *)(v7 + 32), 0, 0xC0uLL);
          if ( *(_BYTE *)(v7 + 8) )
            *(_QWORD *)(v7 + 24) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)v7);
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
    v10 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    qword_140444410 = 0LL;
    qword_140444418 = 0LL;
    v11 = v10;
    memset(&xmmword_140444420, 0, 0x50uLL);
    KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
    __writecr8(v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
