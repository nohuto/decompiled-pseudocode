/*
 * XREFs of VmpProcessContextLockShared @ 0x14030D3F4
 * Callers:
 *     VmColdPagesHint @ 0x14030B960 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14030BC68 (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030D020 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14030D5E8 (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14030DAC4 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
