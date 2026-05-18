/*
 * XREFs of sub_180089F64 @ 0x180089F64
 * Callers:
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 * Callees:
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1 @ 0x180088D6C (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1.c)
 *     sub_18008912C @ 0x18008912C (sub_18008912C.c)
 *     sub_18008B44C @ 0x18008B44C (sub_18008B44C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180089F64(_QWORD *a1, __int64 a2, unsigned int a3)
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
    v6 = (_QWORD *)sub_18008912C(v7, a2, a3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>(a1, v6);
  v9 = 0LL;
  v10 = 0LL;
  sub_180063178(*a1 + 16LL, &v9);
  sub_18008B44C(*a1);
  if ( (_BYTE)v10 )
    sub_180063668(v9);
  return a1;
}
