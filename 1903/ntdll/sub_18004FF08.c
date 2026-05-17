/*
 * XREFs of sub_18004FF08 @ 0x18004FF08
 * Callers:
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 *     sub_18004E624 @ 0x18004E624 (sub_18004E624.c)
 *     sub_18004FDA8 @ 0x18004FDA8 (sub_18004FDA8.c)
 *     sub_18004FE48 @ 0x18004FE48 (sub_18004FE48.c)
 * Callees:
 *     sub_180050258 @ 0x180050258 (sub_180050258.c)
 */

void __fastcall sub_18004FF08(__int64 a1, signed __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  volatile signed __int32 *v10; // r8
  __int64 v11; // r11
  unsigned __int64 v12; // r9
  _QWORD *v13; // r8
  _QWORD *v14; // r11
  __int64 v15; // rax
  _QWORD *i; // r8
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // eax
  __int64 v20; // [rsp+50h] [rbp-58h]
  unsigned __int64 v21; // [rsp+C8h] [rbp+20h]

  while ( a3 > 0 )
  {
    v6 = a2 % 0x8000;
    v7 = a3;
    v21 = a3;
    if ( a2 % 0x8000 + a3 > 0x8000 )
    {
      v7 = 0x8000 - v6;
      v21 = 0x8000 - v6;
    }
    v20 = v7;
    if ( _bittest64((const signed __int64 *)(a1 + 56), (unsigned __int64)a2 >> 30) )
    {
      if ( !_bittest64(*(const signed __int64 **)a1, (unsigned __int64)a2 >> 15) )
        goto LABEL_32;
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
        v19 = ~(((1 << v7) - 1) << v11);
      }
      else
      {
        if ( (v6 & 0x1F) != 0 )
        {
          _InterlockedAnd(v10, ~(((1 << (32 - (v6 & 0x1F))) - 1) << v11));
          v7 = v21;
          v9 = v21 - (32 - (unsigned int)(v6 & 0x1F));
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
            v17 = 1;
          }
          else
          {
            v12 = v6 & 0xFFFFFFFFFFFFFE00uLL;
            if ( v12 + 511 >= 0x8000 )
              goto LABEL_20;
            v13 = (_QWORD *)(v8 + 8 * (v12 >> 6));
            v14 = (_QWORD *)(v8 + 8 * ((v12 + 511) >> 6));
            v15 = -1LL << v12;
            if ( v13 == v14 )
            {
              v18 = (v15 & *v13) == 0;
              goto LABEL_22;
            }
            if ( (v15 & *v13) != 0 )
            {
LABEL_20:
              v17 = 0;
            }
            else
            {
              for ( i = v13 + 1; i != v14; ++i )
              {
                if ( *i )
                  goto LABEL_20;
              }
              v18 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v12 - 1)) & *i) == 0;
LABEL_22:
              v17 = v18;
            }
          }
          if ( v17 )
            sub_180050258(a1, a2 / 0x8000, v20 == 0x8000);
          goto LABEL_32;
        }
        v19 = -1 << v9;
      }
      _InterlockedAnd(v10, v19);
      v6 = a2 % 0x8000;
      v7 = v21;
      goto LABEL_12;
    }
    v7 = a3;
    if ( a2 % 0x40000000 + a3 > 0x40000000 )
      v7 = 0x40000000 - a2 % 0x40000000;
LABEL_32:
    a2 += v7;
    a3 -= v7;
  }
}
