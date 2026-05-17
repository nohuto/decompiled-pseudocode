/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x180065C30
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x18005CC10 (RtlpHpVaMgrRangeCreate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18005D3FC (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x180065B70 (RtlpHpVaMgrRangeCleanup.c)
 *     RtlpHpSegSegmentFree @ 0x1800661D0 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x180065F00 (RtlpCSparseBitmapPageDecommit.c)
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
  __int64 *v13; // rdx
  __int64 *v14; // r10
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 *i; // rdx
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // eax

  while ( a3 > 0 )
  {
    v6 = a2 % 0x8000;
    v7 = 0x8000 - a2 % 0x8000;
    if ( a2 % 0x8000 + a3 <= 0x8000 )
      v7 = a3;
    if ( _bittest64((const signed __int64 *)a1, (unsigned __int64)a2 >> 30) )
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 8), (unsigned __int64)a2 >> 15) )
        goto LABEL_32;
      v8 = *(_QWORD *)(a1 + 16) + ((a2 / 0x8000) << 12);
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
        v21 = ~(((1 << v7) - 1) << v11);
      }
      else
      {
        if ( (v6 & 0x1F) != 0 )
        {
          _InterlockedAnd(v10, ~(((1 << (32 - (v6 & 0x1F))) - 1) << v11));
          v9 = v7 - (32 - (unsigned int)(v6 & 0x1F));
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
            v19 = 1;
          }
          else
          {
            v12 = v6 & 0xFFFFFFFFFFFFFE00uLL;
            if ( v12 + 511 >= 0x8000 )
              goto LABEL_20;
            v13 = (__int64 *)(v8 + 8 * (v12 >> 6));
            v14 = (__int64 *)(v8 + 8 * ((v12 + 511) >> 6));
            v15 = *v13;
            v16 = -1LL << v12;
            if ( v13 == v14 )
            {
              v20 = (v15 & v16) == 0;
              goto LABEL_22;
            }
            if ( (v15 & v16) != 0 )
            {
LABEL_20:
              v19 = 0;
            }
            else
            {
              for ( i = v13 + 1; ; ++i )
              {
                v18 = *i;
                if ( i == v14 )
                  break;
                if ( v18 )
                  goto LABEL_20;
              }
              v20 = (v18 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v12 - 1))) == 0;
LABEL_22:
              v19 = v20;
            }
          }
          if ( v19 )
            RtlpCSparseBitmapPageDecommit(a1, a2 / 0x8000, v7 == 0x8000);
          goto LABEL_32;
        }
        v21 = -1 << v9;
      }
      _InterlockedAnd(v10, v21);
      v6 = a2 % 0x8000;
      goto LABEL_12;
    }
    v7 = 0x40000000 - a2 % 0x40000000;
    if ( a2 % 0x40000000 + a3 <= 0x40000000 )
      v7 = a3;
LABEL_32:
    a2 += v7;
    a3 -= v7;
  }
}
