/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x1402BA344
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14064437C (MiUnmapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiReleaseSessionDriverCharges @ 0x14072A754 (MiReleaseSessionDriverCharges.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
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
             *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             v2,
             v5);
  return result;
}
