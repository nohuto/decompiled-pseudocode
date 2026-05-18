/*
 * XREFs of sub_1800D28C0 @ 0x1800D28C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_18002638C @ 0x18002638C (sub_18002638C.c)
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     sub_1800644F0 @ 0x1800644F0 (sub_1800644F0.c)
 *     sub_18007B288 @ 0x18007B288 (sub_18007B288.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800D28C0(_QWORD *a1)
{
  __int64 v2; // rax
  char result; // al
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]

  sub_1800644F0((__int64)a1);
  v2 = a1[14];
  if ( v2 )
    LODWORD(v2) = *(_DWORD *)(v2 + 24);
  if ( (_DWORD)v2 != 2 )
    sub_18002638C(a1 + 15);
  result = sub_180064430((__int64)a1, 1);
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    sub_18007B288(v4, &v7);
    v5 = v8;
    for ( i = v7; i != v5; i += 16LL )
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 16LL))(a1, i);
    return sub_1800113D8(&v7);
  }
  return result;
}
