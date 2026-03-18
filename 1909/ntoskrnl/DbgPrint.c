/*
 * XREFs of DbgPrint @ 0x140126B50
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011E8D0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14030ED6C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14030F154 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14030F880 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14030F9C0 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14031021C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x140310C80 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1403143E4 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x14031A380 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14031A7E4 (RtlpPopulateListIndex.c)
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     PopWriteHeaderPages @ 0x14059AB18 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x1405AD5E0 (PopWriteImageHeader.c)
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x14060F400 (CmNotifyRunDown.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     CmpPostApc @ 0x1406D0FA0 (CmpPostApc.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IopQueryLegacyBusInformation @ 0x14071EBA0 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x140720320 (RtlDestroyHeap.c)
 *     ExpSetPendingUILanguage @ 0x14074593C (ExpSetPendingUILanguage.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14076A314 (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x140839BB0 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x14087F280 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14089D3E0 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1408D4620 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x140975BF4 (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126BD0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}
