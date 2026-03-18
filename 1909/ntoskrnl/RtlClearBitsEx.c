/*
 * XREFs of RtlClearBitsEx @ 0x1400E8360
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     MiMakeSystemRangeAvailable @ 0x1400E6EDC (MiMakeSystemRangeAvailable.c)
 *     MiClearVadCellBits @ 0x1400E7D00 (MiClearVadCellBits.c)
 *     RtlFindSetBitsAndClearEx @ 0x140138A10 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x14013B640 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsFree @ 0x14015CF10 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14016A5FC (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x14016EE64 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x14019A0D0 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x140296110 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140296E90 (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x1402C1D90 (MiHotRemoveHugeRange.c)
 *     MiActOnPartitionNodePages @ 0x1402E8CAC (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402E9530 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402E9B10 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x14030DC10 (RtlShiftLeftBitMapEx.c)
 *     MiCopyToCfgBitMap @ 0x1405ED100 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x140609554 (MiReturnImageBase.c)
 *     MiObtainRelocationBits @ 0x14064932C (MiObtainRelocationBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x14067F510 (MiFreeToSubAllocatedRegion.c)
 *     MiMarkRetpolineBits @ 0x140711694 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x14072B34C (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140859714 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x1409EE5A4 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
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
      v7 = ~(byte_140382448[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_140382448[v4];
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
      v7 = byte_140381050[v6];
      goto LABEL_4;
    }
  }
}
