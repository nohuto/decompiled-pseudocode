/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1401001E0
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiCopyHeaderIfResident @ 0x140092E70 (MiCopyHeaderIfResident.c)
 *     MiDeleteEmptySubsections @ 0x140093928 (MiDeleteEmptySubsections.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400E85F0 (MiCanFileBeTruncatedInternal.c)
 *     PopPepWork @ 0x1400FEFE4 (PopPepWork.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140111F00 (MmDoesFileHaveUserWritableReferences.c)
 *     MmFlushImageSection @ 0x140121F50 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x1401220AC (MiForceSectionClosed.c)
 *     MmChangeSectionBackingFile @ 0x14012F9D8 (MmChangeSectionBackingFile.c)
 *     MiReferencePfBackedSection @ 0x140130400 (MiReferencePfBackedSection.c)
 *     MiProcessDereferenceList @ 0x140154030 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x14019F300 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1402A1764 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1918 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402A26C0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402A2880 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE5AC (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x1402BAA30 (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BADF8 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x1402EB9B4 (PspIumReplenishPartitionPages.c)
 *     sub_140580010 @ 0x140580010 (sub_140580010.c)
 *     KiForceSymbolReferences @ 0x1409F6460 (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C1D4 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rdx
  unsigned int v4; // edi
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5];
      SchedulerAssist[5] = v7 + 1;
      if ( v7 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v4 = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
LABEL_5:
    if ( v4 )
      return v4;
    goto LABEL_8;
  }
  if ( !_InterlockedCompareExchange(a1, 0x80000000, 0) )
  {
    v4 = 1;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_8:
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = v6[5] - 1;
      v6[5] = v8;
      if ( !v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  return v4;
}
