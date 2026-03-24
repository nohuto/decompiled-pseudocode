/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100200
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiCopyHeaderIfResident @ 0x140092E70 (MiCopyHeaderIfResident.c)
 *     MiDeleteEmptySubsections @ 0x140093928 (MiDeleteEmptySubsections.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400E8610 (MiCanFileBeTruncatedInternal.c)
 *     PopPepWork @ 0x1400FF004 (PopPepWork.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140111F20 (MmDoesFileHaveUserWritableReferences.c)
 *     MmFlushImageSection @ 0x140121F70 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x1401220CC (MiForceSectionClosed.c)
 *     MmChangeSectionBackingFile @ 0x14012F9F8 (MmChangeSectionBackingFile.c)
 *     MiReferencePfBackedSection @ 0x140130420 (MiReferencePfBackedSection.c)
 *     MiProcessDereferenceList @ 0x140154050 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x14019F320 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1402A1864 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1A18 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402A27C0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402A2980 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE6AC (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x1402BAB30 (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BAEF8 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x1402EBAB4 (PspIumReplenishPartitionPages.c)
 *     sub_140580010 @ 0x140580010 (sub_140580010.c)
 *     KiForceSymbolReferences @ 0x1409F6470 (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2D4 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
