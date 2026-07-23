/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x1402D9688
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408704C8 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1402D9C18 (PopFxSetGlobalDeviceAccountingEnabled.c)
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
        v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 584));
        memset((void *)(i + 712), 0, 0x60uLL);
        if ( *(_BYTE *)(i + 592) )
          *(_QWORD *)(i + 608) = v2;
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 584));
        v1 = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v4);
      }
      for ( j = 0; j < *(_DWORD *)(i + 812); ++j )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(i + 816) + 8LL * j) + 200LL;
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
