/*
 * XREFs of MiDestroySection @ 0x14016979C
 * Callers:
 *     MiCleanSection @ 0x14016971C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1402A1764 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1918 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402A2880 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiDrainControlAreaWrites @ 0x140095968 (MiDrainControlAreaWrites.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiClearFilePointer @ 0x14011A01C (MiClearFilePointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405DCE70 (FsRtlReleaseFileForCcFlush.c)
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1, KIRQL a2, struct _FILE_OBJECT *a3)
{
  struct _KPRCB *CurrentPrcb; // rcx

  *(_DWORD *)(a1 + 56) |= 9u;
  MiDrainControlAreaWrites(a1, a2);
  MiClearFilePointer(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(a2);
  if ( a3 )
  {
    FsRtlReleaseFileForCcFlush(a3);
    ObfDereferenceObject(a3);
  }
  return MiSegmentDelete(a1);
}
