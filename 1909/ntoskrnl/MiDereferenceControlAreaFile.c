/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140009CFC
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140077E98 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiMakeSystemCachePteValid @ 0x1400D3E1C (MiMakeSystemCachePteValid.c)
 *     MiDeprioritizeVad @ 0x14013BBFC (MiDeprioritizeVad.c)
 *     MiCreateSystemSection @ 0x1401552D4 (MiCreateSystemSection.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405D6CC0 (MiCreateSectionCommon.c)
 *     MiAllowImageMap @ 0x1405EB884 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x14061A8E8 (MmCreateSpecialImageSection.c)
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x140624DB0 (MmExtendSection.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x140643DC8 (MiParseImageLoadConfig.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1406605C4 (MiUnmapVad.c)
 *     MiLogRelocationFaults @ 0x14066BB84 (MiLogRelocationFaults.c)
 *     MiParseComImage @ 0x1406DFA74 (MiParseComImage.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 *     NtAreMappedFilesTheSame @ 0x14072D550 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140789CE0 (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x140886A90 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140886E8C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140892178 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140892308 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x140894398 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
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
