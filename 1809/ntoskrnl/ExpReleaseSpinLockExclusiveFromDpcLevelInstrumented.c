/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiBeginPageAccessor @ 0x140064A10 (MiBeginPageAccessor.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068260 (MiGetVadWakeList.c)
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14006ADC0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     CcGetVirtualAddress @ 0x1400AFB80 (CcGetVirtualAddress.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     ExReleaseSpinLockExclusive @ 0x1400BC510 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140313D28 (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
