/*
 * XREFs of sub_180089F84 @ 0x180089F84
 * Callers:
 *     sub_180076620 @ 0x180076620 (sub_180076620.c)
 * Callees:
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1 @ 0x180088E7C (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1.c)
 *     sub_180089140 @ 0x180089140 (sub_180089140.c)
 *     sub_18008B55C @ 0x18008B55C (sub_18008B55C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180089F84(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0xD8uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    memset(v4, 0, 0xD8uLL);
    v4 = (_QWORD *)sub_180089140(v5, a2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>(a1, v4);
  v7 = 0LL;
  v8 = 0LL;
  sub_180063288(*a1 + 16LL, &v7);
  sub_18008B55C(*a1);
  if ( (_BYTE)v8 )
    sub_180063778(v7);
  return a1;
}
