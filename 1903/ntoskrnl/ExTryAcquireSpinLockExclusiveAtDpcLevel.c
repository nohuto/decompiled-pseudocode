/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10
 * Callers:
 *     MiReferenceControlArea @ 0x14005F3CC (MiReferenceControlArea.c)
 *     MiLockSectionControlArea @ 0x14005F650 (MiLockSectionControlArea.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14005FC30 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     PopPepWork @ 0x1400B18B8 (PopPepWork.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400DF3D4 (MiCanFileBeTruncatedInternal.c)
 *     MiDeleteEmptySubsections @ 0x1400E20C0 (MiDeleteEmptySubsections.c)
 *     MiCopyHeaderIfResident @ 0x1400E2B4C (MiCopyHeaderIfResident.c)
 *     MmFlushImageSection @ 0x140124F40 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x14012509C (MiForceSectionClosed.c)
 *     MiReferencePfBackedSection @ 0x14012EB2C (MiReferencePfBackedSection.c)
 *     MmChangeSectionBackingFile @ 0x14012F890 (MmChangeSectionBackingFile.c)
 *     MiProcessDereferenceList @ 0x140165044 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1401A9C40 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1402B8C8C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402B9B70 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402B9D30 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402C64EC (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x1402D0D60 (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D115C (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x14030962C (PspIumReplenishPartitionPages.c)
 *     sub_1405B0010 @ 0x1405B0010 (sub_1405B0010.c)
 *     KiForceSymbolReferences @ 0x140A3BB74 (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B274 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
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
    result = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    v5 = result;
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    if ( !_InterlockedCompareExchange(a1, 0x80000000, 0) )
      return 1LL;
    v5 = 0;
  }
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 && CurrentPrcb->NestingLevel <= 1u )
  {
    v8 = v6[5] - 1;
    v6[5] = v8;
    if ( !v8 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  return v5;
}
