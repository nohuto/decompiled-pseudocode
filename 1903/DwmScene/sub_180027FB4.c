/*
 * XREFs of sub_180027FB4 @ 0x180027FB4
 * Callers:
 *     sub_180027EA8 @ 0x180027EA8 (sub_180027EA8.c)
 *     sub_18011D9DC @ 0x18011D9DC (sub_18011D9DC.c)
 * Callees:
 *     _o___std_exception_copy @ 0x1801259B3 (_o___std_exception_copy.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180027FB4(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]

  v5 = a1;
  v2 = a2;
  if ( a2[3] >= 0x10uLL )
    v2 = (_QWORD *)*a2;
  v5 = v2;
  v6 = 1;
  *a1 = &std::exception::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  o___std_exception_copy(&v5);
  *a1 = &std::runtime_error::`vftable';
  return a1;
}
