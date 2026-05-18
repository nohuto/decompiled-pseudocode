/*
 * XREFs of sub_1800783C0 @ 0x1800783C0
 * Callers:
 *     sub_180014D28 @ 0x180014D28 (sub_180014D28.c)
 * Callees:
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800783C0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  sub_180063288((__int64)(a1 + 1), &v5);
  a1[114] = *a2;
  a1[115] = a2[1];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 88LL))(a1, a2);
  if ( (_BYTE)v6 )
    return sub_180063778(v5);
  return result;
}
