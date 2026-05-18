/*
 * XREFs of sub_18006DA3C @ 0x18006DA3C
 * Callers:
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18006DA3C(_BYTE *a1)
{
  __int64 *result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  result = sub_1800631C0((__int64)(a1 + 24), &v3);
  if ( !a1[3977] )
  {
    result = (__int64 *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3977] = 1;
  }
  if ( (_BYTE)v4 )
    return (__int64 *)sub_180063668(v3);
  return result;
}
