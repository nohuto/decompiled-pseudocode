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
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082780 (MiMapPageInHyperSpaceWorker.c)
 *     MiCopyToUserVa @ 0x140084410 (MiCopyToUserVa.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400992E0 (MiAssignNonPagedPoolPtes.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 *     MiWsleFree @ 0x1400B2C70 (MiWsleFree.c)
 *     MiAllocateKernelStackPages @ 0x1400B5660 (MiAllocateKernelStackPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7A80 (MiMakeSystemCachePteValid.c)
 *     MiCopySinglePage @ 0x1400EA628 (MiCopySinglePage.c)
 *     MmAllocateIndependentPagesEx @ 0x140108FBC (MmAllocateIndependentPagesEx.c)
 *     MiCreateSharedZeroPages @ 0x1401091C0 (MiCreateSharedZeroPages.c)
 *     MiMapArbitraryPage @ 0x14010EA10 (MiMapArbitraryPage.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FE80 (MiInsertPhysicalPteMapping.c)
 *     MiZeroLargePage @ 0x140118D7C (MiZeroLargePage.c)
 *     MiUnlinkStandbyPfn @ 0x1401204A4 (MiUnlinkStandbyPfn.c)
 *     MiMapSinglePage @ 0x14012187C (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x140125E40 (MiPrivateFixup.c)
 *     MiFillPhysicalPages @ 0x14012AF80 (MiFillPhysicalPages.c)
 *     MiGetPteFromCopyList @ 0x14012D808 (MiGetPteFromCopyList.c)
 *     MmSetPageProtection @ 0x140133580 (MmSetPageProtection.c)
 *     MiZeroInParallelWorker @ 0x14013C6C0 (MiZeroInParallelWorker.c)
 *     MmMapMemoryDumpMdlEx @ 0x140144420 (MmMapMemoryDumpMdlEx.c)
 *     MiMapPageFileHash @ 0x14014FCD8 (MiMapPageFileHash.c)
 *     MiBuildReservationCluster @ 0x1401500BC (MiBuildReservationCluster.c)
 *     MiInitializeUnusablePfns @ 0x14017F04C (MiInitializeUnusablePfns.c)
 *     MiMapWithLargePages @ 0x140183460 (MiMapWithLargePages.c)
 *     MiPfnRangeIsZero @ 0x140184654 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184B04 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeNewUltraHugeContext @ 0x1401858BC (MiInitializeNewUltraHugeContext.c)
 *     MiFillGapPtes @ 0x140186BCC (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x14018EAF4 (MiMapMdlCommon.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1401B51AC (MiUpdateImagePfnImportRelocations.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4368 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x1402A9424 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9C70 (MmProtectMdlSystemAddress.c)
 *     MiMapFrame @ 0x1402ABDB4 (MiMapFrame.c)
 *     MmAllocateSpecialPool @ 0x1402ACB64 (MmAllocateSpecialPool.c)
 *     MiInitializeSlowPte @ 0x1402AF314 (MiInitializeSlowPte.c)
 *     MiProtectAweRegion @ 0x1402B15BC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2278 (MiWriteAwePtes.c)
 *     MiJoinBitmapPages @ 0x1402B4EC0 (MiJoinBitmapPages.c)
 *     MiMakeLargePageTable @ 0x1402B50E8 (MiMakeLargePageTable.c)
 *     MiEnableLargeSubsection @ 0x1402B5CC4 (MiEnableLargeSubsection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BAEF8 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1402BB89C (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1402BC234 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x1402BC8E4 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE120 (MiProtectEnclavePages.c)
 *     MiInitializeProtoPfn @ 0x1402C4B5C (MiInitializeProtoPfn.c)
 *     MiBuildForkPageTable @ 0x1402C790C (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1402C9DF0 (MiFinishLastForkPageTable.c)
 *     MiScrubNodeLargePageList @ 0x1402CCB90 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x1402CF950 (MiScrubPage.c)
 *     MiValidateImagePfn @ 0x1405A8854 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1405DF930 (MiRelocateImagePfn.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1406D1898 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1406D1BCC (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x140715720 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140715F38 (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x14072A3F4 (MiInitializeShadowPageTable.c)
 *     MmAllocateNonCachedMemory @ 0x14084DC40 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x14085948C (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140859B90 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x14085BF50 (MmChangeKernelCfgBitmap.c)
 *     MiMapUserLargePages @ 0x14085D558 (MiMapUserLargePages.c)
 *     MiDeletePfnBitMaps @ 0x14085F510 (MiDeletePfnBitMaps.c)
 *     MiInitializeSystemImagePage @ 0x1409B8190 (MiInitializeSystemImagePage.c)
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 *     MiInitializeDummyPages @ 0x1409B96DC (MiInitializeDummyPages.c)
 *     MiInitializeTbFlush @ 0x1409B9C04 (MiInitializeTbFlush.c)
 *     MiMapBBTMemory @ 0x1409BA008 (MiMapBBTMemory.c)
 *     MxMapVa @ 0x1409BB8F8 (MxMapVa.c)
 *     MxCopyPage @ 0x1409BFDC8 (MxCopyPage.c)
 *     MxSwapPages @ 0x1409C04C8 (MxSwapPages.c)
 *     MiInitializeGapFrames @ 0x1409D2020 (MiInitializeGapFrames.c)
 *     MiInitializeSharedUserData @ 0x1409D95F0 (MiInitializeSharedUserData.c)
 *     MiMapDummyPages @ 0x1409DC7AC (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F72B8 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x140076410 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x1400F964C (MiUserPdeOrAbove.c)
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
    v14 = HIBYTE(word_14043A1AC);
    goto LABEL_25;
  }
  if ( byte_14043B950[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_14043BAC0 || LeafVa > qword_14043A530 )
      v14 = (unsigned __int8)word_14043A1AC;
    else
      v14 = HIBYTE(word_14043A1AC);
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
    v8 = ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int8)word_14043A1AC << 8)) & 0x100 ^ (unsigned __int64)v8;
  v9 = v8 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v10 = v9;
  return v10 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
