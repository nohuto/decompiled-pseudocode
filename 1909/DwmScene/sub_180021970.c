/*
 * XREFs of sub_180021970 @ 0x180021970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020700 @ 0x180020700 (sub_180020700.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180021970(__int64 a1, char a2)
{
  sub_180020700(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
