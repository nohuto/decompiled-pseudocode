/*
 * XREFs of _FDnorm @ 0x1800C591C
 * Callers:
 *     _FDscale @ 0x1800B1C50 (_FDscale.c)
 *     _FDunscale @ 0x1800C5B6C (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  __int16 v1; // r10
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // cx

  v1 = a1[1] & 0x8000;
  v3 = 1;
  v4 = a1[1] & 0x7F;
  a1[1] = v4;
  if ( v4 || *a1 )
  {
    v5 = v4;
    if ( !v4 )
    {
      v5 = *a1;
      v3 = -15;
      a1[1] = *a1;
      v4 = v5;
      *a1 = 0;
    }
    v6 = v4;
    v7 = v5;
    if ( v5 < 0x80u )
    {
      do
      {
        v7 = (*a1 >> 15) | (2 * v6);
        *a1 *= 2;
        --v3;
        v6 = v7;
      }
      while ( v7 < 0x80u );
      a1[1] = v7;
    }
    if ( v7 >= 0x100u )
    {
      v7 = v6;
      do
      {
        ++v3;
        v8 = (*a1 >> 1) | (v7 << 15);
        v7 >>= 1;
        *a1 = v8;
      }
      while ( v7 >= 0x100u );
      a1[1] = v7;
    }
    v4 = v7 & 0x7F;
    a1[1] = v4;
  }
  a1[1] = v1 | v4;
  return v3;
}
