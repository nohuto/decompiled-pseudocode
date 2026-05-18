/*
 * XREFs of sub_180024A20 @ 0x180024A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023048 @ 0x180023048 (sub_180023048.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_180024A20(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  _QWORD v4[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[320]; // [rsp+30h] [rbp-158h] BYREF

  v4[1] = -2LL;
  v1 = sub_180023048(a1, v4);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v1 + 80LL))(*v1, v5);
  v2 = v4[0];
  if ( v4[0] )
  {
    v4[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (v5[304] & 2) == 0;
}
