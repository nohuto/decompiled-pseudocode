/*
 * XREFs of sub_1800C6364 @ 0x1800C6364
 * Callers:
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 * Callees:
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_1800A41D0 @ 0x1800A41D0 (sub_1800A41D0.c)
 *     sub_1800F5E1C @ 0x1800F5E1C (sub_1800F5E1C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C6364(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // rbx
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  v1 = sub_180078228(a1);
  sub_1800A41D0(v1, &v3);
  sub_1800F5E1C(v3);
  v2 = v4;
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
