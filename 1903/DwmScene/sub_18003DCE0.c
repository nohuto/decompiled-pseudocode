/*
 * XREFs of sub_18003DCE0 @ 0x18003DCE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDB40 @ 0x1800CDB40 (sub_1800CDB40.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_18003DCE0(__int64 a1, char a2)
{
  sub_1800CDB40(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
