/*
 * XREFs of sub_1800742F4 @ 0x1800742F4
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x1801259B3 (_o___std_exception_copy.c)
 */

_QWORD *__fastcall sub_1800742F4(_QWORD *a1, __int64 a2)
{
  *a1 = &std::exception::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  o___std_exception_copy(a2 + 8);
  *a1 = &std::bad_cast::`vftable';
  return a1;
}
