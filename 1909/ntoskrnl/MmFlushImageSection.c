/*
 * XREFs of MmFlushImageSection @ 0x1401255B0
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x1400BF254 (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x1401257AC (MiAttemptSectionDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
    v5 = ExAcquireSpinLockExclusive(&dword_140464280);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
          goto LABEL_18;
        }
        if ( *((_QWORD *)DataSectionObject + 6)
          || (DataSectionObject[14] & 2) != 0
          || *((_QWORD *)DataSectionObject + 14) > 1uLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
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
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
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
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
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
