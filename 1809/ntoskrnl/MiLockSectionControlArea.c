/*
 * XREFs of MiLockSectionControlArea @ 0x140020210
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x14001E9BC (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeFlushRange @ 0x14002015C (MiComputeFlushRange.c)
 *     MmEnoughMemoryForWrite @ 0x140021608 (MmEnoughMemoryForWrite.c)
 *     MmDisableModifiedWriteOfSection @ 0x140021D70 (MmDisableModifiedWriteOfSection.c)
 *     MmGetImageFileSignatureInformation @ 0x140023A40 (MmGetImageFileSignatureInformation.c)
 *     MiFlushDataSection @ 0x1400930A8 (MiFlushDataSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1400E789C (MmOnlySystemCacheViewsPresent.c)
 *     MmUpdateSectionIoAttribution @ 0x140105218 (MmUpdateSectionIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC6A0 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C0B4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C278 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2D4 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, unsigned __int8 *a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned __int8 v16; // bl
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  struct _KPRCB *v20; // rcx
  int v21; // eax
  struct _KPRCB *v22; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140438BC0, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_140438BC0, CurrentIrql);
    *a3 = CurrentIrql;
    v8 = a2 == 1 ? *a1 : a1[2];
    if ( !v8 )
      break;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[5];
        SchedulerAssist[5] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( (unsigned int)ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8 + 72) )
      {
LABEL_10:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140438BC0, retaddr);
        else
          dword_140438BC0 = 0;
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        if ( v12 && v11->NestingLevel <= 1u )
        {
          v21 = v12[5] - 1;
          v12[5] = v21;
          if ( !v21 )
            KiRemoveSystemWorkPriorityKick(v11, v12);
        }
        return v8;
      }
    }
    else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 72), 0x80000000, 0) )
    {
      goto LABEL_10;
    }
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v15[5] - 1;
        v15[5] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7);
      }
    }
    v16 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140438BC0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v20, v17);
    }
    __writecr8(v16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140438BC0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v22 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v22, v14);
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
