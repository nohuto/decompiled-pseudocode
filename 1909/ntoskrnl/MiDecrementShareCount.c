/*
 * XREFs of MiDecrementShareCount @ 0x1400BB990
 * Callers:
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     MiDeleteTopLevelPage @ 0x14008EDEC (MiDeleteTopLevelPage.c)
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400B8110 (MiMakeSystemCacheRangeValid.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400BBE50 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOutPageSingleKernelStack @ 0x1400BEC90 (MiOutPageSingleKernelStack.c)
 *     MiFreeContiguousPages @ 0x1400F4FD4 (MiFreeContiguousPages.c)
 *     MiTrimSystemImagePages @ 0x1400FA4E8 (MiTrimSystemImagePages.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiAddSystemPageTableToList @ 0x14012377C (MiAddSystemPageTableToList.c)
 *     MiFreeUnmappedPageTables @ 0x140125C40 (MiFreeUnmappedPageTables.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiBuildReservationCluster @ 0x140162A00 (MiBuildReservationCluster.c)
 *     MiPurgeSubsection @ 0x1402B9D38 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x1402CB468 (MiDecrementProtoShareCounts.c)
 *     MiDeleteAwePageTable @ 0x1402D56A8 (MiDeleteAwePageTable.c)
 *     MiInitializeProtoPfn @ 0x1402DE7F0 (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x1402E3E90 (MiFinishLastForkPageTable.c)
 *     MiTradeBootImagePage @ 0x1409EF854 (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x1409FE414 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCount(ULONG_PTR a1)
{
  char v1; // dl
  __int64 v2; // r9
  __int64 v3; // r8

  v1 = *(_BYTE *)(a1 + 34);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = v2 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v1 & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (__int64)(a1 + 0x58000000000LL) / 48,
      v1 & 7,
      *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(a1 + 24) = v2 ^ ((v3 - 1) ^ v2) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v3 == 1 )
    return MiPfnShareCountIsZero(a1, 0LL, 1LL, v2);
  else
    return 2LL;
}
