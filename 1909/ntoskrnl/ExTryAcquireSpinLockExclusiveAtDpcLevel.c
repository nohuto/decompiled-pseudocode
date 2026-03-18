/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00
 * Callers:
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     MiLockSectionControlArea @ 0x14005F6F0 (MiLockSectionControlArea.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14005FCD0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCopyHeaderIfResident @ 0x14008FF40 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400BF254 (MiCanFileBeTruncatedInternal.c)
 *     MiDeleteEmptySubsections @ 0x1400C1F40 (MiDeleteEmptySubsections.c)
 *     PopPepWork @ 0x1400E19A0 (PopPepWork.c)
 *     MmFlushImageSection @ 0x1401255B0 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x14012570C (MiForceSectionClosed.c)
 *     MiReferencePfBackedSection @ 0x14012F47C (MiReferencePfBackedSection.c)
 *     MmChangeSectionBackingFile @ 0x140130320 (MmChangeSectionBackingFile.c)
 *     MiProcessDereferenceList @ 0x140164A94 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1401AA360 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1402B89EC (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402B98D0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402B9A90 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402C624C (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x1402D0AC0 (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D0EBC (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x1403090DC (PspIumReplenishPartitionPages.c)
 *     sub_1405B0010 @ 0x1405B0010 (sub_1405B0010.c)
 *     KiForceSymbolReferences @ 0x140A3B944 (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033ACD4 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
