/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x14008D9C0
 * Callers:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiMakeHyperRangeAccessible @ 0x1400524E0 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D300 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x14005DF80 (MiGetNextPageTable.c)
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140075950 (MiSynchronizeSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MiProbeAndLockPrepare @ 0x14008FB20 (MiProbeAndLockPrepare.c)
 *     MiPfCompleteInPageSupport @ 0x1400A480C (MiPfCompleteInPageSupport.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiMarkPteDirty @ 0x1400D8DA0 (MiMarkPteDirty.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MiEncodeProtoFill @ 0x1400E1F94 (MiEncodeProtoFill.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400F17D0 (MmQuerySystemWorkingSetInformation.c)
 *     MiOutSwapKernelStackPage @ 0x1400F3D40 (MiOutSwapKernelStackPage.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiCountSharedPages @ 0x1401007A0 (MiCountSharedPages.c)
 *     MmFreePoolMemory @ 0x14010E4BC (MmFreePoolMemory.c)
 *     MiClearNonPagedPtes @ 0x14010E6B8 (MiClearNonPagedPtes.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiLockStealSystemVm @ 0x14012C2F0 (MiLockStealSystemVm.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiCapturePfnVm @ 0x14013ECA0 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x1401411C8 (MiRecheckCombineVm.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 *     MiMapRetpolineStubs @ 0x1401548C8 (MiMapRetpolineStubs.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiComputeMaximumFaultCluster @ 0x140170328 (MiComputeMaximumFaultCluster.c)
 *     MiCountSystemImageCommitment @ 0x14017A5F4 (MiCountSystemImageCommitment.c)
 *     MiUnmapRetpolineStubs @ 0x14017FF6C (MiUnmapRetpolineStubs.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140185A00 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x140185FA8 (MiGetNextNonGapPfnPage.c)
 *     MiDeleteBootRange @ 0x14018A7A8 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x14018C8D8 (MiMapContiguousMemoryLarge.c)
 *     MiExceptionForMappedVa @ 0x1402BCC10 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402BCD00 (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x1402BDC94 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402C64EC (MmRemoveSystemCacheFromDump.c)
 *     MiReleaseLargePteMappings @ 0x1402DDC3C (MiReleaseLargePteMappings.c)
 *     MiConvertHiberPhasePages @ 0x14059CF64 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1405ABFBC (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1405AC10C (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1405AC1B0 (MiMarkNonPagedHiberPhasePages.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14066E880 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiGetCcAccessLog @ 0x1406BD07C (MiGetCcAccessLog.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     HvTrimHive @ 0x140714C30 (HvTrimHive.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MmMapLockedRestartPages @ 0x140887BC4 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x140887C70 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x14088B180 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x14088F438 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x14088F4D0 (MiLockHotPatchUndoPages.c)
 *     MmLogSystemShareablePfnInfo @ 0x140898260 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 *     MiMarkBootKernelStack @ 0x1409EE278 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x1409EE400 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x1409EE5C8 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x1409EF520 (MiCreateInitialSystemWsles.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x1409F13B0 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeNonPagedPool @ 0x1409F18B4 (MiInitializeNonPagedPool.c)
 *     MiMarkLargePageMappings @ 0x1409F4484 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 *     MiInitializeDynamicVa @ 0x140A17800 (MiInitializeDynamicVa.c)
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
    v2 = (char *)&unk_14046A480;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140466A80;
  }
  return &v2[64 * v1];
}
