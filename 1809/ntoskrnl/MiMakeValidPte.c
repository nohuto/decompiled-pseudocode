/*
 * XREFs of MiMakeValidPte @ 0x14003D7F0
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiInitializeSystemPageTable @ 0x140026984 (MiInitializeSystemPageTable.c)
 *     MiMakeTransitionPteValid @ 0x14002CF4C (MiMakeTransitionPteValid.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14003D440 (MiDecrementAndInsertStandbyPages.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiResolveProtoCombine @ 0x14007BF64 (MiResolveProtoCombine.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MiAssignNonPagedPoolPtes @ 0x140099220 (MiAssignNonPagedPoolPtes.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7B00 (MiMakeSystemCachePteValid.c)
 *     MiCopySinglePage @ 0x1400EA6A8 (MiCopySinglePage.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     MiCreateSharedZeroPages @ 0x140109240 (MiCreateSharedZeroPages.c)
 *     MiMapArbitraryPage @ 0x14010EA90 (MiMapArbitraryPage.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FF00 (MiInsertPhysicalPteMapping.c)
 *     MiZeroLargePage @ 0x140118DEC (MiZeroLargePage.c)
 *     MiUnlinkStandbyPfn @ 0x140120514 (MiUnlinkStandbyPfn.c)
 *     MiMapSinglePage @ 0x14012194C (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     MiGetPteFromCopyList @ 0x14012D8D8 (MiGetPteFromCopyList.c)
 *     MmSetPageProtection @ 0x140133650 (MmSetPageProtection.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MmMapMemoryDumpMdlEx @ 0x140144520 (MmMapMemoryDumpMdlEx.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiInitializeUnusablePfns @ 0x14017F18C (MiInitializeUnusablePfns.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeNewUltraHugeContext @ 0x1401859FC (MiInitializeNewUltraHugeContext.c)
 *     MiFillGapPtes @ 0x140186D0C (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x14018EC34 (MiMapMdlCommon.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1401B52EC (MiUpdateImagePfnImportRelocations.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x1402A9614 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9E60 (MmProtectMdlSystemAddress.c)
 *     MiMapFrame @ 0x1402ABFA4 (MiMapFrame.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     MiInitializeSlowPte @ 0x1402AF504 (MiInitializeSlowPte.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiJoinBitmapPages @ 0x1402B50B0 (MiJoinBitmapPages.c)
 *     MiMakeLargePageTable @ 0x1402B52D8 (MiMakeLargePageTable.c)
 *     MiEnableLargeSubsection @ 0x1402B5EB4 (MiEnableLargeSubsection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BB0E8 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1402BBA8C (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1402BC424 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiInitializeProtoPfn @ 0x1402C4D4C (MiInitializeProtoPfn.c)
 *     MiBuildForkPageTable @ 0x1402C7AFC (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1402C9FE0 (MiFinishLastForkPageTable.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x1402CFB40 (MiScrubPage.c)
 *     MiValidateImagePfn @ 0x1405A9854 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1406D2E6C (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x1407171D8 (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x14072B5E4 (MiInitializeShadowPageTable.c)
 *     MmAllocateNonCachedMemory @ 0x14084EEA0 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x14085ADF0 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x14085D1B0 (MmChangeKernelCfgBitmap.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 *     MiDeletePfnBitMaps @ 0x140860770 (MiDeletePfnBitMaps.c)
 *     MiInitializeSystemImagePage @ 0x1409B9190 (MiInitializeSystemImagePage.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 *     MiInitializeDummyPages @ 0x1409BA6DC (MiInitializeDummyPages.c)
 *     MiInitializeTbFlush @ 0x1409BAC04 (MiInitializeTbFlush.c)
 *     MiMapBBTMemory @ 0x1409BB008 (MiMapBBTMemory.c)
 *     MxMapVa @ 0x1409BC8F8 (MxMapVa.c)
 *     MxCopyPage @ 0x1409C0DC8 (MxCopyPage.c)
 *     MxSwapPages @ 0x1409C14C8 (MxSwapPages.c)
 *     MiInitializeGapFrames @ 0x1409D3020 (MiInitializeGapFrames.c)
 *     MiInitializeSharedUserData @ 0x1409DA5F0 (MiInitializeSharedUserData.c)
 *     MiMapDummyPages @ 0x1409DD7AC (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F82B8 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 LeafVa; // rbp
  unsigned __int64 v13; // rcx
  int v14; // eax

  v4 = a3 & 0x1F;
  v6 = (a2 & 0xFFFFFFFFFLL) << 12;
  v7 = v6 | MmProtectToPteMask[v4] & 0xFFFF000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_2;
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v7 = v6 | MmProtectToPteMask[v4] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v7 = v6 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FFF000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
      v7 |= 4uLL;
  }
  v13 = v7;
  v7 |= 4uLL;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v7 = v13;
  if ( (a3 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v14 = HIBYTE(word_14043B26C);
    goto LABEL_25;
  }
  if ( byte_14043CA10[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_14043CB80 || LeafVa > qword_14043B5F0 )
      v14 = (unsigned __int8)word_14043B26C;
    else
      v14 = HIBYTE(word_14043B26C);
LABEL_25:
    if ( !v14 )
      goto LABEL_3;
LABEL_2:
    v7 |= 0x100uLL;
  }
LABEL_3:
  v8 = v7 | 0x42;
  if ( a3 >= 0 || (v4 & 5) != 4 )
    v8 = v7;
  if ( (a3 & 0x40000000) != 0 )
    v8 &= ~4uLL;
  if ( (a3 & 0x20000000) != 0 )
    v8 = ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int8)word_14043B26C << 8)) & 0x100 ^ (unsigned __int64)v8;
  v9 = v8 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v10 = v9;
  return v10 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
