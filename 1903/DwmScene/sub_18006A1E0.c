/*
 * XREFs of sub_18006A1E0 @ 0x18006A1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A11C @ 0x18006A11C (sub_18006A11C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18006A1E0(_QWORD *a1, char a2)
{
  sub_18006A11C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
