/*
 * XREFs of itrp_SuperRound @ 0x1C02D0528
 * Callers:
 *     InvokeRoundValue @ 0x1C02C5448 (InvokeRoundValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SuperRound(int a1, int a2)
{
  int v3; // r10d
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // r8d

  v3 = *(__int16 *)(qword_1C0327180 + 144);
  v4 = *(_DWORD *)(qword_1C0327180 + 136);
  v5 = *(__int16 *)(qword_1C0327180 + 146) - v3;
  if ( a1 < 0 )
    v6 = -(v3 + (v4 & (a2 + v5 - a1)));
  else
    v6 = v3 + (v4 & (a2 + a1 + v5));
  if ( ((a1 ^ v6) & 0x80000000) != 0 )
  {
    if ( a1 )
    {
      v6 = *(__int16 *)(qword_1C0327180 + 144);
      if ( a1 <= 0 )
        return (unsigned int)-v3;
    }
  }
  return v6;
}
