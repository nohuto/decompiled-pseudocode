/*
 * XREFs of RtlpHpVaMgrFree @ 0x140009C60
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140008234 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x14000D358 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCoalesce @ 0x140009D00 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r10
  unsigned __int16 v3; // r11
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax

  v2 = RtlpHpVaMgrRangeCoalesce();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v4 = a1 + 8;
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 8);
    if ( (v5 & 1) != 0 && v6 )
      v6 ^= v4;
    LOBYTE(v5) = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( v3 < *(_WORD *)(v6 + 24) )
        {
          v7 = *(_QWORD *)v6;
          if ( (*(_QWORD *)(a1 + 16) & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_17;
            v7 ^= v6;
          }
          if ( !v7 )
          {
LABEL_17:
            LOBYTE(v5) = 0;
            break;
          }
        }
        else
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( (*(_QWORD *)(a1 + 16) & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_11;
            v7 ^= v6;
          }
          if ( !v7 )
          {
LABEL_11:
            LOBYTE(v5) = 1;
            break;
          }
        }
        v6 = v7;
      }
    }
    RtlRbInsertNodeEx(v4, v6, v5, v2);
    return 0LL;
  }
  return v2;
}
