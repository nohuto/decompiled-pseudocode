/*
 * XREFs of RtlSetBitsEx @ 0x140073620
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x140082540 (RtlFindClearBitsAndSetEx.c)
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     MiObtainDynamicVa @ 0x1400E64B4 (MiObtainDynamicVa.c)
 *     RtlpHpFixedHeapCreate @ 0x140137770 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x140169F10 (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x140296110 (IopAddPageRangeToPageMaps.c)
 *     MiAddPartitionHugeRange @ 0x1402C180C (MiAddPartitionHugeRange.c)
 *     MiAddRangeToPartitionTree @ 0x1402E9530 (MiAddRangeToPartitionTree.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405A90A0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405A9234 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiCopyToCfgBitMap @ 0x1405ED100 (MiCopyToCfgBitMap.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406482E0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiObtainRelocationBits @ 0x14064932C (MiObtainRelocationBits.c)
 *     MiMarkRetpolineBits @ 0x140711694 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x14072B34C (MiActOnMirrorBitmap.c)
 *     MiSetVadBits @ 0x140891FAC (MiSetVadBits.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // rbx
  char v7; // al

  if ( a3 )
  {
    v3 = a3;
    v5 = a2 & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    if ( v5 + a3 <= 8 )
    {
      v7 = byte_140382448[a3] << v5;
LABEL_4:
      *v6 |= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ |= byte_140381050[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      memset(v6, 255, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_140382448[v3];
      goto LABEL_4;
    }
  }
}
