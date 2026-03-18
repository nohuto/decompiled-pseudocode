/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x1402BA5E4
 * Callers:
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiSessionInsertImage @ 0x14017F614 (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiUnmapImageInSystemSpace @ 0x14066FFB0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiReleaseSessionDriverCharges @ 0x1407293E4 (MiReleaseSessionDriverCharges.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D86C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionControlAreaCharges(__int64 a1)
{
  BOOL v2; // r14d
  KIRQL v3; // si
  __int64 v4; // r8
  __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64) != 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v5 = MiDecrementSubsectionViewCount((_QWORD *)(a1 + 128), 24LL, v4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  if ( v5 )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             v2,
             v5);
  return result;
}
