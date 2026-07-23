/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x140028884
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiPfCompleteInPageSupport @ 0x14001A0B8 (MiPfCompleteInPageSupport.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiClearNonPagedPtes @ 0x1400282C4 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAA0 (MiOutPageSingleKernelStack.c)
 *     MiCapturePfnVm @ 0x140083638 (MiCapturePfnVm.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiEncodeProtoFill @ 0x1400939CC (MiEncodeProtoFill.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiMarkPteDirty @ 0x1400ADF40 (MiMarkPteDirty.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiSetPagingOfDriver @ 0x1400DAE7C (MiSetPagingOfDriver.c)
 *     MiOutSwapKernelStackPage @ 0x1400E50BC (MiOutSwapKernelStackPage.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiLockStealSystemVm @ 0x1400E99F8 (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130B04 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MiRecheckCombineVm @ 0x14013EFF4 (MiRecheckCombineVm.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     MiExpandPagedPool @ 0x1401642EC (MiExpandPagedPool.c)
 *     MiComputeMaximumFaultCluster @ 0x140168D38 (MiComputeMaximumFaultCluster.c)
 *     MiCountSystemImageCommitment @ 0x14017353C (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x140181240 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x140183324 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPages @ 0x140184120 (MiFreeUnusedPfnPages.c)
 *     MiGetNextNonGapPfnPage @ 0x1401845A8 (MiGetNextNonGapPfnPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5594 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiExceptionForMappedVa @ 0x1402A5A6C (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402A5B5C (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x1402A6698 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MmFreeSpecialPool @ 0x1402AD368 (MmFreeSpecialPool.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE89C (MmRemoveSystemCacheFromDump.c)
 *     MiReleaseLargePteMappings @ 0x1402C3B8C (MiReleaseLargePteMappings.c)
 *     MiConvertHiberPhasePages @ 0x14056EF80 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x14057CFDC (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x14057D128 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14057D1BC (MiMarkNonPagedHiberPhasePages.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiGetCcAccessLog @ 0x140663C28 (MiGetCcAccessLog.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     HvTrimHive @ 0x1406BEFC0 (HvTrimHive.c)
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MmReturnChargesToLockPagedPool @ 0x140850450 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x1408570F8 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x14085718C (MiLockHotPatchUndoPages.c)
 *     MmLogSystemShareablePfnInfo @ 0x14085C930 (MmLogSystemShareablePfnInfo.c)
 *     MiMarkBootKernelStack @ 0x1409B7464 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x1409B78BC (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x1409B7A44 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x1409B8B7C (MiCreateInitialSystemWsles.c)
 *     MiMarkLargePageMappings @ 0x1409BA05C (MiMarkLargePageMappings.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x1409BDC18 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeNonPagedPool @ 0x1409BE0D4 (MiInitializeNonPagedPool.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     MiInitializeDynamicVa @ 0x1409D4630 (MiInitializeDynamicVa.c)
 *     MiReturnDriverLoadPages @ 0x1409F87A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 < 1 )
  {
    v1 = 192LL * a1;
    v2 = (char *)&unk_14043F700;
  }
  else
  {
    v1 = 272LL * a1;
    v2 = (char *)&unk_14043C140;
  }
  return &v2[v1];
}
