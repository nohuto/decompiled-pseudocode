/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x1400CA970
 * Callers:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D3A0 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x14005E020 (MiGetNextPageTable.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MiPfCompleteInPageSupport @ 0x14009553C (MiPfCompleteInPageSupport.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiMarkPteDirty @ 0x1400B8C20 (MiMarkPteDirty.c)
 *     MiOutPageSingleKernelStack @ 0x1400BEC90 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiEncodeProtoFill @ 0x1400C1E14 (MiEncodeProtoFill.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiOutSwapKernelStackPage @ 0x1400D90D4 (MiOutSwapKernelStackPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400D9D04 (MmQuerySystemWorkingSetInformation.c)
 *     MiReturnSystemVa @ 0x1400E6D50 (MiReturnSystemVa.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400FA0BC (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 *     MmFreePoolMemory @ 0x14010DBAC (MmFreePoolMemory.c)
 *     MiClearNonPagedPtes @ 0x14010DDA8 (MiClearNonPagedPtes.c)
 *     MiLockStealSystemVm @ 0x14012CDC0 (MiLockStealSystemVm.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012DF0C (MmAdjustWorkingSetSizeEx.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiCapturePfnVm @ 0x14013F330 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x140141704 (MiRecheckCombineVm.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     MiMapRetpolineStubs @ 0x140154F68 (MiMapRetpolineStubs.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401558AC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiComputeMaximumFaultCluster @ 0x140170A18 (MiComputeMaximumFaultCluster.c)
 *     MiCountSystemImageCommitment @ 0x14017ACE4 (MiCountSystemImageCommitment.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140185FB0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x140186558 (MiGetNextNonGapPfnPage.c)
 *     MiDeleteBootRange @ 0x14018B138 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x14018D158 (MiMapContiguousMemoryLarge.c)
 *     MiExceptionForMappedVa @ 0x1402BC970 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402BCA60 (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x1402BD9F4 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402C624C (MmRemoveSystemCacheFromDump.c)
 *     MiReleaseLargePteMappings @ 0x1402DD99C (MiReleaseLargePteMappings.c)
 *     MiConvertHiberPhasePages @ 0x14059C7E4 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1405ABF9C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1405AC0EC (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1405AC190 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiGetCcAccessLog @ 0x14064698C (MiGetCcAccessLog.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406482E0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 *     HvTrimHive @ 0x140716A10 (HvTrimHive.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 *     MmMapLockedRestartPages @ 0x1408873F0 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x140887490 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x14088A9A0 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x14088EC58 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x14088ECF0 (MiLockHotPatchUndoPages.c)
 *     MmLogSystemShareablePfnInfo @ 0x140897A80 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     MiMarkBootKernelStack @ 0x1409EE190 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x1409EE318 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x1409EE4E0 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x1409EF438 (MiCreateInitialSystemWsles.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x1409F12C0 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeNonPagedPool @ 0x1409F17C4 (MiInitializeNonPagedPool.c)
 *     MiMarkLargePageMappings @ 0x1409F4394 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x1409FDF14 (MmFreeLoaderBlock.c)
 *     MiInitializeDynamicVa @ 0x140A17CC0 (MiInitializeDynamicVa.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 < 1 )
  {
    v1 = 3LL * a1;
    v2 = (char *)&unk_14046A1C0;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140466780;
  }
  return &v2[64 * v1];
}
