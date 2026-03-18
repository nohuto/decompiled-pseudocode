/*
 * XREFs of MiLockSectionControlArea @ 0x14005F650
 * Callers:
 *     MiComputeFlushRange @ 0x140077C78 (MiComputeFlushRange.c)
 *     MmEnoughMemoryForWrite @ 0x14007BCC0 (MmEnoughMemoryForWrite.c)
 *     MiReferenceExistingControlArea @ 0x1400E04F0 (MiReferenceExistingControlArea.c)
 *     MiFlushDataSection @ 0x1400E2D3C (MiFlushDataSection.c)
 *     MmUpdateSectionIoAttribution @ 0x1400E9798 (MmUpdateSectionIoAttribution.c)
 *     MmDisableModifiedWriteOfSection @ 0x14012ACA0 (MmDisableModifiedWriteOfSection.c)
 *     MmGetImageFileSignatureInformation @ 0x14012B3E0 (MmGetImageFileSignatureInformation.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1401332EC (MmOnlySystemCacheViewsPresent.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, unsigned __int8 *a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rbx
  unsigned __int8 v9; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v11; // rcx

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
    *a3 = CurrentIrql;
    v7 = a2 == 1 ? *a1 : a1[2];
    if ( !v7 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
      return v7;
    }
    v9 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
