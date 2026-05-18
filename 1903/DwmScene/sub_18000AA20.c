/*
 * XREFs of sub_18000AA20 @ 0x18000AA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A914 @ 0x18000A914 (sub_18000A914.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_18000AA20(__int64 a1, char a2)
{
  sub_18000A914(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
