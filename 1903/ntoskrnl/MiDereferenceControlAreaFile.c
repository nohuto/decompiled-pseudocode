/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140009C6C
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiDeprioritizeVad @ 0x14013B5DC (MiDeprioritizeVad.c)
 *     MiCreateSystemSection @ 0x140154C34 (MiCreateSystemSection.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405D6500 (MiCreateSectionCommon.c)
 *     MiAllowImageMap @ 0x1405EB0B4 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x140618DD8 (MmCreateSpecialImageSection.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14064C934 (MiUnmapVad.c)
 *     MiLogRelocationFaults @ 0x140658B64 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x140659FF0 (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 *     MiParseComImage @ 0x1406DE6D4 (MiParseComImage.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x14070E4FC (MiDriverLoadSucceeded.c)
 *     NtAreMappedFilesTheSame @ 0x14072B6B0 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140787880 (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x140887264 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140887660 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140892958 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140892AE8 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x140894B78 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall MiDereferenceControlAreaFile(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDelete((PVOID)a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
