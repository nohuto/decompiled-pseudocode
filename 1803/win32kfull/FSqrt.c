/*
 * XREFs of FSqrt @ 0x1C02BB6E8
 * Callers:
 *     FQuadraticEqn @ 0x1C02BB618 (FQuadraticEqn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FSqrt(unsigned __int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 i; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rcx

  v2 = 0LL;
  for ( i = 0x4000000000000000LL; i >= 0x8000; i >>= 1 )
  {
    v4 = i + v2;
    if ( i + v2 <= a1 )
      v2 |= 2 * i;
    v5 = a1 - v4;
    if ( v4 > a1 )
      v5 = a1;
    a1 = 2 * v5;
  }
  return v2;
}
