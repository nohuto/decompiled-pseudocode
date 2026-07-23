/*
 * XREFs of PopFxIsDripsBlockingDevice @ 0x1402D866C
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopFxIsDripsBlockingDevice(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  char v6; // si
  __int64 v7; // r13
  __int64 v8; // rbx
  KIRQL v9; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int i; // ebx
  __int64 v12; // rdi
  KIRQL v13; // bp
  struct _KPRCB *v14; // rcx

  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008];
  if ( PopFxDeviceAccountingLevel < 0 )
  {
    v8 = a1 + 584;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 584));
    if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
      && *(_BYTE *)(v8 + 8)
      && v7 - *(_QWORD *)(v8 + 24) >= a2 )
    {
      *a3 = -1;
      v6 = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v9);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 812); ++i )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 816) + 8LL * i);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 200));
    if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
      && *(_BYTE *)(v12 + 208)
      && v7 - *(_QWORD *)(v12 + 224) >= a2 )
    {
      v6 = 1;
      *a3 = i;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v12 + 200));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v14 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
    __writecr8(v13);
  }
  return v6;
}
