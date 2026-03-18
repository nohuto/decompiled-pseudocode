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
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MiIsCfgBitMapPageShared @ 0x140076150 (MiIsCfgBitMapPageShared.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     MiCapturePfnVm @ 0x140083648 (MiCapturePfnVm.c)
 *     MiGetNextPageTable @ 0x140084240 (MiGetNextPageTable.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MiEncodeProtoFill @ 0x140093A8C (MiEncodeProtoFill.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiMarkPteDirty @ 0x1400ADFE0 (MiMarkPteDirty.c)
 *     MiWsleFlush @ 0x1400B32F0 (MiWsleFlush.c)
 *     MiCopyOnWrite @ 0x1400B45C0 (MiCopyOnWrite.c)
 *     MiSetPagingOfDriver @ 0x1400DADDC (MiSetPagingOfDriver.c)
 *     MiOutSwapKernelStackPage @ 0x1400E501C (MiOutSwapKernelStackPage.c)
 *     MiSystemFault @ 0x1400E88E0 (MiSystemFault.c)
 *     MiLockStealSystemVm @ 0x1400E9958 (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x1400E9C10 (MiTranslatePageForCopy.c)
 *     MiSynchronizeSystemVa @ 0x1400E9F48 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiCountSharedPages @ 0x14010AC50 (MiCountSharedPages.c)
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130A14 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C044 (MmAdjustWorkingSetSizeEx.c)
 *     MiRecheckCombineVm @ 0x14013EED4 (MiRecheckCombineVm.c)
 *     MiLockPagedAddress @ 0x1401408F0 (MiLockPagedAddress.c)
 *     MiMapPageFileHash @ 0x14014FCB8 (MiMapPageFileHash.c)
 *     MiExpandPagedPool @ 0x1401641CC (MiExpandPagedPool.c)
 *     MiComputeMaximumFaultCluster @ 0x140168C18 (MiComputeMaximumFaultCluster.c)
 *     MiCountSystemImageCommitment @ 0x14017341C (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x1401810E0 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x1401831C4 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPages @ 0x140183FC0 (MiFreeUnusedPfnPages.c)
 *     MiGetNextNonGapPfnPage @ 0x140184448 (MiGetNextNonGapPfnPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5434 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiExceptionForMappedVa @ 0x1402A577C (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402A586C (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x1402A63A8 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x1402AB0CC (MmReplaceImportEntry.c)
 *     MmFreeSpecialPool @ 0x1402AD078 (MmFreeSpecialPool.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE5AC (MmRemoveSystemCacheFromDump.c)
 *     MiReleaseLargePteMappings @ 0x1402C389C (MiReleaseLargePteMappings.c)
 *     MiConvertHiberPhasePages @ 0x14056DF80 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x14057BFDC (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x14057C128 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14057C1BC (MiMarkNonPagedHiberPhasePages.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F3130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140650E60 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MiGetCcAccessLog @ 0x140662A88 (MiGetCcAccessLog.c)
 *     MiUseLargeDriverPage @ 0x140683280 (MiUseLargeDriverPage.c)
 *     HvTrimHive @ 0x1406BDD40 (HvTrimHive.c)
 *     MiFreeInitializationCode @ 0x1406C783C (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 *     MmReturnChargesToLockPagedPool @ 0x14084F210 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x140855EB8 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x140855F4C (MiLockHotPatchUndoPages.c)
 *     MmLogSystemShareablePfnInfo @ 0x14085B6F0 (MmLogSystemShareablePfnInfo.c)
 *     MiMarkBootKernelStack @ 0x1409B6464 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x1409B68BC (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x1409B6A44 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x1409B7B7C (MiCreateInitialSystemWsles.c)
 *     MiMarkLargePageMappings @ 0x1409B905C (MiMarkLargePageMappings.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x1409BCC18 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeNonPagedPool @ 0x1409BD0D4 (MiInitializeNonPagedPool.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 *     MiInitializeDynamicVa @ 0x1409D3630 (MiInitializeDynamicVa.c)
 *     MiReturnDriverLoadPages @ 0x1409F7790 (MiReturnDriverLoadPages.c)
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
    v2 = (char *)&unk_14043E640;
  }
  else
  {
    v1 = 272LL * a1;
    v2 = (char *)&unk_14043B080;
  }
  return &v2[v1];
}
