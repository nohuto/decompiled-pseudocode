/*
 * XREFs of MiLockSectionControlArea @ 0x14005F6F0
 * Callers:
 *     MiComputeFlushRange @ 0x140078040 (MiComputeFlushRange.c)
 *     MmEnoughMemoryForWrite @ 0x14007C0C0 (MmEnoughMemoryForWrite.c)
 *     MiFlushDataSection @ 0x140090130 (MiFlushDataSection.c)
 *     MiReferenceExistingControlArea @ 0x1400C0370 (MiReferenceExistingControlArea.c)
 *     MmDisableModifiedWriteOfSection @ 0x14012B6C0 (MmDisableModifiedWriteOfSection.c)
 *     MmGetImageFileSignatureInformation @ 0x14012BEB0 (MmGetImageFileSignatureInformation.c)
 *     MmUpdateSectionIoAttribution @ 0x14012E714 (MmUpdateSectionIoAttribution.c)
 *     MmOnlySystemCacheViewsPresent @ 0x140133DDC (MmOnlySystemCacheViewsPresent.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x140047890 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464280, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_140464280, CurrentIrql);
    *a3 = CurrentIrql;
    v7 = a2 == 1 ? *a1 : a1[2];
    if ( !v7 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
      return v7;
    }
    v9 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
