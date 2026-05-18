/*
 * XREFs of sub_18011C0E8 @ 0x18011C0E8
 * Callers:
 *     unknown_libname_8 @ 0x18011C160 (unknown_libname_8.c)
 *     unknown_libname_9 @ 0x18011C190 (unknown_libname_9.c)
 * Callees:
 *     _o___std_exception_copy @ 0x1801259B3 (_o___std_exception_copy.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18011C0E8(_QWORD *a1, __int64 a2)
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
