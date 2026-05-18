/*
 * XREFs of sub_18000AA50 @ 0x18000AA50
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_destroy @ 0x180125AC9 (_o___std_exception_destroy.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18000AA50(_QWORD *a1, char a2)
{
  *a1 = &std::exception::`vftable';
  o___std_exception_destroy(a1 + 1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
