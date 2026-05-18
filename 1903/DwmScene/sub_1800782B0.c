/*
 * XREFs of sub_1800782B0 @ 0x1800782B0
 * Callers:
 *     sub_180014CB8 @ 0x180014CB8 (sub_180014CB8.c)
 * Callees:
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800782B0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  sub_180063178((__int64)(a1 + 1), &v5);
  a1[114] = *a2;
  a1[115] = a2[1];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 88LL))(a1, a2);
  if ( (_BYTE)v6 )
    return sub_180063668(v5);
  return result;
}
