/*
 * XREFs of sub_18008A074 @ 0x18008A074
 * Callers:
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 * Callees:
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1 @ 0x180088E7C (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1.c)
 *     sub_18008923C @ 0x18008923C (sub_18008923C.c)
 *     sub_18008B55C @ 0x18008B55C (sub_18008B55C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18008A074(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v6 = operator new(0xD8uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    memset(v6, 0, 0xD8uLL);
    v6 = (_QWORD *)sub_18008923C(v7, a2, a3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>(a1, v6);
  v9 = 0LL;
  v10 = 0LL;
  sub_180063288(*a1 + 16LL, &v9);
  sub_18008B55C(*a1);
  if ( (_BYTE)v10 )
    sub_180063778(v9);
  return a1;
}
