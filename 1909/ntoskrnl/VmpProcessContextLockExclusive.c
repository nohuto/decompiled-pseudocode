/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14032A7D0
 * Callers:
 *     VmpFlushTb @ 0x140329AD4 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x140329C4C (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x140329DC0 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x14032A22C (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14032AC50 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14032AF18 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
