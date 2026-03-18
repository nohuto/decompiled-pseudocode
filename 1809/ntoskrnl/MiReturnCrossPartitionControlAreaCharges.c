/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x1402A3134
 * Callers:
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiSessionInsertImage @ 0x14017600C (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiUnmapImageInSystemSpace @ 0x1406508AC (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140650E60 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408543E8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1400794C0 (MiDecrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4BB4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionControlAreaCharges(__int64 a1)
{
  BOOL v2; // r14d
  KIRQL v3; // si
  __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64) != 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = MiDecrementSubsectionViewCount((__int64 *)(a1 + 128), 24);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  if ( v4 )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_14043A748 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             v2,
             v4);
  return result;
}
