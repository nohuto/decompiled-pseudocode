/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x14000B5A4
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x14000B270 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14018D268 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x14000B6A0 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

__int64 __fastcall RtlpHpSegPageRangeSplit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  int v6; // ecx
  char v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int16 v10; // ax

  v3 = *(unsigned __int8 *)(a2 + 31);
  if ( v3 == a3 )
    return 0LL;
  v6 = v3 - a3;
  v7 = v6;
  v8 = 32LL * (unsigned int)(v6 - 1);
  v9 = a2 + 32LL * a3;
  *(_BYTE *)(v9 + 24) |= 2u;
  *(_BYTE *)(v8 + v9 + 31) = v7 - 1;
  *(_BYTE *)(v9 + 31) = v7;
  v10 = RtlpHpSegPageRangeCountCommittedPages(v8, v9);
  *(_DWORD *)v9 = -857879331;
  *(_WORD *)(v9 + 28) = ~v10;
  *(_BYTE *)(32LL * (a3 - 1) + a2 + 31) = a3 - 1;
  *(_BYTE *)(a2 + 31) = a3;
  *(_WORD *)(a2 + 28) = ~(*(_WORD *)(v9 + 28) - *(_WORD *)(a2 + 28));
  return v9;
}
