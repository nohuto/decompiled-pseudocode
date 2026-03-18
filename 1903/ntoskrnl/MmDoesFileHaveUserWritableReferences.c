/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x14005FC30
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14005EDE0 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  unsigned __int8 CurrentIrql; // si
  char *DataSectionObject; // rbx
  volatile LONG *v5; // rbp
  int v6; // edi
  ULONG v7; // ebx
  struct _KPRCB *v8; // rcx
  struct _KPRCB *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464580, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_140464580, CurrentIrql);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      return 0;
    }
    v5 = (volatile LONG *)(DataSectionObject + 72);
    v6 = ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
    if ( v6 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v8 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v8);
    }
    __writecr8(CurrentIrql);
  }
  v7 = MiDoesControlAreaHaveUserWritableReferences((__int64)DataSectionObject) != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  __writecr8(CurrentIrql);
  return v7;
}
