/*
 * XREFs of sub_18011E8C0 @ 0x18011E8C0
 * Callers:
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_18011E420 @ 0x18011E420 (sub_18011E420.c)
 *     sub_18011E844 @ 0x18011E844 (sub_18011E844.c)
 *     sub_18011EC54 @ 0x18011EC54 (sub_18011EC54.c)
 *     _o_floor @ 0x180125B58 (_o_floor.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180127508 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011E8C0(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // eax
  __int64 *v6; // r14
  bool i; // zf
  volatile signed __int32 *v8; // rbx
  __int64 v9; // r13
  char v10; // r15
  __int64 v11; // rsi
  double v12; // xmm6_8
  double v13; // xmm1_8
  double v14; // xmm7_8
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  volatile signed __int32 *v21; // rbx
  _QWORD *v22; // r14
  _QWORD *j; // rsi
  __int64 *v24; // rbx
  __int64 **v25; // rax
  int v27; // [rsp+28h] [rbp-79h]
  char v28; // [rsp+38h] [rbp-69h]
  __int64 v29; // [rsp+40h] [rbp-61h] BYREF
  volatile signed __int32 *v30; // [rsp+48h] [rbp-59h]
  int v31; // [rsp+50h] [rbp-51h]
  __int64 *v32; // [rsp+58h] [rbp-49h]
  __int64 v33; // [rsp+60h] [rbp-41h]
  __int64 v34; // [rsp+68h] [rbp-39h]
  __int64 *v35; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v36[8]; // [rsp+78h] [rbp-29h] BYREF
  __int128 v37; // [rsp+80h] [rbp-21h] BYREF
  __int64 v38; // [rsp+90h] [rbp-11h]
  __int64 v39; // [rsp+98h] [rbp-9h] BYREF
  double v40; // [rsp+A0h] [rbp-1h] BYREF

  v33 = -2LL;
  v38 = 0LL;
  v37 = 0LL;
  (***(void (__fastcall ****)(_QWORD, __int64 *))(a1 + 136))(*(_QWORD *)(a1 + 136), &v39);
  v34 = a1 + 56;
  v2 = Mtx_lock((_Mtx_t)(a1 + 56));
  if ( v2 )
    std::_Throw_C_error(v2);
  LOBYTE(v27) = v28;
  sub_18011E420((__int64 *)a1, *(__int64 **)(a1 + 8), *(char **)(a1 + 24), *(char **)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != v3 )
  {
    do
    {
      unknown_libname_115(v4, 0);
      v4 += 16LL;
    }
    while ( v4 != v3 );
    v4 = *(_QWORD *)(a1 + 24);
  }
  *(_QWORD *)(a1 + 32) = v4;
  v5 = Mtx_unlock((_Mtx_t)(a1 + 56));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = *(__int64 **)a1;
  v32 = *(__int64 **)(a1 + 8);
  for ( i = v6 == v32; !i; i = v6 == v32 )
  {
    v29 = 0LL;
    v30 = 0LL;
    v8 = (volatile signed __int32 *)v6[1];
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = (volatile signed __int32 *)v6[1];
    }
    v9 = *v6;
    v29 = v9;
    v30 = v8;
    v10 = 1;
    if ( *(_BYTE *)(v9 + 168) )
      goto LABEL_26;
    v11 = v29;
    v12 = (double)((int)v39 - *(_DWORD *)(v29 + 8)) / 1000000000.0 / ((double)(int)*(_QWORD *)(v29 + 16) / 1000000000.0);
    v13 = 0.0;
    v14 = 0.0;
    v15 = (int)v12;
    v16 = *(unsigned int *)(v29 + 24);
    v31 = *(_DWORD *)(v29 + 24);
    v17 = *(unsigned int *)(v29 + 28);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 1 )
      {
        if ( v15 < (int)v16 )
          v13 = v12 - o_floor(v17);
        v14 = v13;
      }
    }
    else if ( v15 < (int)v16 )
    {
      v14 = v12 - o_floor(v17);
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v11 + 32) + 8LL))(
            *(_QWORD *)(v11 + 32),
            v16,
            *(_QWORD *)v11);
    if ( v10 && *(_QWORD *)(v11 + 96) )
    {
      v40 = ((double)v15 + v14) / (double)*(int *)(v11 + 24);
      v18 = *(_QWORD *)(v11 + 96);
      if ( !v18 )
        goto LABEL_47;
      (*(void (__fastcall **)(__int64, double *))(*(_QWORD *)v18 + 16LL))(v18, &v40);
    }
    if ( v15 < v31 )
    {
LABEL_26:
      if ( !*(_BYTE *)(v9 + 168) && v10 )
        goto LABEL_37;
      v11 = v29;
    }
    if ( *(_QWORD *)(v11 + 160) && v10 )
    {
      v19 = *(_QWORD *)(v11 + 160);
      if ( !v19 )
      {
        std::_Xbad_function_call();
LABEL_47:
        std::_Xbad_function_call();
        JUMPOUT(0x18011EC50LL);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = (_QWORD *)*((_QWORD *)&v37 + 1);
    if ( v38 == *((_QWORD *)&v37 + 1) )
    {
      sub_18000FC30((char **)&v37, *((char **)&v37 + 1), &v29);
    }
    else
    {
      **((_QWORD **)&v37 + 1) = 0LL;
      v20[1] = 0LL;
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v11 = v29;
      }
      *v20 = v11;
      v20[1] = v8;
      *((_QWORD *)&v37 + 1) += 16LL;
    }
LABEL_37:
    if ( v30 && _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      v21 = v30;
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
    v6 += 2;
  }
  v22 = (_QWORD *)*((_QWORD *)&v37 + 1);
  for ( j = (_QWORD *)v37; j != v22; j += 2 )
  {
    v24 = *(__int64 **)(a1 + 8);
    v25 = sub_18011E844(&v35, *(__int64 **)a1, v24, j);
    sub_18011EC54(a1, v36, *v25, v24, v27);
  }
  return sub_1800113D8((__int64 *)&v37);
}
