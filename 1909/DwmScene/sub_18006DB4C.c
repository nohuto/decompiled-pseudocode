/*
 * XREFs of sub_18006DB4C @ 0x18006DB4C
 * Callers:
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 * Callees:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18006DB4C(_BYTE *a1)
{
  __int64 *result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  result = sub_1800632D0((__int64)(a1 + 24), &v3);
  if ( !a1[3977] )
  {
    result = (__int64 *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3977] = 1;
  }
  if ( (_BYTE)v4 )
    return (__int64 *)sub_180063778(v3);
  return result;
}
