/*
 * XREFs of VmpProcessContextLockShared @ 0x14032A828
 * Callers:
 *     VmColdPagesHint @ 0x140328EB0 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1403291A8 (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x14032A450 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14032AA2C (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14032AF18 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
