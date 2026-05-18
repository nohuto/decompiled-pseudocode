/*
 * XREFs of sub_1801270F0 @ 0x1801270F0
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x180125AC3 (_o___std_exception_copy.c)
 */

_QWORD *__fastcall sub_1801270F0(_QWORD *a1, __int64 a2)
{
  *a1 = &std::exception::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  o___std_exception_copy(a2 + 8);
  *a1 = &std::bad_array_new_length::`vftable';
  return a1;
}
