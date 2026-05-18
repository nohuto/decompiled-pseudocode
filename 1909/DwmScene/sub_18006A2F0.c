/*
 * XREFs of sub_18006A2F0 @ 0x18006A2F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A22C @ 0x18006A22C (sub_18006A22C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18006A2F0(_QWORD *a1, char a2)
{
  sub_18006A22C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
