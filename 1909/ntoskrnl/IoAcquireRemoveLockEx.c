/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1400E0C90
 * Callers:
 *     PopFxAddRefDevice @ 0x1400E0C44 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 *     PoFxPrepareDevice @ 0x140159050 (PoFxPrepareDevice.c)
 *     PoFxPowerControl @ 0x1401691C0 (PoFxPowerControl.c)
 *     PopFxAllocatePowerIrp @ 0x140174190 (PopFxAllocatePowerIrp.c)
 *     PopFxLockDevice @ 0x140174320 (PopFxLockDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14019277C (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1402F30D4 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x1402F3E30 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1402F41D0 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1402F5800 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1402F5910 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x1403043F4 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140304540 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x14030482C (PopFxAcpiUnregisterDevice.c)
 *     ViFilterDispatchGeneric @ 0x140982B30 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140982C00 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140982DD0 (ViFilterDispatchPower.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  NTSTATUS v9; // esi
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v12; // r14
  KIRQL v13; // bp
  struct _KPRCB *CurrentPrcb; // rcx

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  v9 = 0;
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else if ( RemlockSize == 120 )
  {
    PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          0x28uLL,
                                          (ULONG)RemoveLock[1].Common.RemoveEvent.Header.WaitListHead.Flink);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->Flink = 0LL;
      PoolWithTag[1].Flink = 0LL;
      HIDWORD(PoolWithTag[2].Flink) = 0;
      PoolWithTag->Blink = (struct _LIST_ENTRY *)Tag;
      PoolWithTag[1].Blink = (struct _LIST_ENTRY *)File;
      LODWORD(PoolWithTag[2].Flink) = Line;
      PoolWithTag[1].Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      v12->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
      RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v12;
      KxReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v13);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  return v9;
}
