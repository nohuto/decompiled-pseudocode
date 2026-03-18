/*
 * XREFs of MiDecrementShareCount @ 0x1400DBB10
 * Callers:
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MmOutSwapProcess @ 0x140074470 (MmOutSwapProcess.c)
 *     MiDeleteTopLevelPage @ 0x1400AD4DC (MiDeleteTopLevelPage.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400DBFD0 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MiTrimSystemImagePages @ 0x1400F6A48 (MiTrimSystemImagePages.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiFreeContiguousPages @ 0x140116EB4 (MiFreeContiguousPages.c)
 *     MiAddSystemPageTableToList @ 0x14012266C (MiAddSystemPageTableToList.c)
 *     MiFreeUnmappedPageTables @ 0x1401255D0 (MiFreeUnmappedPageTables.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MiPurgeSubsection @ 0x1402B9FD8 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x1402CB708 (MiDecrementProtoShareCounts.c)
 *     MiDeleteAwePageTable @ 0x1402D5948 (MiDeleteAwePageTable.c)
 *     MiInitializeProtoPfn @ 0x1402DEA90 (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3D30 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x1402E4130 (MiFinishLastForkPageTable.c)
 *     MiTradeBootImagePage @ 0x1409EF93C (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x1409FDEF8 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
