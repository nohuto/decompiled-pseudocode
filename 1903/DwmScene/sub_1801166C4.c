/*
 * XREFs of sub_1801166C4 @ 0x1801166C4
 * Callers:
 *     sub_18009570C @ 0x18009570C (sub_18009570C.c)
 * Callees:
 *     sub_180084D64 @ 0x180084D64 (sub_180084D64.c)
 *     sub_180095264 @ 0x180095264 (sub_180095264.c)
 *     sub_18011567C @ 0x18011567C (sub_18011567C.c)
 *     sub_180115804 @ 0x180115804 (sub_180115804.c)
 *     sub_1801160C4 @ 0x1801160C4 (sub_1801160C4.c)
 *     sub_18011627C @ 0x18011627C (sub_18011627C.c)
 *     sub_180117F9C @ 0x180117F9C (sub_180117F9C.c)
 *     sub_18011803C @ 0x18011803C (sub_18011803C.c)
 *     sub_1801180DC @ 0x1801180DC (sub_1801180DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1801166C4(
        _QWORD *a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8,
        _QWORD *a9)
{
  unsigned __int64 v11; // rsi
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rsi
  volatile signed __int32 *v17; // rsi
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rsi
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rsi
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rsi
  __int64 v30; // rcx
  const char *v31; // r8
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rbx
  __int128 v39; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+90h] [rbp-A8h]
  const Spectre::Framework::GeometryProcessingException *v43; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD pExceptionObject[3]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD *v45; // [rsp+B8h] [rbp-80h] BYREF
  _QWORD *v46; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD *v47; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-68h] BYREF
  char v49; // [rsp+D8h] [rbp-60h]
  void *v50[2]; // [rsp+E0h] [rbp-58h] BYREF

  v42 = -2LL;
  v11 = a2;
  v48 = (__int64)a8;
  v47 = a8;
  v45 = a9;
  if ( !(unsigned __int8)sub_1801180DC(a2, "ComputeNormals") )
  {
    v39 = 0LL;
    v47 = a8;
    v13 = *(_QWORD *)(a7 + 56);
    if ( v13 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD **))(*(_QWORD *)v13 + 16LL))(v13, &v39, &v47);
      v16 = (volatile signed __int32 *)*((_QWORD *)&v39 + 1);
      if ( *((_QWORD *)&v39 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          result = (unsigned int)_InterlockedDecrement(v16 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
      v17 = (volatile signed __int32 *)a1[1];
      goto LABEL_27;
    }
    std::_Xbad_function_call();
LABEL_53:
    sub_180095264(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v50[0] = 0LL;
  v50[1] = 0LL;
  v49 = 0;
  v18 = v11;
  v19 = 12 * v11;
  if ( !is_mul_ok(v11, 0xCuLL) )
    v19 = -1LL;
  *(_OWORD *)v50 = 0LL;
  v20 = o__aligned_malloc(v19, 16LL);
  sub_1801160C4((__int64 *)v50, v20);
  if ( !v50[0] )
    goto LABEL_53;
  memset(v50[0], 0, 12 * v11);
  try
  {
    v46 = (_QWORD *)*a1;
    if ( a5 )
    {
      if ( !*a3 )
      {
        sub_18011803C((unsigned int)v11, a6);
        sub_18011627C((int)v46, v11, a6, v45, (__int64)v50[0]);
        goto LABEL_75;
      }
      sub_180117F9C(a4, a6);
      sub_180115804((int)v46, v11, *a3, a4, a6, v45, (__int64)v50[0]);
    }
    else
    {
      sub_180117F9C(a4, a6);
      sub_18011567C((int)v46, v11, *a3, a4, a6, v45, (__int64)v50[0]);
    }
    v18 = v11;
  }
  catch ( Spectre::Utils::CancelledException )
  {
    throw;
  }
  catch ( const Spectre::Framework::GeometryProcessingException *v43 )
  {
    v31 = (char *)v43 + 24;
    if ( *((_QWORD *)v43 + 6) >= 0x10uLL )
      v31 = *(const char **)v31;
    sub_18011D988(&unk_18025DE00, 3LL, v31);
    v40 = 0LL;
    v46 = v47;
    v32 = *(_QWORD *)(a7 + 56);
    if ( !v32 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD **))(*(_QWORD *)v32 + 16LL))(v32, &v40, &v46);
    v33 = (volatile signed __int32 *)*((_QWORD *)&v40 + 1);
    if ( *((_QWORD *)&v40 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
    goto LABEL_37;
  }
  catch ( ... )
  {
    sub_18011D988(&unk_18025DE00, 3LL, "ComputeNormals threw unexpected exception");
    v41 = 0LL;
    v45 = v47;
    v34 = *(_QWORD *)(a7 + 56);
    if ( !v34 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD **))(*(_QWORD *)v34 + 16LL))(v34, &v41, &v45);
    v35 = (volatile signed __int32 *)*((_QWORD *)&v41 + 1);
    if ( *((_QWORD *)&v41 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      }
    }
LABEL_37:
    v26 = (volatile signed __int32 *)v50[1];
    if ( v50[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v50[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      }
    }
    v28 = (volatile signed __int32 *)a1[1];
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
    result = (__int64)a3;
    v29 = (volatile signed __int32 *)a3[1];
    if ( v29 )
    {
      result = (unsigned int)_InterlockedDecrement(v29 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        result = (unsigned int)_InterlockedDecrement(v29 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
    v30 = *(_QWORD *)(a7 + 56);
    if ( v30 )
    {
      LOBYTE(v27) = v30 != a7;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v27);
      *(_QWORD *)(a7 + 56) = 0LL;
    }
    return result;
  }
LABEL_75:
  if ( (_DWORD)v11 )
  {
    v21 = 0LL;
    do
    {
      sub_180084D64((char *)v50[0] + v21);
      v21 += 12LL;
      --v18;
    }
    while ( v18 );
  }
  v22 = *(_QWORD *)(a7 + 56);
  if ( !v22 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x180116BE5LL);
  }
  (*(void (__fastcall **)(__int64, void **, __int64 *))(*(_QWORD *)v22 + 16LL))(v22, v50, &v48);
  v23 = (volatile signed __int32 *)v50[1];
  if ( v50[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v50[1] + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  result = (__int64)a1;
  v17 = (volatile signed __int32 *)a1[1];
LABEL_27:
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  v24 = (volatile signed __int32 *)a3[1];
  if ( v24 )
  {
    result = (unsigned int)_InterlockedDecrement(v24 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      result = (unsigned int)_InterlockedDecrement(v24 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  v25 = *(_QWORD *)(a7 + 56);
  if ( v25 )
  {
    LOBYTE(v15) = v25 != a7;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 32LL))(v25, v15);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  return result;
}
