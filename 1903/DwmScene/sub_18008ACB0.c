/*
 * XREFs of sub_18008ACB0 @ 0x18008ACB0
 * Callers:
 *     sub_18001C270 @ 0x18001C270 (sub_18001C270.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008ACB0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-50h]
  _QWORD v9[6]; // [rsp+30h] [rbp-48h] BYREF

  v9[4] = -2LL;
  v9[5] = a2;
  sub_180063430(a1 + 16);
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001110C(v9, (__int64)a2);
  v4 = *(_QWORD *)sub_18008AD88(a1, v7, v9);
  v5 = v8;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  unknown_libname_116(a2);
  return v4 + 48;
}
