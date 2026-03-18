/*
 * XREFs of QDiv2 @ 0x1C02BBE28
 * Callers:
 *     CurveTransitionsSegment @ 0x1C02BB214 (CurveTransitionsSegment.c)
 *     FQuadraticEqn @ 0x1C02BB618 (FQuadraticEqn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QDiv2(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11

  v2 = -a1;
  v3 = -a2;
  v4 = a2;
  if ( a1 < 0 == a2 < 0 )
  {
    if ( a1 >= 0 )
    {
      v2 = a1;
      v3 = a2;
    }
    if ( v2 >= v3 )
    {
      if ( v2 <= v3 << 16 )
        return (v2 + (v3 >> 1)) / v3;
      else
        return 65537LL;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    if ( a1 >= 0 )
    {
      v2 = a1;
      v4 = -a2;
    }
    if ( v2 >= v4 )
    {
      if ( v2 <= v4 << 16 )
        return -((v2 + (v4 >> 1)) / v4);
      else
        return -65537LL;
    }
    else
    {
      return -1LL;
    }
  }
}
