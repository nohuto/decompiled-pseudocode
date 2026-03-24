/*
 * XREFs of DbgPrint @ 0x1401262D0
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011B9FC (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpAllocateHeap @ 0x1402EFD30 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0774 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1402F0B64 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1402F12A8 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F13E8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1C60 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1402F26E4 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1402F5DB4 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1402FBFE4 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1402FC44C (RtlpPopulateListIndex.c)
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 *     PopWriteHeaderPages @ 0x140569A20 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x14057D740 (PopWriteImageHeader.c)
 *     RtlpQueryRegistryValues @ 0x1405C58AC (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x1405F917C (CmNotifyRunDown.c)
 *     SepDuplicateToken @ 0x140649480 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     CmpPostApc @ 0x140694BF0 (CmpPostApc.c)
 *     IopQueryLegacyBusInformation @ 0x140701518 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x140702160 (RtlDestroyHeap.c)
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 *     RtlCreateHeap @ 0x14070AF20 (RtlCreateHeap.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A8F4 (ExpSetCurrentUserUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14073D974 (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x140800FF0 (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140861130 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1408965F0 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x14093653C (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126350 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x65u, 3u, va, 1);
}
