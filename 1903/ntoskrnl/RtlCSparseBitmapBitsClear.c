/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x14010EA30
 * Callers:
 *     RtlpHpVaMgrRangeCleanup @ 0x14010E970 (RtlpHpVaMgrRangeCleanup.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14010F0D8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpVaMgrRangeCreate @ 0x14010F8B8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpSegSegmentFree @ 0x1401669D0 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x14010ECFC (RtlpCSparseBitmapPageDecommit.c)
 */

void __fastcall RtlCSparseBitmapBitsClear(__int64 a1, signed __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  volatile signed __int32 *v10; // r8
  __int64 v11; // r11
  unsigned __int64 v12; // r9
  _QWORD *v13; // r8
  _QWORD *v14; // r10
  unsigned __int64 v15; // rdx
  BOOL v16; // eax
  unsigned int v17; // eax
  __int64 v18; // [rsp+50h] [rbp-58h]
  unsigned __int64 v19; // [rsp+C8h] [rbp+20h]

  while ( a3 > 0 )
  {
    v6 = a2 % 0x8000;
    v7 = a3;
    v19 = a3;
    if ( a2 % 0x8000 + a3 > 0x8000 )
    {
      v7 = 0x8000 - v6;
      v19 = 0x8000 - v6;
    }
    v18 = v7;
    if ( _bittest64((const signed __int64 *)(a1 + 56), (unsigned __int64)a2 >> 30) )
    {
      if ( !_bittest64(*(const signed __int64 **)a1, (unsigned __int64)a2 >> 15) )
        goto LABEL_31;
      v8 = *(_QWORD *)(a1 + 8) + ((a2 / 0x8000) << 12);
      v9 = v7;
      v10 = (volatile signed __int32 *)(v8 + 4 * (v6 >> 5));
      v11 = (a2 % 0x8000) & 0x1F;
      if ( (unsigned __int64)(v11 + v7) <= 0x20 )
      {
        if ( v7 == 32 )
        {
          *v10 = 0;
          goto LABEL_12;
        }
        v17 = ~(((1 << v7) - 1) << v11);
      }
      else
      {
        if ( (v6 & 0x1F) != 0 )
        {
          _InterlockedAnd(v10, ~(((1 << (32 - (v6 & 0x1F))) - 1) << v11));
          v7 = v19;
          v9 = v19 - (32 - (unsigned int)(v6 & 0x1F));
          v6 = a2 % 0x8000;
          ++v10;
        }
        while ( v9 >= 0x20 )
        {
          *v10++ = 0;
          v9 -= 32LL;
        }
        if ( !v9 )
        {
LABEL_12:
          if ( v7 >= 512 )
          {
            v16 = 1;
          }
          else
          {
            v12 = v6 & 0xFFFFFFFFFFFFFE00uLL;
            if ( v12 + 511 >= 0x8000 )
              goto LABEL_22;
            v13 = (_QWORD *)(v8 + 8 * (v12 >> 6));
            v14 = (_QWORD *)(v8 + 8 * ((v12 + 511) >> 6));
            v15 = -1LL << v12;
            if ( v13 == v14 )
              goto LABEL_21;
            if ( (v15 & *v13) != 0 )
            {
LABEL_22:
              v16 = 0;
            }
            else
            {
              for ( ++v13; v13 != v14; ++v13 )
              {
                if ( *v13 )
                  goto LABEL_22;
              }
              v15 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v12 - 1);
LABEL_21:
              v16 = (v15 & *v13) == 0;
            }
          }
          if ( v16 )
            RtlpCSparseBitmapPageDecommit(a1, a2 / 0x8000, v18 == 0x8000);
          goto LABEL_31;
        }
        v17 = -1 << v9;
      }
      _InterlockedAnd(v10, v17);
      v6 = a2 % 0x8000;
      v7 = v19;
      goto LABEL_12;
    }
    v7 = a3;
    if ( a2 % 0x40000000 + a3 > 0x40000000 )
      v7 = 0x40000000 - a2 % 0x40000000;
LABEL_31:
    a2 += v7;
    a3 -= v7;
  }
}
