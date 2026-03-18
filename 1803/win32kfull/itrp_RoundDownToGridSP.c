/*
 * XREFs of itrp_RoundDownToGridSP @ 0x1C02CDB98
 * Callers:
 *     InvokeRoundValue @ 0x1C02C5448 (InvokeRoundValue.c)
 * Callees:
 *     itrp_RoundDownToGrid @ 0x1C02CDB6C (itrp_RoundDownToGrid.c)
 */

__int64 __fastcall itrp_RoundDownToGridSP(int a1, int a2)
{
  __int64 result; // rax
  int v3; // eax

  if ( (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0 && dword_1C03271B4 == 1 )
    return itrp_RoundDownToGrid(a1, a2);
  v3 = a2 / 2;
  if ( a1 < 0 )
    result = -((v3 - a1) & 0xFFFFFFFC);
  else
    result = (a1 + v3) & 0xFFFFFFFC;
  if ( (int)(a1 ^ result) < 0 )
  {
    if ( a1 )
      return 0LL;
  }
  return result;
}
