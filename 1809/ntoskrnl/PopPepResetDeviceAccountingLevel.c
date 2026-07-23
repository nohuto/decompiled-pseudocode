/*
 * XREFs of PopPepResetDeviceAccountingLevel @ 0x1402DDF98
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1402DD5E0 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

_QWORD *PopPepResetDeviceAccountingLevel()
{
  signed __int32 v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v2; // r12d
  __int64 i; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  KIRQL v7; // al
  KIRQL v8; // si
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int j; // esi
  __int64 v11; // rdi
  KIRQL v12; // al
  KIRQL v13; // bp
  struct _KPRCB *v14; // rcx

  v0 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  CurrentThread = KeGetCurrentThread();
  v2 = v0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    v4 = *(_QWORD *)(i + 32);
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      PopFxActivateDevice(v6, 0, 0);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 584));
      *(_DWORD *)(v4 + 600) = v2;
      v8 = v7;
      memset((void *)(v4 + 616), 0, 0xC0uLL);
      if ( *(_DWORD *)(v4 + 596) == 5 )
      {
        *(_BYTE *)(v4 + 592) = 0;
        *(_QWORD *)(v4 + 608) = 0LL;
      }
      else
      {
        *(_BYTE *)(v4 + 592) = 1;
        *(_QWORD *)(v4 + 608) = MEMORY[0xFFFFF78000000008];
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 584));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v8);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v4 + 816) + 8LL * j) + 200LL;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11);
        *(_DWORD *)(v11 + 16) = v2;
        v13 = v12;
        memset((void *)(v11 + 32), 0, 0xC0uLL);
        if ( *(_DWORD *)(v11 + 12) == -1 )
        {
          *(_BYTE *)(v11 + 8) = 0;
          *(_QWORD *)(v11 + 24) = 0LL;
        }
        else
        {
          *(_BYTE *)(v11 + 8) = 1;
          *(_QWORD *)(v11 + 24) = MEMORY[0xFFFFF78000000008];
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v11);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
        {
          v14 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
        __writecr8(v13);
      }
      PoFxIdleDevice(v6);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
