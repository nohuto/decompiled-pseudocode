/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78
 * Callers:
 *     MiIdentifyPfn @ 0x140005560 (MiIdentifyPfn.c)
 *     RtlpHpSegPageRangeShrink @ 0x14001EC20 (RtlpHpSegPageRangeShrink.c)
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140057470 (MiGetVadWakeList.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140060280 (RtlpHpSegPageRangeAllocate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140061790 (RtlpHpReleaseQueuedLockExclusive.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140072850 (MiCheckPurgeAndUpMapCount.c)
 *     MiBeginPageAccessor @ 0x140072B10 (MiBeginPageAccessor.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x140079B20 (CcSetDirtyPinnedData.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     CcGetVirtualAddress @ 0x1400B6060 (CcGetVirtualAddress.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     ExReleaseSpinLockExclusive @ 0x140109E70 (ExReleaseSpinLockExclusive.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A020 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140331854 (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
