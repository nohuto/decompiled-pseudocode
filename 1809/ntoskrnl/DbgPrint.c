/*
 * XREFs of DbgPrint @ 0x1401262B0
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011B9DC (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpAllocateHeap @ 0x1402EFC30 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0674 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1402F0A64 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1402F11A8 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F12E8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1B60 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1402F25E4 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1402F5CB4 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1402FBEE4 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1402FC34C (RtlpPopulateListIndex.c)
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 *     PopWriteHeaderPages @ 0x140569A20 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x14057D740 (PopWriteImageHeader.c)
 *     RtlpQueryRegistryValues @ 0x1405C58AC (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x1405F917C (CmNotifyRunDown.c)
 *     SepDuplicateToken @ 0x1406494A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     CmpPostApc @ 0x140694C10 (CmpPostApc.c)
 *     IopQueryLegacyBusInformation @ 0x140701538 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x140702180 (RtlDestroyHeap.c)
 *     IopUnloadDriver @ 0x1407089E8 (IopUnloadDriver.c)
 *     RtlCreateHeap @ 0x14070AF40 (RtlCreateHeap.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A914 (ExpSetCurrentUserUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14073D994 (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x140801010 (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140861150 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140896610 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x14093653C (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126330 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x65u, 3u, va, 1);
}
