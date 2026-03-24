/*
 * XREFs of MiDereferenceControlAreaFile @ 0x14001CA78
 * Callers:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007E6B0 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7A80 (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x1400F591C (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x140136DBC (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x1402A1A18 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1402AA7EC (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405DD7A0 (MiCreateSectionCommon.c)
 *     MiAllowImageMap @ 0x1405F48B8 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x14060A404 (MmCreateSpecialImageSection.c)
 *     MiUnmapViewOfSection @ 0x1406171B0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140617488 (MiUnmapVad.c)
 *     MmExtendSection @ 0x14061C8CC (MmExtendSection.c)
 *     MiLogRelocationFaults @ 0x140650804 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x1406508DC (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x140650E40 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x140680FF8 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140681BE4 (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1406B6C1C (MmFlushVirtualMemory.c)
 *     MiParseComImage @ 0x1406C06BC (MiParseComImage.c)
 *     NtAreMappedFilesTheSame @ 0x140704CA0 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140760AB8 (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x14084BD64 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x14084C158 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408521B0 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140858CC0 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140858E3C (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A37C (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400C1060 (ObDereferenceObjectDeferDelete.c)
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
