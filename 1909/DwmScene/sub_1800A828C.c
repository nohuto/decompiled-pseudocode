/*
 * XREFs of sub_1800A828C @ 0x1800A828C
 * Callers:
 *     sub_180018380 @ 0x180018380 (sub_180018380.c)
 *     sub_1800C1450 @ 0x1800C1450 (sub_1800C1450.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800FAB30 @ 0x1800FAB30 (sub_1800FAB30.c)
 *     sub_180113740 @ 0x180113740 (sub_180113740.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18009031C @ 0x18009031C (sub_18009031C.c)
 *     sub_1800A41C8 @ 0x1800A41C8 (sub_1800A41C8.c)
 *     sub_1800A653C @ 0x1800A653C (sub_1800A653C.c)
 *     sub_1800A724C @ 0x1800A724C (sub_1800A724C.c)
 *     sub_1800F3148 @ 0x1800F3148 (sub_1800F3148.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800A828C(__int128 *a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rax
  volatile signed __int32 *v15; // r14
  volatile signed __int32 *v16; // rcx
  __int64 *v18; // rax
  __int64 *v19; // rax
  char v20; // [rsp+38h] [rbp-D0h]
  __int128 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-B0h]
  __int64 v24; // [rsp+60h] [rbp-A8h]
  __int64 v25; // [rsp+68h] [rbp-A0h]
  __int64 v26; // [rsp+70h] [rbp-98h]
  volatile signed __int32 *v27; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+80h] [rbp-88h]
  __int64 *v29; // [rsp+88h] [rbp-80h]
  _BYTE v30[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v31[24]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v32[16]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v33[4]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v34[4]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v35[4]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v36[5]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v38[8]; // [rsp+198h] [rbp+90h] BYREF

  v28 = -2LL;
  v29 = a2;
  if ( *((_DWORD *)a1 + 108) != 1 )
  {
    sub_18000E4E8(v34);
    v18 = sub_18000E4E8(v33);
    sub_180027880(pExceptionObject, v18, 240, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v26 = 0LL;
  v27 = 0LL;
  v4 = (volatile signed __int32 *)*((_QWORD *)a1 + 17);
  if ( v4 )
  {
    _InterlockedAdd(v4 + 2, 1u);
    v4 = (volatile signed __int32 *)*((_QWORD *)a1 + 17);
  }
  v26 = *((_QWORD *)a1 + 16);
  v27 = v4;
  if ( !v26 || !(unsigned __int8)sub_1800F3148() )
  {
    sub_18000E4E8(v36);
    v19 = sub_18000E4E8(v35);
    sub_180027880(v38, v19, 244, (__int64)v36, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v38;
  }
  v5 = (_QWORD *)sub_1800A41C8(*((_QWORD *)a1 + 55));
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800A653C(v5, a2, 1);
  if ( *a2 )
  {
    v21 = 0LL;
    v6 = *((_QWORD *)a1 + 1);
    if ( !v6 )
    {
LABEL_38:
      std::bad_function_call::bad_function_call((std::bad_function_call *)v30);
      throw (std::bad_weak_ptr *)v30;
    }
    do
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        goto LABEL_38;
    }
    while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
    v21 = *a1;
    sub_18009031C((_QWORD *)*a2, &v21);
    v25 = 0LL;
    v24 = (__int64)a1 + 472;
    sub_1800636EC((__int64)a1 + 472);
    LOBYTE(v25) = 1;
    v8 = (volatile signed __int32 *)a2[1];
    if ( v8 )
    {
      _InterlockedAdd(v8 + 3, 1u);
      v8 = (volatile signed __int32 *)a2[1];
    }
    v22 = *a2;
    v23 = v8;
    sub_1800A724C((__int64 **)a1 + 60, (__int64)v32, 0, &v22, v20);
    if ( v23 && _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    sub_180063778(v24);
  }
  v9 = *a2;
  v10 = *(_QWORD *)(*a2 + 104);
  if ( !v10 )
  {
LABEL_39:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v31);
    throw (std::bad_weak_ptr *)v31;
  }
  do
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( !v11 )
      goto LABEL_39;
  }
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
  v12 = *(_QWORD *)(v9 + 96);
  v13 = *(volatile signed __int32 **)(v9 + 104);
  v14 = *a2;
  v15 = v13 + 3;
  if ( v13 )
    _InterlockedAdd(v15, 1u);
  *(_QWORD *)(v14 + 216) = v12;
  v16 = *(volatile signed __int32 **)(v14 + 224);
  *(_QWORD *)(v14 + 224) = v13;
  if ( v16 && _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return a2;
}
