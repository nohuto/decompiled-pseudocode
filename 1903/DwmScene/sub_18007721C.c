/*
 * XREFs of sub_18007721C @ 0x18007721C
 * Callers:
 *     sub_180018CB0 @ 0x180018CB0 (sub_180018CB0.c)
 * Callees:
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007721C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  sub_180063178(a1 + 8, &v3);
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, &v3);
  if ( (_BYTE)v4 )
    return sub_180063668(v3);
  return result;
}
