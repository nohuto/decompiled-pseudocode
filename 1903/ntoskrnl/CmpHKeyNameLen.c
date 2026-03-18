/*
 * XREFs of CmpHKeyNameLen @ 0x140091F94
 * Callers:
 *     CmpCheckKey @ 0x140651270 (CmpCheckKey.c)
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
