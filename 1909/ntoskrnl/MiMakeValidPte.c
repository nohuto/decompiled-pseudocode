/*
 * XREFs of MiMakeValidPte @ 0x14002B050
 * Callers:
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MiLinkPoolCommitChain @ 0x1400231B0 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x140023870 (MiAssignNonPagedPoolPte.c)
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C720 (MiDecrementAndInsertStandbyPages.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiAllocateKernelStackPages @ 0x14002CE10 (MiAllocateKernelStackPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiInitializeSystemPageTable @ 0x14009641C (MiInitializeSystemPageTable.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiReadyStandbyPageForActive @ 0x1400B9A40 (MiReadyStandbyPageForActive.c)
 *     MiCopySinglePage @ 0x1400C7A2C (MiCopySinglePage.c)
 *     MiMakeTransitionPteValid @ 0x1400CBA2C (MiMakeTransitionPteValid.c)
 *     MiMakeSystemCachePteValid @ 0x1400D3E1C (MiMakeSystemCachePteValid.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     MiCreateSharedZeroPages @ 0x1400DD580 (MiCreateSharedZeroPages.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiInsertPhysicalPteMapping @ 0x1400F727C (MiInsertPhysicalPteMapping.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiUnlinkStandbyPfn @ 0x1401216A0 (MiUnlinkStandbyPfn.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiZeroLargePage @ 0x140129B2C (MiZeroLargePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x14012B720 (MiSetProtectionOnTransitionPte.c)
 *     MiFillPhysicalPages @ 0x14012C484 (MiFillPhysicalPages.c)
 *     MmSetPageProtection @ 0x14012EF20 (MmSetPageProtection.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     MiMapRetpolineStubs @ 0x140154F68 (MiMapRetpolineStubs.c)
 *     MiMapSinglePage @ 0x140155170 (MiMapSinglePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155AE8 (MiUpdateImagePfnImportRelocations.c)
 *     MmMapMemoryDumpMdlEx @ 0x14015F904 (MmMapMemoryDumpMdlEx.c)
 *     MiBuildReservationCluster @ 0x140162A00 (MiBuildReservationCluster.c)
 *     MiReplacePfnWithGapMapping @ 0x1401869E4 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeUnusablePfns @ 0x140188FE4 (MiInitializeUnusablePfns.c)
 *     MiFillGapPtes @ 0x1401896D8 (MiFillGapPtes.c)
 *     MiMapWithLargePages @ 0x14018D3E0 (MiMapWithLargePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x14018F98C (MiInitializeNewUltraHugeContext.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x1402C09C4 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402C1310 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MiMapFrame @ 0x1402C4D54 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x1402C6ED8 (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x1402CA4A8 (MiMakeLargePageTable.c)
 *     MiEnableLargeSubsection @ 0x1402CB72C (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x1402CB8D4 (MiFillPageWithImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D0EBC (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1402D1D88 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1402D27D0 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiInitializeProtoPfn @ 0x1402DE7F0 (MiInitializeProtoPfn.c)
 *     MiInsertLargeUserMapping @ 0x1402DFBE4 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPageTable @ 0x1402E18F0 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1402E3E90 (MiFinishLastForkPageTable.c)
 *     MiScrubNodeLargePageList @ 0x1402E6B20 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x1402ECA88 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x140607190 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140641E24 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x140646B08 (MiAllocateTopLevelPage.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x14074EDEC (MiInitializeShadowPageTable.c)
 *     MmAllocateNonCachedMemory @ 0x140888E30 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408932E4 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x140898184 (MmChangeKernelCfgBitmap.c)
 *     MiDeletePfnBitMaps @ 0x14089B570 (MiDeletePfnBitMaps.c)
 *     MxMapVa @ 0x1409F35B4 (MxMapVa.c)
 *     MiInitializeGapFrames @ 0x1409F44A0 (MiInitializeGapFrames.c)
 *     MxCopyPage @ 0x1409FC24C (MxCopyPage.c)
 *     MxSwapPages @ 0x1409FC9A4 (MxSwapPages.c)
 *     MiInitializeTbFlush @ 0x140A0F8D0 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140A1AED4 (MiInitializeDummyPages.c)
 *     MiInitializeSharedUserData @ 0x140A1D07C (MiInitializeSharedUserData.c)
 *     MiMapDummyPages @ 0x140A1FD20 (MiMapDummyPages.c)
 *     MiMapBBTMemory @ 0x140A23054 (MiMapBBTMemory.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A3C84C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x140118C20 (MiUserPdeOrAbove.c)
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
    v9 = HIBYTE(word_1404658EC);
    goto LABEL_13;
  }
  if ( byte_140467140[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa > qword_140465BE0 || LeafVa < qword_1404672B0 )
      v9 = (unsigned __int8)word_1404658EC;
    else
      v9 = HIBYTE(word_1404658EC);
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
    v10 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)word_1404658EC << 8)) & 0x100 ^ (unsigned __int64)v10;
  v11 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v11 = v10;
  v12 = v11 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v12 = v11;
  return v12 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
