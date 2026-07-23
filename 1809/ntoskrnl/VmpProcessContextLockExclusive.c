/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14030D39C
 * Callers:
 *     VmpFlushTb @ 0x14030C6BC (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x14030C834 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x14030C990 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x14030CE00 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14030D800 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14030DAC4 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}
