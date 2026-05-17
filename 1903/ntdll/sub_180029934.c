/*
 * XREFs of sub_180029934 @ 0x180029934
 * Callers:
 *     sub_180029888 @ 0x180029888 (sub_180029888.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180029934(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // dx

  result = 0LL;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return 3221225485LL;
  v2 = *(_WORD *)(a1 + 2);
  if ( (v2 & 1) != 0 || *(_WORD *)a1 > v2 || v2 == 0xFFFF || !*(_QWORD *)(a1 + 8) && (*(_WORD *)a1 || v2) )
    return 3221225485LL;
  return result;
}
