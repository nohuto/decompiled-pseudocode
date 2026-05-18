/*
 * XREFs of sub_18008BF48 @ 0x18008BF48
 * Callers:
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_180013E90 @ 0x180013E90 (sub_180013E90.c)
 *     sub_1800141C0 @ 0x1800141C0 (sub_1800141C0.c)
 *     sub_18008C500 @ 0x18008C500 (sub_18008C500.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 *     sub_18008AF1C @ 0x18008AF1C (sub_18008AF1C.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008BF48(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r12
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *i; // rax
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-C0h]
  __int128 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h]
  __int64 *v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v25; // [rsp+88h] [rbp-80h]
  _QWORD v26[4]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v27[4]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v28[4]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v29[4]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v30[4]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v31[5]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v32[8]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v33[8]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+1D8h] [rbp+D0h] BYREF

  v22 = -2LL;
  v23 = a2;
  if ( !*a2 )
  {
    sub_18000E498(v27);
    v16 = sub_18000E498(v26);
    sub_180027770(v32, v16, 391, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v32;
  }
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v20 = *a2;
  *((_QWORD *)&v20 + 1) = v4;
  sub_18008AF1C(a1, &v18, (__int64 *)&v20);
  v5 = v18;
  if ( !v18 )
  {
    sub_18000E498(v29);
    v17 = sub_18000E498(v28);
    sub_180027770(v33, v17, 397, (__int64)v29, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v33;
  }
  v6 = sub_18008B420(v18, &v24);
  v8 = *a2;
  v9 = *v6;
  v10 = v25;
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    v5 = v18;
  }
  if ( v8 == v9 )
  {
    sub_18000E498(v31);
    v15 = sub_18000E498(v30);
    sub_180027770(pExceptionObject, v15, 402, (__int64)v31, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800634AC(a1 + 16, v7);
  for ( i = (volatile signed __int32 *)(v5 + 76); _interlockedbittestandset(i, 0); i = (volatile signed __int32 *)(v5 + 76) )
    ;
  v21 = 0LL;
  sub_180085B50(*a2, (__int64 *)&v21);
  result = v5 + 76;
  *(_DWORD *)(v5 + 76) = 0;
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      v13 = v19;
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
