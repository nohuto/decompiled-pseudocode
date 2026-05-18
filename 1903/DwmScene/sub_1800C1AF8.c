/*
 * XREFs of sub_1800C1AF8 @ 0x1800C1AF8
 * Callers:
 *     sub_1800B9898 @ 0x1800B9898 (sub_1800B9898.c)
 *     sub_1800B9BA0 @ 0x1800B9BA0 (sub_1800B9BA0.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 *     sub_1800BA1B0 @ 0x1800BA1B0 (sub_1800BA1B0.c)
 *     sub_1800BA4B8 @ 0x1800BA4B8 (sub_1800BA4B8.c)
 *     sub_1800BA7C0 @ 0x1800BA7C0 (sub_1800BA7C0.c)
 *     sub_1800BF770 @ 0x1800BF770 (sub_1800BF770.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_18008A970 @ 0x18008A970 (sub_18008A970.c)
 *     sub_18008B1A0 @ 0x18008B1A0 (sub_18008B1A0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800C1AF8(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-39h]
  __int64 v14[6]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v15[4]; // [rsp+70h] [rbp+7h] BYREF

  v14[4] = -2LL;
  v13 = a3;
  v14[5] = (__int64)a4;
  sub_180063430(a1 + 16);
  v12 = 0LL;
  v8 = a4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a4[1];
  }
  *(_QWORD *)&v12 = *a4;
  *((_QWORD *)&v12 + 1) = v8;
  sub_18008B1A0(a1, v15, &v12);
  *a2 = 0LL;
  a2[1] = 0LL;
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18001110C(v14, (__int64)v15);
  sub_18008A970(*a3, (__int64)a2, v14);
  unknown_libname_116(v15);
  v9 = (volatile signed __int32 *)a3[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a2;
}
