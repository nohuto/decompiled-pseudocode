/*
 * XREFs of sub_18007C04C @ 0x18007C04C
 * Callers:
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 * Callees:
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18007C04C(__int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  result = sub_180063178(a1 + 8, &v3);
  if ( !*(_BYTE *)(a1 + 1160) )
  {
    sub_18007B920((__int64 *)a1, 0);
    result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 1160) = 1;
  }
  if ( (_BYTE)v4 )
    return (__int64 *)sub_180063668(v3);
  return result;
}
