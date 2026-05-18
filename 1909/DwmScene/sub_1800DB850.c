/*
 * XREFs of sub_1800DB850 @ 0x1800DB850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DB428 @ 0x1800DB428 (sub_1800DB428.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 *__fastcall sub_1800DB850(__int64 *a1, char a2)
{
  sub_1800DB428(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
