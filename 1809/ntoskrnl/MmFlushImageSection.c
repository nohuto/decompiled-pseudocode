/*
 * XREFs of MmFlushImageSection @ 0x140121F50
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x1400E85F0 (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1401001E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x140122150 (MiAttemptSectionDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  BOOLEAN v4; // di
  KIRQL v5; // si
  volatile signed __int32 *DataSectionObject; // rbx
  volatile signed __int32 *ImageSectionObject; // rbp
  int v9; // ebx
  __int64 v10; // rdx
  struct _KPRCB *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx

  v4 = 0;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_140438BC0);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140438BC0);
          goto LABEL_18;
        }
        if ( *((_QWORD *)DataSectionObject + 6)
          || (DataSectionObject[14] & 2) != 0
          || *((_QWORD *)DataSectionObject + 14) > 1uLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140438BC0);
          ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          goto LABEL_7;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
      }
    }
    ImageSectionObject = (volatile signed __int32 *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140438BC0);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        v13 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v13);
      }
      v4 = 1;
LABEL_7:
      __writecr8(v5);
      return v4;
    }
    v9 = ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 18);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140438BC0);
    if ( v9 )
      break;
LABEL_18:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v11);
    }
    __writecr8(v5);
  }
  LOBYTE(v10) = v5;
  return MiAttemptSectionDelete(ImageSectionObject, v10, 0LL);
}
