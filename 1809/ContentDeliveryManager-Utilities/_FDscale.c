/*
 * XREFs of _FDscale @ 0x1800B1C50
 * Callers:
 *     _Stofx @ 0x1800AA6B4 (_Stofx.c)
 *     _FXp_addh @ 0x1800B1E30 (_FXp_addh.c)
 *     _FXp_mulh @ 0x1800B22A4 (_FXp_mulh.c)
 *     _FXp_setw @ 0x1800B261C (_FXp_setw.c)
 * Callees:
 *     _FDnorm @ 0x1800C591C (_FDnorm.c)
 */

__int64 __fastcall FDscale(unsigned __int16 *a1, int a2)
{
  __int16 v4; // cx
  __int64 result; // rax
  float Float; // xmm0_4
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // r10
  int v10; // r11d
  unsigned __int16 v11; // si
  __int16 v12; // r11
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r10

  v4 = (unsigned __int8)(a1[1] >> 7);
  if ( v4 == 255 )
  {
    if ( (a1[1] & 0x7F) != 0 )
      return 2LL;
    result = 1LL;
    if ( *a1 )
      return 2LL;
    return result;
  }
  if ( !v4 )
  {
    v4 = FDnorm(a1);
    if ( v4 > 0 )
      return 0LL;
  }
  if ( a2 <= 0 || 255 - v4 > a2 )
  {
    v7 = a1[1];
    if ( -v4 < a2 )
    {
      a1[1] = v7 & 0x807F | ((v4 + (_WORD)a2) << 7);
      return 0xFFFFFFFFLL;
    }
    v8 = v7 & 0x8000;
    v9 = a1[1] & 0x7F | 0x80;
    a1[1] = v9;
    v10 = v4 + a2 - 1;
    if ( v4 + a2 <= -24 || v10 >= 0 )
    {
      a1[1] = v8;
      *a1 = 0;
    }
    else
    {
      v11 = 0;
      if ( (__int16)v10 <= -16 )
      {
        v11 = *a1;
        LOWORD(v10) = v10 + 16;
        *a1 = v9;
        v9 = 0;
        a1[1] = 0;
      }
      v12 = -(__int16)v10;
      if ( v12 )
      {
        v11 = (v11 != 0) | (unsigned __int16)(*a1 << (16 - v12));
        v13 = (*a1 >> v12) | (v9 << (16 - v12));
        v9 >>= v12;
        a1[1] = v9;
        *a1 = v13;
      }
      v14 = v8 | v9;
      a1[1] = v14;
      if ( (v11 > 0x8000u || v11 == 0x8000 && (*(_BYTE *)a1 & 1) != 0) && (*a1)++ == 0xFFFF )
      {
        a1[1] = v14 + 1;
        return 0xFFFFFFFFLL;
      }
      if ( v14 != v8 || *a1 )
        return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  Float = FInf._Float;
  if ( (a1[1] & 0x8000u) != 0 )
    LODWORD(Float) = LODWORD(FInf._Float) ^ _xmm;
  *(float *)a1 = Float;
  return 1LL;
}
