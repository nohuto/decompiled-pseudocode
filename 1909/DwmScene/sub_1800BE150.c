/*
 * XREFs of sub_1800BE150 @ 0x1800BE150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD48C @ 0x1800BD48C (sub_1800BD48C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800BE150(__int64 a1, char a2)
{
  sub_1800BD48C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
