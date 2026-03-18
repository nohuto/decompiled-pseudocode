/*
 * XREFs of VmpProcessContextLockShared @ 0x14030D104
 * Callers:
 *     VmColdPagesHint @ 0x14030B670 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14030B978 (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030CD30 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14030D2F8 (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14030D7D4 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D150 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}
