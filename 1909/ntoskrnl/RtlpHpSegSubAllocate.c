/*
 * XREFs of RtlpHpSegSubAllocate @ 0x140127EEC
 * Callers:
 *     RtlpHpSegLfhAllocate @ 0x140127E90 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpSegVsAllocate @ 0x140127EC0 (RtlpHpSegVsAllocate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14005FDE0 (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14011D148 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

_WORD *__fastcall RtlpHpSegSubAllocate(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v6; // eax
  _WORD *v9; // rax
  _WORD *v10; // rsi

  v6 = a3 | 4;
  if ( a2 < 0x10000 )
    v6 = a3;
  v9 = RtlpHpSegAlloc(a1, a2, a2, 0LL, v6);
  *a4 = 0;
  v10 = v9;
  *a5 = 0;
  if ( v9
    && ((RtlpHpLfhPerfFlags & 0x80u) != 0 && BYTE1(*(_OWORD *)(a1 + 40)) >= 2u
     || (RtlpHpLfhPerfFlags & 0x100) != 0
     && (*(_BYTE *)(a1 + 13) & 7) != 0
     && (int)RtlpHpSegPageRangeComputeLargePageCost((_QWORD *)a1, (__int64)v9, a2) <= 1) )
  {
    *a4 |= 1u;
  }
  return v10;
}
