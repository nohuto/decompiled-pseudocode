/*
 * XREFs of MiStartingOffset @ 0x1400B8AD0
 * Callers:
 *     MiIdentifyPfn @ 0x140005560 (MiIdentifyPfn.c)
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiFinishMdlForMappedFileFault @ 0x140093AC0 (MiFinishMdlForMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140093ED0 (MiPickClusterForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400B8110 (MiMakeSystemCacheRangeValid.c)
 *     MiStartingOffsetNeedLock @ 0x1400B8B88 (MiStartingOffsetNeedLock.c)
 *     MiReadyFlushMdlToWrite @ 0x1400BB47C (MiReadyFlushMdlToWrite.c)
 *     MiTrimSection @ 0x1400C0BB0 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x1400C0E08 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiMakeSystemCachePteValid @ 0x1400D3E1C (MiMakeSystemCachePteValid.c)
 *     MiAdvanceVadView @ 0x1400E8444 (MiAdvanceVadView.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CAF9C (MiCopyImageExtentContents.c)
 *     MiCfgMarkValidEntries @ 0x1405ECB7C (MiCfgMarkValidEntries.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140647770 (MiPfAllocateMdls.c)
 *     MiFillMapFileInfo @ 0x140886E8C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400960CC (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x14015CC6C (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  __int64 v7; // rbx
  unsigned __int64 v9; // rbx
  __int64 SharedProtos; // rax

  v3 = *a1;
  v5 = a1[1];
  if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
  {
    if ( a2 < v5 || a2 >= v5 + 8LL * *((unsigned int *)a1 + 11) )
    {
      if ( (*((_BYTE *)a1 + 34) & 2) != 0 )
        SharedProtos = MiGetSharedProtos(v3, a3, a1);
      else
        SharedProtos = MiGetSubsectionDriverProtos(a1);
      v9 = a2 - *(_QWORD *)(SharedProtos + 72);
    }
    else
    {
      v9 = a2 - v5;
    }
    return ((v9 << 9) & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)*((unsigned int *)a1 + 9) << 9);
  }
  else
  {
    if ( v5 )
      v7 = (__int64)(a2 - v5) >> 3 << 12;
    else
      v7 = 0LL;
    return v7 + ((*((unsigned int *)a1 + 9) | ((unsigned __int64)((_WORD)a1[4] & 0xFFC0) << 26)) << 12);
  }
}
