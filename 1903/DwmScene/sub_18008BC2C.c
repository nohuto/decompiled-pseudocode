/*
 * XREFs of sub_18008BC2C @ 0x18008BC2C
 * Callers:
 *     sub_180013600 @ 0x180013600 (sub_180013600.c)
 *     sub_180013FD0 @ 0x180013FD0 (sub_180013FD0.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008BC2C(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-50h]
  __int64 v8[6]; // [rsp+30h] [rbp-48h] BYREF

  v8[4] = -2LL;
  v8[5] = (__int64)a2;
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18001110C(v8, (__int64)a2);
  *(_BYTE *)(*sub_18008AD88(a1, &v6, v8) + 72) = 1;
  v4 = v7;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return unknown_libname_116(a2);
}
