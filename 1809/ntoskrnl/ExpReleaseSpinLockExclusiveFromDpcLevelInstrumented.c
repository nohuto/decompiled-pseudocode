/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C178
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
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiBeginPageAccessor @ 0x140064A20 (MiBeginPageAccessor.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068270 (MiGetVadWakeList.c)
 *     MiRemoveWsle @ 0x14006A870 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14006ADD0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14006BDB0 (MiLogPageAccess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D580 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MiAddViewsForSection @ 0x140077170 (MiAddViewsForSection.c)
 *     MiIdentifyPfn @ 0x1400A7EC0 (MiIdentifyPfn.c)
 *     CcGetPartition @ 0x1400AD010 (CcGetPartition.c)
 *     CcGetVirtualAddress @ 0x1400AFC20 (CcGetVirtualAddress.c)
 *     MiCopyOnWrite @ 0x1400B45C0 (MiCopyOnWrite.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BAE80 (RtlpHpLfhSlotAllocate.c)
 *     ExReleaseSpinLockExclusive @ 0x1400BC5B0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BEE10 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExInitializeResourceLite @ 0x1400CC4D0 (ExInitializeResourceLite.c)
 *     MmPurgeSection @ 0x1400E7CE0 (MmPurgeSection.c)
 *     CcCanIWrite @ 0x140104D00 (CcCanIWrite.c)
 *     MiZeroPageThread @ 0x1401791E0 (MiZeroPageThread.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140313A38 (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
