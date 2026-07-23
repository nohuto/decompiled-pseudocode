/*
 * XREFs of MiDereferenceControlAreaFile @ 0x14001CA78
 * Callers:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7B00 (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x140136EBC (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 *     MiAllowImageMap @ 0x1405F58B8 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x14060B404 (MmCreateSpecialImageSection.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140618488 (MiUnmapVad.c)
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 *     MiLogRelocationFaults @ 0x1406519C4 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 *     MiParseComImage @ 0x1406C195C (MiParseComImage.c)
 *     NtAreMappedFilesTheSame @ 0x140705F40 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140761CA8 (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x14084CFC4 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x14084D3B8 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140859F20 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x14085A09C (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
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
