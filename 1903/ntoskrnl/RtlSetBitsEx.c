/*
 * XREFs of RtlSetBitsEx @ 0x1400733B0
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x140082140 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x1400AAFA4 (MiObtainDynamicVa.c)
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x140136DF0 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x14016033C (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x1402963B0 (IopAddPageRangeToPageMaps.c)
 *     MiAddPartitionHugeRange @ 0x1402C1AAC (MiAddPartitionHugeRange.c)
 *     MiAddRangeToPartitionTree @ 0x1402E97D0 (MiAddRangeToPartitionTree.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405A90C0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405A9254 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiCopyToCfgBitMap @ 0x1405EC930 (MiCopyToCfgBitMap.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14066E880 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiObtainRelocationBits @ 0x14066F9C8 (MiObtainRelocationBits.c)
 *     MiMarkRetpolineBits @ 0x14070F8B4 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x140727914 (MiActOnMirrorBitmap.c)
 *     MiSetVadBits @ 0x14089278C (MiSetVadBits.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
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
      v7 = byte_1403821E8[a3] << v5;
LABEL_4:
      *v6 |= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ |= byte_140380E20[v5];
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
      v7 = byte_1403821E8[v3];
      goto LABEL_4;
    }
  }
}
