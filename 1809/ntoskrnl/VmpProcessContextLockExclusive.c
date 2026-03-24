/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14030D1AC
 * Callers:
 *     VmpFlushTb @ 0x14030C4CC (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x14030C644 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x14030C7A0 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x14030CC10 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14030D610 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14030D8D4 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
