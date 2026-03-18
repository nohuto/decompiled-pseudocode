/*
 * XREFs of MiMakeValidPte @ 0x14002AC60
 * Callers:
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiLinkPoolCommitChain @ 0x140022DC0 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x140023480 (MiAssignNonPagedPoolPte.c)
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C330 (MiDecrementAndInsertStandbyPages.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiFillSystemPtes @ 0x14002FC70 (MiFillSystemPtes.c)
 *     MiZeroPhysicalPage @ 0x14006ED90 (MiZeroPhysicalPage.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiInitializeSystemPageTable @ 0x1400A35EC (MiInitializeSystemPageTable.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiReadyStandbyPageForActive @ 0x1400D9BC0 (MiReadyStandbyPageForActive.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MiCreateSharedZeroPages @ 0x1400EFE70 (MiCreateSharedZeroPages.c)
 *     MiCopySinglePage @ 0x1400F4B8C (MiCopySinglePage.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x14011915C (MiInsertPhysicalPteMapping.c)
 *     MiUnlinkStandbyPfn @ 0x140120950 (MiUnlinkStandbyPfn.c)
 *     MiMakeTransitionPteValid @ 0x140120AD0 (MiMakeTransitionPteValid.c)
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiZeroLargePage @ 0x14012910C (MiZeroLargePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x14012AD00 (MiSetProtectionOnTransitionPte.c)
 *     MiFillPhysicalPages @ 0x14012B9B4 (MiFillPhysicalPages.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     MiGetPteFromCopyList @ 0x1401379BC (MiGetPteFromCopyList.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 *     MiMapRetpolineStubs @ 0x1401548C8 (MiMapRetpolineStubs.c)
 *     MiMapSinglePage @ 0x140154AD0 (MiMapSinglePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155448 (MiUpdateImagePfnImportRelocations.c)
 *     MmMapMemoryDumpMdlEx @ 0x14015F264 (MmMapMemoryDumpMdlEx.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MiReplacePfnWithGapMapping @ 0x140186434 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeUnusablePfns @ 0x140188A34 (MiInitializeUnusablePfns.c)
 *     MiFillGapPtes @ 0x140189128 (MiFillGapPtes.c)
 *     MiMapWithLargePages @ 0x14018CB60 (MiMapWithLargePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x14018F07C (MiInitializeNewUltraHugeContext.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402C15B0 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     MiMapFrame @ 0x1402C4FF4 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x1402C7178 (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x1402CA748 (MiMakeLargePageTable.c)
 *     MiEnableLargeSubsection @ 0x1402CB9CC (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x1402CBB74 (MiFillPageWithImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D115C (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1402D2028 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1402D2A70 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4AB8 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiInitializeProtoPfn @ 0x1402DEA90 (MiInitializeProtoPfn.c)
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPageTable @ 0x1402E1B90 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1402E4130 (MiFinishLastForkPageTable.c)
 *     MiScrubNodeLargePageList @ 0x1402E6DC0 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x1402ECD28 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x140605680 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x14065C928 (MiValidateImagePfn.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x14068D6D8 (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14074080C (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x14074E35C (MiInitializeShadowPageTable.c)
 *     MmAllocateNonCachedMemory @ 0x140889610 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140893AC4 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x140898964 (MmChangeKernelCfgBitmap.c)
 *     MiDeletePfnBitMaps @ 0x14089BD50 (MiDeletePfnBitMaps.c)
 *     MxMapVa @ 0x1409F36A4 (MxMapVa.c)
 *     MiInitializeGapFrames @ 0x1409F4590 (MiInitializeGapFrames.c)
 *     MxCopyPage @ 0x1409FBD30 (MxCopyPage.c)
 *     MxSwapPages @ 0x1409FC488 (MxSwapPages.c)
 *     MiInitializeTbFlush @ 0x140A0F138 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140A1AC5C (MiInitializeDummyPages.c)
 *     MiInitializeSharedUserData @ 0x140A1CEA0 (MiInitializeSharedUserData.c)
 *     MiMapDummyPages @ 0x140A1FB40 (MiMapDummyPages.c)
 *     MiMapBBTMemory @ 0x140A22F74 (MiMapBBTMemory.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A3CA7C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x14011A7F0 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 LeafVa; // rsi
  unsigned __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax

  v4 = a3 & 0x1F;
  v6 = ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v4] & 0xFFFF000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_35:
    v6 |= 0x100uLL;
    goto LABEL_14;
  }
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v6 = ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v4] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v6 = ((a2 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FFF000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
      v6 |= 4uLL;
  }
  v8 = v6;
  v6 |= 4uLL;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v6 = v8;
  if ( (a3 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa(LeafVa);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v9 = HIBYTE(word_140465BEC);
    goto LABEL_13;
  }
  if ( byte_140467440[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa > qword_140465EE0 || LeafVa < qword_1404675B0 )
      v9 = (unsigned __int8)word_140465BEC;
    else
      v9 = HIBYTE(word_140465BEC);
LABEL_13:
    if ( !v9 )
      goto LABEL_14;
    goto LABEL_35;
  }
LABEL_14:
  v10 = v6 | 0x42;
  if ( a3 >= 0 || (v4 & 5) != 4 )
    v10 = v6;
  if ( (a3 & 0x40000000) != 0 )
    v10 &= ~4uLL;
  if ( (a3 & 0x20000000) != 0 )
    v10 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)word_140465BEC << 8)) & 0x100 ^ (unsigned __int64)v10;
  v11 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v11 = v10;
  v12 = v11 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v12 = v11;
  return v12 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
