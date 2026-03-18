/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14032AD80
 * Callers:
 *     VmpFlushTb @ 0x14032A084 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x14032A1FC (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x14032A370 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x14032A7DC (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14032B200 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14032B4C8 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
