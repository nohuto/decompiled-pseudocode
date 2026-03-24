/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x14000B704
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x14000ACF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14000B270 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x140140EFC (RtlpHpSegContextReserve.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14018D128 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x1401B63C8 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14000BCFC (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // rcx

  v3 = 0LL;
  if ( !(_DWORD)a3
    && (*(_BYTE *)(a1 + 13) & 0x10) != 0
    && (a3 = 256 - (unsigned int)*(unsigned __int8 *)(a1 + 10), *(unsigned __int8 *)(a2 + 31) == (_DWORD)a3) )
  {
    v3 = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
      v6 = RtlpHpSegPageRangeComputeLargePageCost(
             a1,
             (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
             *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8));
    else
      v6 = 4;
    *(_BYTE *)(a2 + 30) = v6;
    v7 = *(_QWORD *)(a1 + 104);
    v8 = *(_QWORD *)(a1 + 96);
    if ( (v7 & 1) != 0 )
    {
      if ( v8 )
        v8 ^= a1 + 96;
      else
        v8 = 0LL;
    }
    LOBYTE(a3) = 0;
    v9 = v7 & 1;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) < *(_DWORD *)(v8 + 28) )
        {
          v10 = *(_QWORD *)v8;
          if ( v9 )
          {
            if ( !v10 )
              goto LABEL_24;
            v10 ^= v8;
          }
          if ( !v10 )
          {
LABEL_24:
            LOBYTE(a3) = 0;
            break;
          }
        }
        else
        {
          v10 = *(_QWORD *)(v8 + 8);
          if ( v9 )
          {
            if ( !v10 )
              goto LABEL_18;
            v10 ^= v8;
          }
          if ( !v10 )
          {
LABEL_18:
            LOBYTE(a3) = 1;
            break;
          }
        }
        v8 = v10;
      }
    }
    RtlRbInsertNodeEx(a1 + 96, v8, a3, a2);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(a2 + 28));
  }
  return v3;
}
