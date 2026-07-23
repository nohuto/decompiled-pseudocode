/*
 * XREFs of CmpGetCachedFullKCBName @ 0x14011AB38
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetCachedFullKCBName(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  char v3; // cl

  result = *(_QWORD *)(a1 + 288);
  v3 = result & 1;
  if ( (result & 1) != 0 )
    result &= ~1uLL;
  if ( a2 )
    *a2 = v3;
  return result;
}
