/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x14005EE10
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1400601E0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x14010B040 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextReserve @ 0x1401599E0 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1401767B4 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14011CC28 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, int a3)
{
  char v5; // al
  __int64 v6; // rdx
  BOOLEAN v7; // cl
  __int64 v8; // rcx
  __int64 result; // rax

  if ( !a3 && (*(_BYTE *)(a1 + 13) & 0x10) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    result = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
      v5 = RtlpHpSegPageRangeComputeLargePageCost(
             a1,
             (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
             *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8));
    else
      v5 = 4;
    *(_BYTE *)(a2 + 30) = v5;
    v6 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( v6 )
        v6 ^= a1 + 96;
    }
    v7 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) < *(_DWORD *)(v6 + 28) )
        {
          v8 = *(_QWORD *)v6;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_19;
            v8 ^= v6;
          }
          if ( !v8 )
          {
LABEL_19:
            v7 = 0;
            break;
          }
        }
        else
        {
          v8 = *(_QWORD *)(v6 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_20;
            v8 ^= v6;
          }
          if ( !v8 )
          {
LABEL_20:
            v7 = 1;
            break;
          }
        }
        v6 = v8;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v6, v7, (PRTL_BALANCED_NODE)a2);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(a2 + 28));
    return 0LL;
  }
  return result;
}
