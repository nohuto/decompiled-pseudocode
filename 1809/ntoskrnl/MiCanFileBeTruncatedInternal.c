/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x1400E8690
 * Callers:
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1400E8620 (MmCanFileBeTruncated.c)
 * Callees:
 *     MiEndingOffset @ 0x140031090 (MiEndingOffset.c)
 *     MiFindLastSubsection @ 0x140092D30 (MiFindLastSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmFlushImageSection @ 0x140122040 (MmFlushImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        KIRQL *a5)
{
  bool v8; // zf
  KIRQL v9; // di
  char *DataSectionObject; // rsi
  int v12; // ebx
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v15; // rax
  volatile LONG *v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx
  unsigned __int64 v20; // rax
  struct _KPRCB *v21; // rcx

  while ( 1 )
  {
    v8 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v8 )
    {
      v9 = ExAcquireSpinLockExclusive(&dword_140439C80);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v9);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    v9 = ExAcquireSpinLockExclusive(&dword_140439C80);
LABEL_3:
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
      __writecr8(v9);
      *a5 = 0;
      return 0LL;
    }
    v12 = ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
    if ( v12 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    __writecr8(v9);
  }
  if ( *((_DWORD *)DataSectionObject + 14) & 1 | ((*((_DWORD *)DataSectionObject + 14) & 2) != 0)
    || *((_QWORD *)DataSectionObject + 14) > 1uLL && (*((_DWORD *)DataSectionObject + 14) & 8) == 0 && !a4 )
  {
    goto LABEL_25;
  }
  if ( *((_QWORD *)DataSectionObject + 6) && (a3 != 1 || *((_QWORD *)DataSectionObject + 5) && a4 != 1) )
  {
    if ( a2 )
    {
      LastSubsection = (__int64)(DataSectionObject + 128);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection((__int64)DataSectionObject, 1);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v15 = MiEndingOffset(LastSubsection);
      if ( *a2 >= v15 )
      {
        v20 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v20 )
          *a2 = v20;
        goto LABEL_11;
      }
      v16 = (volatile LONG *)(DataSectionObject + 72);
      goto LABEL_20;
    }
LABEL_25:
    v16 = (volatile LONG *)(DataSectionObject + 72);
LABEL_20:
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(v9);
    return 0LL;
  }
LABEL_11:
  *a5 = v9;
  return DataSectionObject;
}
