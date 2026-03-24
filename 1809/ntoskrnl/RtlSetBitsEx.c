/*
 * XREFs of RtlSetBitsEx @ 0x14008AF20
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     RtlFindClearBitsAndSetEx @ 0x14008AB50 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x1400F698C (MiObtainDynamicVa.c)
 *     MiMirrorAddPagesToBrownList @ 0x1401527BC (MiMirrorAddPagesToBrownList.c)
 *     MiFreePagedPoolPages @ 0x140161A50 (MiFreePagedPoolPages.c)
 *     MiCheckPoolForContiguousPages @ 0x140164414 (MiCheckPoolForContiguousPages.c)
 *     RtlpHpFixedHeapCreate @ 0x14016B078 (RtlpHpFixedHeapCreate.c)
 *     IopAddPageRangeToPageMaps @ 0x140280D7C (IopAddPageRangeToPageMaps.c)
 *     MiAddRangeToPartitionTree @ 0x1402D0808 (MiAddRangeToPartitionTree.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140579230 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405793C4 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiActOnMirrorBitmap @ 0x1406DFB0C (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140853D50 (MiMarkRetpolineBits.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
      v7 = byte_140362158[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_140360D38[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 255, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_140362158[v6];
      goto LABEL_4;
    }
  }
}
