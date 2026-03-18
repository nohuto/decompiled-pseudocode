/*
 * XREFs of MiDestroySection @ 0x1401708F8
 * Callers:
 *     MiCleanSection @ 0x14017085C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1402B89EC (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402B9A90 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDrainControlAreaWrites @ 0x1400BF730 (MiDrainControlAreaWrites.c)
 *     MiClearFilePointer @ 0x14010A278 (MiClearFilePointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406247F0 (FsRtlReleaseFileForCcFlush.c)
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
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
