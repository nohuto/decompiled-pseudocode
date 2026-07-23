/*
 * XREFs of DbgPrint @ 0x1401263A0
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011BA6C (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0964 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1402F0D54 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1402F1498 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F15D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1E50 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1402F28D4 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1402F5FA4 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1402FC1D4 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1402FC63C (RtlpPopulateListIndex.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PopWriteHeaderPages @ 0x14056AA20 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x14057E740 (PopWriteImageHeader.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     CmpPostApc @ 0x140695DB0 (CmpPostApc.c)
 *     IopQueryLegacyBusInformation @ 0x1407027B8 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x140703400 (RtlDestroyHeap.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071BB94 (ExpSetCurrentUserUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14073EB64 (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x1408021F0 (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140862390 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140897850 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x14093753C (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126420 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x65u, 3u, va, 1);
}
