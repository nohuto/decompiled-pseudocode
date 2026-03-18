/*
 * XREFs of DbgPrint @ 0x1401264E0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011E3C0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14030F31C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14030F704 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14030FE30 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14030FF70 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1403107CC (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x140311230 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140314994 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x14031A930 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14031AD94 (RtlpPopulateListIndex.c)
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     PopWriteHeaderPages @ 0x14059AB38 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x1405AD600 (PopWriteImageHeader.c)
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x14060D8F0 (CmNotifyRunDown.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     CmpPostApc @ 0x1406D1D30 (CmpPostApc.c)
 *     RtlCreateHeap @ 0x1406E6750 (RtlCreateHeap.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopQueryLegacyBusInformation @ 0x14071CD10 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x14071E490 (RtlDestroyHeap.c)
 *     ExpSetPendingUILanguage @ 0x140743A3C (ExpSetPendingUILanguage.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140765814 (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x14083A550 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x14087FB80 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14089DBC0 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1408D4D20 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x140975BF4 (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126560 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}
