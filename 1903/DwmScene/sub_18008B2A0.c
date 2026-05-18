/*
 * XREFs of sub_18008B2A0 @ 0x18008B2A0
 * Callers:
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_1800141C0 @ 0x1800141C0 (sub_1800141C0.c)
 *     sub_180018150 @ 0x180018150 (sub_180018150.c)
 *     sub_18001C378 @ 0x18001C378 (sub_18001C378.c)
 *     sub_180089A38 @ 0x180089A38 (sub_180089A38.c)
 *     sub_1800C1340 @ 0x1800C1340 (sub_1800C1340.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18001D8F4 @ 0x18001D8F4 (sub_18001D8F4.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008B2A0(__int64 a1, __int64 a2, __int64 *a3)
{
  volatile signed __int32 *v6; // rbx
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-C8h]
  __int64 v14[5]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v15[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v16[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v17[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v18[32]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+F8h] [rbp-10h] BYREF

  v14[4] = -2LL;
  pExceptionObject[8] = a3;
  sub_180063430(a1 + 16);
  v12 = 0LL;
  v13 = 0LL;
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18001110C(v14, (__int64)a3);
  sub_18008AD88(a1, &v12, v14);
  if ( !v12 )
  {
    v8 = sub_18001D8F4(v16);
    v9 = (_QWORD *)sub_1800453AC((__int64)v17, (__int64)"Scene::GetRootNode() - layer ", (__int64)v8);
    v10 = sub_18002BF78((__int64)v18, v9, " not found");
    v11 = sub_18000E498(v15);
    sub_180027770(pExceptionObject, v11, 735, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18008B420(v12, a2);
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      v6 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  unknown_libname_116(a3);
  return a2;
}
