/*
 * XREFs of CmpHKeyNameLen @ 0x1400CF2B4
 * Callers:
 *     CmpCheckKey @ 0x140664430 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall CmpHKeyNameLen(__int64 a1)
{
  __int16 result; // ax

  result = *(_WORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
    result *= 2;
  return result;
}
