/*
 * XREFs of sub_18007C15C @ 0x18007C15C
 * Callers:
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 * Callees:
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18007BA30 @ 0x18007BA30 (sub_18007BA30.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18007C15C(__int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  result = sub_180063288(a1 + 8, &v3);
  if ( !*(_BYTE *)(a1 + 1160) )
  {
    sub_18007BA30((__int64 *)a1, 0);
    result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 1160) = 1;
  }
  if ( (_BYTE)v4 )
    return (__int64 *)sub_180063778(v3);
  return result;
}
