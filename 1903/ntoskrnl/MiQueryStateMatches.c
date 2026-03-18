/*
 * XREFs of MiQueryStateMatches @ 0x1400B7C2C
 * Callers:
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiQueryStateMatches(__int64 a1, int a2, int a3, int a4)
{
  int v5; // eax

  if ( a2 != *(_DWORD *)(a1 + 32) )
    return 0LL;
  v5 = 0;
  if ( a3 )
    v5 = a4 | MmProtectToValue[a3];
  return v5 == *(_DWORD *)(a1 + 36);
}
