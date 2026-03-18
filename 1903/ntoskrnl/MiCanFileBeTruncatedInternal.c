/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x1400DF3D4
 * Callers:
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1400DF360 (MmCanFileBeTruncated.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiEndingOffset @ 0x1400D8B3C (MiEndingOffset.c)
 *     MiFindLastSubsection @ 0x1400EAE78 (MiFindLastSubsection.c)
 *     MmFlushImageSection @ 0x140124F40 (MmFlushImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

volatile signed __int32 *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        KIRQL *a5)
{
  bool v8; // zf
  KIRQL v9; // di
  volatile signed __int32 *DataSectionObject; // rsi
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
      v9 = ExAcquireSpinLockExclusive(&dword_140464580);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
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
    v9 = ExAcquireSpinLockExclusive(&dword_140464580);
LABEL_3:
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
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
    v12 = ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
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
  if ( DataSectionObject[14] & 1 | ((DataSectionObject[14] & 2) != 0)
    || *((_QWORD *)DataSectionObject + 14) > 1uLL && (DataSectionObject[14] & 8) == 0 && !a4 )
  {
    goto LABEL_22;
  }
  if ( *((_QWORD *)DataSectionObject + 6) && (a3 != 1 || *((_QWORD *)DataSectionObject + 5) && a4 != 1) )
  {
    if ( a2 )
    {
      LastSubsection = (__int64)(DataSectionObject + 32);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection(DataSectionObject, 1LL);
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
      v16 = DataSectionObject + 18;
      goto LABEL_20;
    }
LABEL_22:
    v16 = DataSectionObject + 18;
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
