/*
 * XREFs of CmpDoesParseEnterRegistryA @ 0x1406EA858
 * Callers:
 *     CmpParseKey @ 0x1405F9560 (CmpParseKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpDoesParseEnterRegistryA(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // cx
  _WORD *v3; // rdx
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *((_QWORD *)CmpRegistryRootObject + 1) )
  {
    v2 = *a2;
    if ( *a2 )
    {
      v3 = (_WORD *)*((_QWORD *)a2 + 1);
      if ( ((*v3 - 65) & 0xFFDF) == 0 && (v2 <= 2u || v3[1] == 92) )
        return 1;
    }
  }
  return result;
}
