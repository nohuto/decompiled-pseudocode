/*
 * XREFs of sub_1800DB740 @ 0x1800DB740
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DB318 @ 0x1800DB318 (sub_1800DB318.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 *__fastcall sub_1800DB740(__int64 *a1, char a2)
{
  sub_1800DB318(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
