/*
 * XREFs of sub_180064A60 @ 0x180064A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006490C @ 0x18006490C (sub_18006490C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180064A60(__int64 a1, char a2)
{
  sub_18006490C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
