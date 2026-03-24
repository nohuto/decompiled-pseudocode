/*
 * XREFs of RtlClearBitsEx @ 0x140027F20
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiMakeSystemRangeAvailable @ 0x1400280B0 (MiMakeSystemRangeAvailable.c)
 *     RtlFindSetBitsAndClearEx @ 0x140135710 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x140138084 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsFree @ 0x140141BE0 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140152FFC (MiMirrorOmitPagesFromCopy.c)
 *     MiReturnNonPagedPoolPde @ 0x1401616A0 (MiReturnNonPagedPoolPde.c)
 *     MiFreePagedPoolPages @ 0x140161A50 (MiFreePagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x1401626E8 (MiExpandNonPagedPool.c)
 *     MiScanLeafNonPagedPool @ 0x1401637F0 (MiScanLeafNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1401641EC (MiExpandPagedPool.c)
 *     ExpSaPageGroupFreeMemory @ 0x1401672B4 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x14018FA90 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x140280D7C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140281A60 (IopRemovePageFromPageMap.c)
 *     MiActOnPartitionNodePages @ 0x1402D0118 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D0808 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402D0DE8 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x1402EF600 (RtlShiftLeftBitMapEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x1405DF71C (MiFreeToSubAllocatedRegion.c)
 *     MiActOnMirrorBitmap @ 0x1406DFB0C (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14081FFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiDeleteAweInfoPages @ 0x14084FD38 (MiDeleteAweInfoPages.c)
 *     MiMarkRetpolineBits @ 0x140853D50 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x1409B6BDC (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
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
      v7 = ~(byte_140362158[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_140362158[v4];
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
      v7 = byte_140360D38[v6];
      goto LABEL_4;
    }
  }
}
