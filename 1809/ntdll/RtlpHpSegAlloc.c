/*
 * XREFs of RtlpHpSegAlloc @ 0x18001DB14
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x18001491C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegSubAllocate @ 0x18001DA74 (RtlpHpSegSubAllocate.c)
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180015130 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeShrink @ 0x18001D914 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18001DC90 (RtlpHpSegPageRangeAllocate.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18010DE0C (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

void *__fastcall RtlpHpSegAlloc(__int64 a1, size_t a2, __int64 a3, __int64 a4, unsigned int a5)
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
  int v19; // eax
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
  if ( (_DWORD)v6 && (int)RtlpHpSegPageRangeCommit((__int64 *)a1, v12, 0, v6, a5, 0LL) < 0 )
  {
    v17 = 0LL;
    goto LABEL_17;
  }
  if ( v8 )
    RtlpHpSegPageRangeCommit((__int64 *)a1, v13, v11 - 1, v11 - (v14 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
  *(_DWORD *)(v13 + 4) = (v14 << *(_BYTE *)(a1 + 8)) - a2;
  v15 = v13 & *(_QWORD *)a1;
  v16 = v13 - v15;
  v13 = 0LL;
  v17 = (void *)(v15 + (v16 >> 5 << *(_BYTE *)(a1 + 8)));
  if ( (a5 & 2) != 0 )
  {
    if ( v20
      || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
      || (*(_BYTE *)(a1 + 13) & 7) != 0
      && (v19 = RtlpHpSegPageRangeComputeLargePageCost(a1, v17, (unsigned int)a2), v19 <= 2) )
    {
      memset(v17, 0, a2);
LABEL_17:
      if ( v13 )
        RtlpHpSegPageRangeShrink(a1, v13, 0, a5);
    }
  }
  return v17;
}
