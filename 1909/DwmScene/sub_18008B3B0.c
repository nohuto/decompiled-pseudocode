/*
 * XREFs of sub_18008B3B0 @ 0x18008B3B0
 * Callers:
 *     sub_180010550 @ 0x180010550 (sub_180010550.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800181C0 @ 0x1800181C0 (sub_1800181C0.c)
 *     sub_18001C488 @ 0x18001C488 (sub_18001C488.c)
 *     sub_180089B48 @ 0x180089B48 (sub_180089B48.c)
 *     sub_1800C1450 @ 0x1800C1450 (sub_1800C1450.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_18001DA04 @ 0x18001DA04 (sub_18001DA04.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     sub_180063540 @ 0x180063540 (sub_180063540.c)
 *     sub_18008AE98 @ 0x18008AE98 (sub_18008AE98.c)
 *     sub_18008B530 @ 0x18008B530 (sub_18008B530.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008B3B0(__int64 a1, __int64 a2, __int64 *a3)
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
  sub_180063540(a1 + 16);
  v12 = 0LL;
  v13 = 0LL;
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18001115C(v14, (__int64)a3);
  sub_18008AE98(a1, &v12, v14);
  if ( !v12 )
  {
    v8 = sub_18001DA04(v16);
    v9 = (_QWORD *)sub_1800454BC((__int64)v17, (__int64)"Scene::GetRootNode() - layer ", (__int64)v8);
    v10 = sub_18002C088((__int64)v18, v9, " not found");
    v11 = sub_18000E4E8(v15);
    sub_180027880(pExceptionObject, v11, 735, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18008B530(v12, a2);
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
