/*
 * XREFs of sub_18000E6E4 @ 0x18000E6E4
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x1801259B3 (_o___std_exception_copy.c)
 */

_QWORD *__fastcall sub_18000E6E4(_QWORD *a1, __int64 a2)
{
  *a1 = &std::exception::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  o___std_exception_copy(a2 + 8);
  *a1 = &std::bad_weak_ptr::`vftable';
  return a1;
}
