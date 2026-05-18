/*
 * XREFs of sub_18003DDF0 @ 0x18003DDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDC50 @ 0x1800CDC50 (sub_1800CDC50.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18003DDF0(__int64 a1, char a2)
{
  sub_1800CDC50(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
