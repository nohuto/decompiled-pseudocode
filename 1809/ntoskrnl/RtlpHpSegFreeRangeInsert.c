/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x14000B704
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x14000ACF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14000B270 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x140140FFC (RtlpHpSegContextReserve.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14018D268 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x1401B6530 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14000BCFC (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  BOOLEAN v9; // r8
  int v10; // r9d
  __int64 v11; // rcx

  v3 = 0LL;
  if ( !a3 && (*(_BYTE *)(a1 + 13) & 0x10) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
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
    v9 = 0;
    v10 = v7 & 1;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) < *(_DWORD *)(v8 + 28) )
        {
          v11 = *(_QWORD *)v8;
          if ( v10 )
          {
            if ( !v11 )
              goto LABEL_24;
            v11 ^= v8;
          }
          if ( !v11 )
          {
LABEL_24:
            v9 = 0;
            break;
          }
        }
        else
        {
          v11 = *(_QWORD *)(v8 + 8);
          if ( v10 )
          {
            if ( !v11 )
              goto LABEL_18;
            v11 ^= v8;
          }
          if ( !v11 )
          {
LABEL_18:
            v9 = 1;
            break;
          }
        }
        v8 = v11;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v8, v9, (PRTL_BALANCED_NODE)a2);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(a2 + 28));
  }
  return v3;
}
