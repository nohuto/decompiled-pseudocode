/*
 * XREFs of sub_18011C1B8 @ 0x18011C1B8
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x180125AC3 (_o___std_exception_copy.c)
 */

_QWORD *__fastcall sub_18011C1B8(_QWORD *a1, __int64 a2)
{
  *a1 = &std::exception::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  o___std_exception_copy(a2 + 8);
  *a1 = &std::logic_error::`vftable';
  return a1;
}
