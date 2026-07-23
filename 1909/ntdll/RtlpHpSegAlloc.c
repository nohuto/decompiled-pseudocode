/*
 * XREFs of RtlpHpSegAlloc @ 0x180036D88
 * Callers:
 *     RtlpHpSegLfhAllocate @ 0x180036CE0 (RtlpHpSegLfhAllocate.c)
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x180046028 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x18004CFA0 (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegSubAllocate @ 0x180077998 (RtlpHpSegSubAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180036F20 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180047490 (RtlpHpSegPageRangeCommit.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18010B938 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

void *__fastcall RtlpHpSegAlloc(__int64 a1, size_t a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r8
  unsigned int v8; // ebx
  void *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r14d
  int v13; // r13d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v10 = RtlpHpSegPageRangeAllocate(a1, v8, a5);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = *(unsigned __int8 *)(v10 + 31);
  v13 = (unsigned __int16)~*(_WORD *)(v10 + 28);
  if ( (_DWORD)v5 )
  {
    v14 = a5 & 0xFFFFFFFD;
    if ( !v13 )
      v14 = a5;
    if ( (int)RtlpHpSegPageRangeCommit(a1, v14, 0LL) < 0 )
    {
      v9 = 0LL;
      goto LABEL_20;
    }
  }
  if ( (a5 & 4) != 0 )
    RtlpHpSegPageRangeCommit(a1, 0, 0LL);
  *(_DWORD *)(v11 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - a2;
  v15 = v11 & *(_QWORD *)a1;
  v16 = v11 - v15;
  v11 = 0LL;
  v9 = (void *)(v15 + (v16 >> 5 << *(_BYTE *)(a1 + 8)));
  if ( (a5 & 2) != 0
    && (v13
     || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
     || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v9, (unsigned int)a2) <= 2) )
  {
    memset(v9, 0, a2);
LABEL_20:
    if ( v11 )
      RtlpHpSegPageRangeShrink(a1, v11, 0, a5);
  }
  return v9;
}
