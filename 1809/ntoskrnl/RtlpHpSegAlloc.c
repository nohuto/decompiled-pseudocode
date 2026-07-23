/*
 * XREFs of RtlpHpSegAlloc @ 0x14000B118
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14000981C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x1400099CC (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegSubAllocate @ 0x14000B078 (RtlpHpSegSubAllocate.c)
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1400E7498 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402FCB24 (RtlpHpAllocateHeapBackend.c)
 *     ExAllocateHeapSpecialPool @ 0x14031EBAC (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x14000ACF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14000B270 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14000BCFC (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlpHpSegPageRangeCommit @ 0x14000C594 (RtlpHpSegPageRangeCommit.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall RtlpHpSegAlloc(__int64 a1, size_t Size, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r8
  int v8; // r12d
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rbx
  void *v17; // rbx
  int v19; // r8d
  int v20; // [rsp+80h] [rbp+28h]

  v6 = (unsigned __int64)(a4 + 4095) >> 12;
  v7 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = a5 & 4;
  v11 = v7 + 1;
  if ( (a5 & 4) == 0 )
    v11 = v7;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v12 = RtlpHpSegPageRangeAllocate(a1, v11, a5);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v14 = *(unsigned __int8 *)(v12 + 31);
  v20 = (unsigned __int16)~*(_WORD *)(v12 + 28);
  if ( (_DWORD)v6 && (int)RtlpHpSegPageRangeCommit(a1, a5, 0LL) < 0 )
  {
    v17 = 0LL;
    goto LABEL_19;
  }
  if ( v8 )
    RtlpHpSegPageRangeCommit(a1, 0, 0LL);
  *(_DWORD *)(v13 + 4) = (v14 << *(_BYTE *)(a1 + 8)) - Size;
  v15 = v13 & *(_QWORD *)a1;
  v16 = v13 - v15;
  v13 = 0LL;
  v17 = (void *)(v15 + (v16 >> 5 << *(_BYTE *)(a1 + 8)));
  if ( (a5 & 2) != 0
    && (v20
     || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
     || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v17, (unsigned int)Size) <= 2) )
  {
    memset(v17, 0, Size);
LABEL_19:
    if ( v13 )
      RtlpHpSegPageRangeShrink(a1, v13, v19, a5);
  }
  return v17;
}
