/*
 * XREFs of sub_18011C1F8 @ 0x18011C1F8
 * Callers:
 *     unknown_libname_8 @ 0x18011C270 (unknown_libname_8.c)
 *     unknown_libname_9 @ 0x18011C2A0 (unknown_libname_9.c)
 * Callees:
 *     _o___std_exception_copy @ 0x180125AC3 (_o___std_exception_copy.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18011C1F8(_QWORD *a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+28h] [rbp-20h]

  *a1 = &std::exception::`vftable';
  v4 = a2;
  v5 = 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  o___std_exception_copy(&v4);
  *a1 = &std::logic_error::`vftable';
  return a1;
}
