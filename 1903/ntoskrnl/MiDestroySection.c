/*
 * XREFs of MiDestroySection @ 0x140170208
 * Callers:
 *     MiCleanSection @ 0x14017016C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1402B8C8C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402B9D30 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDrainControlAreaWrites @ 0x1400DF8B0 (MiDrainControlAreaWrites.c)
 *     MiClearFilePointer @ 0x14010A6A8 (MiClearFilePointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSegmentDelete @ 0x1406885A8 (MiSegmentDelete.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069ECE0 (FsRtlReleaseFileForCcFlush.c)
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
