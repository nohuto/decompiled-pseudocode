/*
 * XREFs of sub_1801096F0 @ 0x1801096F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18006D138 @ 0x18006D138 (sub_18006D138.c)
 *     sub_1800E0F38 @ 0x1800E0F38 (sub_1800E0F38.c)
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     sub_1800E10CC @ 0x1800E10CC (sub_1800E10CC.c)
 *     sub_1800E1248 @ 0x1800E1248 (sub_1800E1248.c)
 *     sub_1800E1310 @ 0x1800E1310 (sub_1800E1310.c)
 *     sub_1800E1448 @ 0x1800E1448 (sub_1800E1448.c)
 *     sub_1800E147C @ 0x1800E147C (sub_1800E147C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1801096F0(__int64 a1)
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
  sub_1800636EC(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    sub_18000E4E8(v19);
    v11 = sub_18000E4E8(v18);
    sub_18006586C(pExceptionObject, v11, 268LL, (__int64)v19, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v3 = a1 + 32;
  if ( sub_1800E1248() )
  {
    v4 = sub_1800E1448(a1 + 32, &v13);
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
    v6 = (__int64 *)sub_18006D138(*(_QWORD *)(a1 + 24), (__int64)v22);
    v7 = (_QWORD *)(a1 + 216);
    sub_1800E10CC((__int64)v7, v6);
    sub_1800E0FAC(v22);
    if ( sub_1800E1248() )
    {
      v8 = sub_1800E147C(v3, &v16);
      v9 = sub_1800E1448(v3, &v17);
      sub_1800E1310(v7, v9, v8);
    }
    else
    {
      sub_1800E0F38((__int64)v21);
      sub_1800E10CC(v3, v21);
      sub_1800E0FAC(v21);
    }
  }
  return sub_180063778(v2);
}
