/*
 * XREFs of sub_1801095E0 @ 0x1801095E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_18006D028 @ 0x18006D028 (sub_18006D028.c)
 *     sub_1800E0E28 @ 0x1800E0E28 (sub_1800E0E28.c)
 *     sub_1800E0E9C @ 0x1800E0E9C (sub_1800E0E9C.c)
 *     sub_1800E0FBC @ 0x1800E0FBC (sub_1800E0FBC.c)
 *     sub_1800E1138 @ 0x1800E1138 (sub_1800E1138.c)
 *     sub_1800E1200 @ 0x1800E1200 (sub_1800E1200.c)
 *     sub_1800E1338 @ 0x1800E1338 (sub_1800E1338.c)
 *     sub_1800E136C @ 0x1800E136C (sub_1800E136C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1801095E0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 *v11; // rax
  __int64 v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v14; // [rsp+50h] [rbp-B8h]
  __int64 v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v18[4]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v19[5]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v21[22]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v22[22]; // [rsp+1B8h] [rbp+B0h] BYREF

  v15 = -2LL;
  v2 = a1 + 8;
  v12 = a1 + 8;
  sub_1800635DC(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    sub_18000E498(v19);
    v11 = sub_18000E498(v18);
    sub_18006575C(pExceptionObject, v11, 268LL, (__int64)v19, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v3 = a1 + 32;
  if ( sub_1800E1138() )
  {
    v4 = sub_1800E1338(a1 + 32, &v13);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 72LL))(*v4);
    v5 = v14;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v2 = v12;
    }
    v6 = (__int64 *)sub_18006D028(*(_QWORD *)(a1 + 24), (__int64)v22);
    v7 = (_QWORD *)(a1 + 216);
    sub_1800E0FBC((__int64)v7, v6);
    sub_1800E0E9C(v22);
    if ( sub_1800E1138() )
    {
      v8 = sub_1800E136C(v3, &v16);
      v9 = sub_1800E1338(v3, &v17);
      sub_1800E1200(v7, v9, v8);
    }
    else
    {
      sub_1800E0E28((__int64)v21);
      sub_1800E0FBC(v3, v21);
      sub_1800E0E9C(v21);
    }
  }
  return sub_180063668(v2);
}
