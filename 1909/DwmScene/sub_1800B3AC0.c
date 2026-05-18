/*
 * XREFs of sub_1800B3AC0 @ 0x1800B3AC0
 * Callers:
 *     sub_1800B3A54 @ 0x1800B3A54 (sub_1800B3A54.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_1800B3700 @ 0x1800B3700 (sub_1800B3700.c)
 *     sub_1800B4244 @ 0x1800B4244 (sub_1800B4244.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall sub_1800B3AC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // di
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  char v15; // si
  signed __int32 v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  volatile signed __int32 *v20; // rbx
  signed __int32 v21; // eax
  char v22; // si
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  int v30; // eax
  __int64 *v31; // rax
  __int64 *v32; // rax
  struct _Mtx_internal_imp_t *v33; // [rsp+30h] [rbp-D0h]
  __int128 v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v39[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v40[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v41[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v42[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v43[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v47; // [rsp+188h] [rbp+88h]

  v37 = -2LL;
  v36 = a4;
  v35 = a3;
  v7 = 0;
  v33 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v8 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = *a2;
  v45 = 0LL;
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
      {
        v45 = *(_OWORD *)(v9 + 56);
        break;
      }
    }
  }
  v12 = 1LL;
  if ( !(_QWORD)v45 )
  {
    v14 = (volatile signed __int32 *)v33;
LABEL_18:
    v15 = 1;
    goto LABEL_19;
  }
  v13 = 0LL;
  v14 = 0LL;
  v9 = *(_QWORD *)(v45 + 80);
  if ( v9 )
  {
    do
    {
      v16 = *(_DWORD *)(v9 + 8);
      if ( !v16 )
      {
        v7 = 1;
        goto LABEL_18;
      }
    }
    while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v16 + 1, v16) );
    v13 = *(_QWORD *)(v45 + 72);
    v14 = *(volatile signed __int32 **)(v45 + 80);
  }
  v7 = 1;
  if ( !v13 )
    goto LABEL_18;
  v15 = 0;
LABEL_19:
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, _QWORD, __int64, __int64))v14)(v14, v45, v9, 1LL);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  if ( v15 )
  {
    sub_18000E4E8(v40);
    v32 = sub_18000E4E8(v39);
    sub_18006586C(v43, v32, 68LL, (__int64)v40, 0);
    throw (Spectre::Engine::EngineException *)v43;
  }
  v46 = 0LL;
  v47 = 0LL;
  sub_1800B4244(a1, &v46, v9, v12);
  if ( !v46 )
  {
    v20 = (volatile signed __int32 *)v34;
LABEL_35:
    v22 = 0;
    goto LABEL_36;
  }
  v18 = v45;
  v19 = 0LL;
  v20 = 0LL;
  v17 = *(_QWORD *)(v45 + 80);
  if ( v17 )
  {
    while ( 1 )
    {
      v21 = *(_DWORD *)(v17 + 8);
      if ( !v21 )
        break;
      if ( v21 == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), v21 + 1, v21) )
      {
        v19 = *(_QWORD *)(v45 + 72);
        v20 = *(volatile signed __int32 **)(v45 + 80);
        break;
      }
    }
  }
  v7 |= 2u;
  if ( v19 == v46 )
    goto LABEL_35;
  v22 = 1;
LABEL_36:
  if ( (v7 & 2) != 0 )
  {
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64, __int64))v20)(v20, v17, v18, v19);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
  }
  if ( v22 )
  {
    sub_18000E4E8(v42);
    v31 = sub_18000E4E8(v41);
    sub_18006586C(pExceptionObject, v31, 75LL, (__int64)v42, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v23 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 56) == v23 )
  {
    sub_18000FC30((char **)(a1 + 40), (char *)v23, a2);
  }
  else
  {
    *(_QWORD *)v23 = 0LL;
    *(_QWORD *)(v23 + 8) = 0LL;
    v24 = a2[1];
    if ( v24 )
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    *(_QWORD *)v23 = *a2;
    *(_QWORD *)(v23 + 8) = a2[1];
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v34 = 0LL;
  v25 = a2[1];
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
    v25 = a2[1];
  }
  *(_QWORD *)&v34 = *a2;
  *((_QWORD *)&v34 + 1) = v25;
  sub_1800B3700((__int64 **)(a1 + 88), (__int64)&v38, &v34);
  v26 = v38;
  *(_QWORD *)(v38 + 48) = v35;
  *(_QWORD *)(v26 + 56) = v36;
  *(_DWORD *)(v26 + 64) = a5;
  v27 = *((_QWORD *)&v34 + 1);
  if ( *((_QWORD *)&v34 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  }
  if ( v47 )
  {
    if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
    {
      v28 = v47;
      (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
    }
  }
  if ( *((_QWORD *)&v45 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v29 = *((_QWORD *)&v45 + 1);
      (***((void (__fastcall ****)(_QWORD))&v45 + 1))(*((_QWORD *)&v45 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v45 + 1) + 8LL))(*((_QWORD *)&v45 + 1));
    }
  }
  v30 = Mtx_unlock(v33);
  if ( v30 )
    std::_Throw_C_error(v30);
}
