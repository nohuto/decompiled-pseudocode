/*
 * XREFs of MiDereferenceControlAreaFile @ 0x14001CA78
 * Callers:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007E6B0 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7A60 (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x1400F58FC (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x140136D9C (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x1402A1918 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405DD7A0 (MiCreateSectionCommon.c)
 *     MiAllowImageMap @ 0x1405F48B8 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x14060A404 (MmCreateSpecialImageSection.c)
 *     MiUnmapViewOfSection @ 0x1406171B0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140617488 (MiUnmapVad.c)
 *     MmExtendSection @ 0x14061C8CC (MmExtendSection.c)
 *     MiLogRelocationFaults @ 0x140650824 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x1406508FC (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x140650E60 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140681C04 (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1406B6C3C (MmFlushVirtualMemory.c)
 *     MiParseComImage @ 0x1406C06DC (MiParseComImage.c)
 *     NtAreMappedFilesTheSame @ 0x140704CC0 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140760AD8 (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x14084BD84 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x14084C178 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408521D0 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140858CE0 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140858E5C (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A39C (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400C1040 (ObDereferenceObjectDeferDelete.c)
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
