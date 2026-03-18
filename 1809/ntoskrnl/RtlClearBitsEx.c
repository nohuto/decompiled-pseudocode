/*
 * XREFs of RtlClearBitsEx @ 0x140027F20
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiMakeSystemRangeAvailable @ 0x1400280B0 (MiMakeSystemRangeAvailable.c)
 *     RtlFindSetBitsAndClearEx @ 0x1401356F0 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x140138064 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsFree @ 0x140141BC0 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140152FDC (MiMirrorOmitPagesFromCopy.c)
 *     MiReturnNonPagedPoolPde @ 0x140161680 (MiReturnNonPagedPoolPde.c)
 *     MiFreePagedPoolPages @ 0x140161A30 (MiFreePagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x1401626C8 (MiExpandNonPagedPool.c)
 *     MiScanLeafNonPagedPool @ 0x1401637D0 (MiScanLeafNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1401641CC (MiExpandPagedPool.c)
 *     ExpSaPageGroupFreeMemory @ 0x140167294 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x14018FA70 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x140280C7C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140281960 (IopRemovePageFromPageMap.c)
 *     MiActOnPartitionNodePages @ 0x1402D0018 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D0708 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402D0CE8 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x1402EF500 (RtlShiftLeftBitMapEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x1405DF71C (MiFreeToSubAllocatedRegion.c)
 *     MiActOnMirrorBitmap @ 0x1406DFB2C (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14081FFC4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiDeleteAweInfoPages @ 0x14084FD58 (MiDeleteAweInfoPages.c)
 *     MiMarkRetpolineBits @ 0x140853D70 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x1409B6BDC (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
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
      v7 = ~(byte_140362048[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_140362048[v4];
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
      v7 = byte_140360C28[v6];
      goto LABEL_4;
    }
  }
}
