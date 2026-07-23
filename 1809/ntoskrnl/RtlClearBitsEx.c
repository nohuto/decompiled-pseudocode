/*
 * XREFs of RtlClearBitsEx @ 0x140027F20
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiMakeSystemRangeAvailable @ 0x1400280B0 (MiMakeSystemRangeAvailable.c)
 *     RtlFindSetBitsAndClearEx @ 0x1401357E0 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x140138184 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsFree @ 0x140141CE0 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1401530FC (MiMirrorOmitPagesFromCopy.c)
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 *     MiFreePagedPoolPages @ 0x140161B50 (MiFreePagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 *     MiScanLeafNonPagedPool @ 0x1401638F0 (MiScanLeafNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1401642EC (MiExpandPagedPool.c)
 *     ExpSaPageGroupFreeMemory @ 0x1401673B4 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x14018FBD0 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x140280F6C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140281C50 (IopRemovePageFromPageMap.c)
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D09F8 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402D0FD8 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x1402EF7F0 (RtlShiftLeftBitMapEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x1405E071C (MiFreeToSubAllocatedRegion.c)
 *     MiActOnMirrorBitmap @ 0x1406E0DAC (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408211A4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiDeleteAweInfoPages @ 0x140850F98 (MiDeleteAweInfoPages.c)
 *     MiMarkRetpolineBits @ 0x140854FB0 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
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
      v7 = ~(byte_1403630E8[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_1403630E8[v4];
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
      v7 = byte_140361CC8[v6];
      goto LABEL_4;
    }
  }
}
