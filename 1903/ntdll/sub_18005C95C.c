/*
 * XREFs of sub_18005C95C @ 0x18005C95C
 * Callers:
 *     sub_18005C3BC @ 0x18005C3BC (sub_18005C3BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005C95C(__int64 a1)
{
  if ( a1 && *(_WORD *)(a1 + 2) >= *(_WORD *)a1 && (!*(_WORD *)a1 || *(_QWORD *)(a1 + 8)) )
    return 0LL;
  else
    return 3221225485LL;
}
