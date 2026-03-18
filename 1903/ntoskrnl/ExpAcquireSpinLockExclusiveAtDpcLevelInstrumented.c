/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054
 * Callers:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     RtlpHpSegPageRangeShrink @ 0x14001E830 (RtlpHpSegPageRangeShrink.c)
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     PspRevertContainerImpersonation @ 0x140036810 (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x1400573D0 (MiGetVadWakeList.c)
 *     MiLockSectionControlArea @ 0x14005F650 (MiLockSectionControlArea.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14005F820 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14005FB90 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14005FC30 (MmDoesFileHaveUserWritableReferences.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1400601E0 (RtlpHpSegPageRangeAllocate.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061BE0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x1400620A0 (RtlpHpVsChunkSplit.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddViewsForSection @ 0x140071B80 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400725E0 (MiCheckPurgeAndUpMapCount.c)
 *     MiBeginPageAccessor @ 0x1400728A0 (MiBeginPageAccessor.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x140331D80 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // di
  unsigned __int64 v5; // rax
  int InterruptCount; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rax
  int v12; // [rsp+60h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v7 = v5;
  }
  else
  {
    v7 = v12;
    v4 = 0;
    InterruptCount = v12;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v8 = ExpAcquireSpinLockExclusive(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v8;
  }
  if ( v4 )
  {
    v10 = __rdtsc();
    LOBYTE(v8) = PerfLogSpinLockAcquire((__int64)a1, v10, v10 - v7, v9, InterruptCount, 3);
  }
  return v8;
}
