/*
 * XREFs of _FDnorm @ 0x1800C9844
 * Callers:
 *     _FDscale @ 0x1800B5BE4 (_FDscale.c)
 *     _FDunscale @ 0x1800C9A7C (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  __int16 v1; // r10
  unsigned __int16 v3; // r9
  __int16 v4; // dx
  unsigned __int16 v5; // cx
  __int16 v6; // ax
  unsigned __int16 i; // dx
  unsigned __int16 v8; // cx

  v1 = a1[1] & 0x8000;
  v3 = 1;
  v4 = a1[1] & 0x7F;
  if ( v4 || *a1 )
  {
    v5 = a1[1] & 0x7F;
    if ( !v4 )
    {
      v5 = *a1;
      v3 = -15;
      v4 = *a1;
      *a1 = 0;
    }
    v6 = v4;
    for ( i = v5; i < 0x80u; v6 = i )
    {
      i = (*a1 >> 15) | (2 * v6);
      *a1 *= 2;
      --v3;
    }
    if ( i >= 0x100u )
    {
      i = v6;
      do
      {
        ++v3;
        v8 = (*a1 >> 1) | (i << 15);
        i >>= 1;
        *a1 = v8;
      }
      while ( i >= 0x100u );
    }
    v4 = i & 0x7F;
  }
  a1[1] = v1 | v4;
  return v3;
}
