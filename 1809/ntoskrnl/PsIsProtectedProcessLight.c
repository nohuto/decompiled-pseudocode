/*
 * XREFs of PsIsProtectedProcessLight @ 0x140127110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1738) & 7) == 1;
}
