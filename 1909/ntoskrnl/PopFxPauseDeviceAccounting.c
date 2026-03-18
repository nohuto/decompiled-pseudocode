/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x1402F3C38
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1400E1850 (PopFxUpdateAccountingActiveTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxMergeActiveTimeAccounting @ 0x1402F3BF4 (PopFxMergeActiveTimeAccounting.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1402F4EC8 (PopFxSetGlobalDeviceAccountingEnabled.c)
 */

_QWORD *PopFxPauseDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // r14
  ULONG_PTR i; // rdi
  KIRQL v3; // si
  _QWORD *v4; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int j; // esi
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // bp
  _QWORD *v9; // rcx
  struct _KPRCB *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v1 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      if ( PopFxDeviceAccountingLevel < 0 )
      {
        v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 592));
        PopFxUpdateAccountingActiveTime(i + 592, v1, 0x47868C00uLL);
        PopFxMergeActiveTimeAccounting(v4);
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 592));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v3);
      }
      for ( j = 0; j < *(_DWORD *)(i + 820); ++j )
      {
        v7 = (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(i + 824) + 8LL * j) + 200LL);
        v8 = KeAcquireSpinLockRaiseToDpc(v7);
        PopFxUpdateAccountingActiveTime((__int64)v7, v1, 0x47868C00uLL);
        PopFxMergeActiveTimeAccounting(v9);
        KxReleaseSpinLock(v7);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
        {
          v10 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v10);
        }
        __writecr8(v8);
      }
    }
  }
  PopFxSetGlobalDeviceAccountingEnabled(0LL);
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
