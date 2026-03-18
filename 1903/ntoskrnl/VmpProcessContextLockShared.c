/*
 * XREFs of VmpProcessContextLockShared @ 0x14032ADD8
 * Callers:
 *     VmColdPagesHint @ 0x140329460 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x140329758 (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x14032AA00 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14032AFDC (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14032B4C8 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
