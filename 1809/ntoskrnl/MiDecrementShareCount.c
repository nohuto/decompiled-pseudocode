/*
 * XREFs of MiDecrementShareCount @ 0x140081EA0
 * Callers:
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiDeleteTopLevelPage @ 0x140091A20 (MiDeleteTopLevelPage.c)
 *     MiWsleFree @ 0x1400B2C50 (MiWsleFree.c)
 *     MiTrimSystemImagePages @ 0x1400DB1B4 (MiTrimSystemImagePages.c)
 *     KiOutSwapProcesses @ 0x14010B430 (KiOutSwapProcesses.c)
 *     MiLockAndDecrementShareCount @ 0x140118088 (MiLockAndDecrementShareCount.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14011AACC (MiRewriteTrimPteAsDemandZero.c)
 *     MiAddSystemPageTableToList @ 0x14011F208 (MiAddSystemPageTableToList.c)
 *     MiFreeUnmappedPageTables @ 0x140120840 (MiFreeUnmappedPageTables.c)
 *     MiFreeContiguousPages @ 0x1401230D4 (MiFreeContiguousPages.c)
 *     MiConvertStandbyToProto @ 0x14013EA30 (MiConvertStandbyToProto.c)
 *     MiBuildReservationCluster @ 0x14015009C (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x140176600 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1402A2B28 (MiPurgeSubsection.c)
 *     MmFreeSpecialPool @ 0x1402AD078 (MmFreeSpecialPool.c)
 *     MiDeleteAwePageTable @ 0x1402B0134 (MiDeleteAwePageTable.c)
 *     MiDecrementLargeSubsections @ 0x1402B5714 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x1402B5904 (MiDecrementProtoShareCounts.c)
 *     MiInitializeProtoPfn @ 0x1402C4A5C (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x1402C98D8 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x1402C9CF0 (MiFinishLastForkPageTable.c)
 *     MiTradeBootImagePage @ 0x1409B86AC (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x1409C5664 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCount(ULONG_PTR a1)
{
  char v1; // dl
  __int64 v2; // r8

  v1 = *(_BYTE *)(a1 + 34);
  v2 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v1 & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (__int64)(a1 + 0x58000000000LL) / 48,
      v1 & 7,
      *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(a1 + 24) ^= ((v2 - 1) ^ *(_QWORD *)(a1 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v2 == 1 )
    return MiPfnShareCountIsZero(a1, 0LL);
  else
    return 2LL;
}
