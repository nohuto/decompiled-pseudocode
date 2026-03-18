/*
 * XREFs of RtlClearBitsEx @ 0x1400ACE50
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1400AB9CC (MiMakeSystemRangeAvailable.c)
 *     MiClearVadCellBits @ 0x1400AC7F0 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     RtlFindSetBitsAndClearEx @ 0x1401383C0 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x14013B020 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsFree @ 0x14015C870 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140160A28 (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x14016E774 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x140199A70 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1402963B0 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140297130 (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x1402C2030 (MiHotRemoveHugeRange.c)
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402E97D0 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402E9DB0 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x14030E1C0 (RtlShiftLeftBitMapEx.c)
 *     MiCopyToCfgBitMap @ 0x1405EC930 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x140607A44 (MiReturnImageBase.c)
 *     MiObtainRelocationBits @ 0x14066F9C8 (MiObtainRelocationBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x140670744 (MiFreeToSubAllocatedRegion.c)
 *     MiMarkRetpolineBits @ 0x14070F8B4 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x140727914 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14085A014 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x1409EE68C (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    v6 = a3;
    if ( v4 + a3 <= 8 )
    {
      v7 = ~(byte_1403821E8[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_1403821E8[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 0, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_140380E20[v6];
      goto LABEL_4;
    }
  }
}
