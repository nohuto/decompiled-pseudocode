/*
 * XREFs of sub_18011746C @ 0x18011746C
 * Callers:
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 * Callees:
 *     sub_180095374 @ 0x180095374 (sub_180095374.c)
 *     sub_1800F6600 @ 0x1800F6600 (sub_1800F6600.c)
 *     sub_1800FB9C0 @ 0x1800FB9C0 (sub_1800FB9C0.c)
 *     sub_180115E04 @ 0x180115E04 (sub_180115E04.c)
 *     sub_180115FEC @ 0x180115FEC (sub_180115FEC.c)
 *     sub_180116230 @ 0x180116230 (sub_180116230.c)
 *     sub_18011628C @ 0x18011628C (sub_18011628C.c)
 *     sub_18011658C @ 0x18011658C (sub_18011658C.c)
 *     sub_180117F54 @ 0x180117F54 (sub_180117F54.c)
 *     sub_1801180AC @ 0x1801180AC (sub_1801180AC.c)
 *     sub_18011814C @ 0x18011814C (sub_18011814C.c)
 *     sub_1801181EC @ 0x1801181EC (sub_1801181EC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180127508 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18011746C(
        size_t *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        char a8,
        __int64 a9,
        size_t a10,
        __int64 a11)
{
  unsigned __int64 v12; // rsi
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rsi
  __int64 v29; // rcx
  volatile signed __int32 *v30; // rsi
  __int64 v31; // rdx
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rsi
  __int64 v36; // rcx
  const char *v37; // r8
  __int64 v38; // rcx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  __int64 v41; // rcx
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  __int128 v44; // [rsp+60h] [rbp-168h] BYREF
  __int128 v45; // [rsp+70h] [rbp-158h] BYREF
  __int128 v46; // [rsp+80h] [rbp-148h] BYREF
  size_t *v47; // [rsp+90h] [rbp-138h]
  __int64 *v48; // [rsp+98h] [rbp-130h]
  __int64 *v49; // [rsp+A0h] [rbp-128h]
  __int128 v50; // [rsp+A8h] [rbp-120h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-110h] BYREF
  __int128 v52; // [rsp+C8h] [rbp-100h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-F0h]
  const Spectre::Framework::GeometryProcessingException *v54; // [rsp+E0h] [rbp-E8h] BYREF
  _QWORD pExceptionObject[3]; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v56[3]; // [rsp+100h] [rbp-C8h] BYREF
  size_t Size; // [rsp+118h] [rbp-B0h] BYREF
  size_t v58; // [rsp+120h] [rbp-A8h] BYREF
  size_t v59; // [rsp+128h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+130h] [rbp-98h] BYREF
  char v61; // [rsp+138h] [rbp-90h]
  char v62; // [rsp+140h] [rbp-88h]
  void *v63[2]; // [rsp+148h] [rbp-80h] BYREF
  void *v64[2]; // [rsp+158h] [rbp-70h] BYREF
  __int64 v65[3]; // [rsp+168h] [rbp-60h] BYREF

  v53 = -2LL;
  v12 = a3;
  v47 = a1;
  v48 = a2;
  v49 = a4;
  v60 = a10;
  v59 = a10;
  *(_QWORD *)&v46 = a11;
  if ( !(unsigned __int8)sub_1801181EC(a3, "ComputeTangentsAndNormals") )
  {
    v45 = 0LL;
    v46 = 0LL;
    v59 = a10;
    v15 = *(_QWORD *)(a9 + 56);
    if ( v15 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, size_t *))(*(_QWORD *)v15 + 16LL))(
                 v15,
                 &v46,
                 &v45,
                 &v59);
      v18 = (volatile signed __int32 *)*((_QWORD *)&v46 + 1);
      if ( *((_QWORD *)&v46 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          result = (unsigned int)_InterlockedDecrement(v18 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      v19 = (volatile signed __int32 *)*((_QWORD *)&v45 + 1);
      goto LABEL_26;
    }
    std::_Xbad_function_call();
LABEL_68:
    sub_180095374(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v64[0] = 0LL;
  v64[1] = 0LL;
  v61 = 0;
  v20 = 16 * v12;
  if ( !is_mul_ok(v12, 0x10uLL) )
    v20 = -1LL;
  *(_OWORD *)v64 = 0LL;
  v21 = o__aligned_malloc(v20, 16LL);
  sub_18011628C((__int64 *)v64, v21);
  if ( !v64[0] )
    goto LABEL_68;
  memset(v64[0], 0, 16 * v12);
  memset(v65, 0, sizeof(v65));
  sub_1800FB9C0(v65, (unsigned int)(2 * v12));
  *(_QWORD *)&v45 = v65[0];
  Size = 12 * v12;
  *(_QWORD *)&v44 = v65[0] + 12 * v12;
  v63[0] = 0LL;
  v63[1] = 0LL;
  v62 = 0;
  v22 = 12 * v12;
  if ( !is_mul_ok(v12, 0xCuLL) )
    v22 = -1LL;
  *(_OWORD *)v63 = 0LL;
  v23 = o__aligned_malloc(v22, 16LL);
  sub_180116230((__int64 *)v63, v23);
  if ( !v63[0] )
  {
    sub_180095374(v56);
    throw (std::bad_alloc *)v56;
  }
  memset(v63[0], 0, Size);
  try
  {
    Size = *a1;
    v58 = *a2;
    if ( a6 )
    {
      if ( *a4 )
      {
        sub_1801180AC(a5, a7);
        sub_180115FEC(Size, v12, *a4, a5, v58, a7, (_QWORD *)v46, (__int64)v63[0], v45, v44);
      }
      else
      {
        sub_18011814C((unsigned int)v12, a7);
        sub_18011658C(Size, v12, v58, a7, (_QWORD *)v46, (__int64)v63[0], v45, v44);
      }
    }
    else
    {
      sub_1801180AC(a5, a7);
      sub_180115E04(Size, v12, *a4, a5, v58, a7, (_QWORD *)v46, (__int64)v63[0], v45, v44);
    }
  }
  catch ( Spectre::Utils::CancelledException )
  {
    throw;
  }
  catch ( const Spectre::Framework::GeometryProcessingException *v54 )
  {
    v37 = (char *)v54 + 24;
    if ( *((_QWORD *)v54 + 6) >= 0x10uLL )
      v37 = *(const char **)v37;
    sub_18011DA98(&unk_18025EE00, 3LL, v37);
    v50 = 0LL;
    v44 = 0LL;
    Size = v59;
    v38 = *(_QWORD *)(a9 + 56);
    if ( !v38 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, size_t *))(*(_QWORD *)v38 + 16LL))(v38, &v44, &v50, &Size);
    v39 = (volatile signed __int32 *)*((_QWORD *)&v44 + 1);
    if ( *((_QWORD *)&v44 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      }
    }
    v40 = (volatile signed __int32 *)*((_QWORD *)&v50 + 1);
    if ( *((_QWORD *)&v50 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      }
    }
    goto LABEL_44;
  }
  catch ( ... )
  {
    sub_18011DA98(&unk_18025EE00, 3LL, "ComputeTangentsAndNormals threw exception");
    v52 = 0LL;
    v51 = 0LL;
    v58 = v59;
    v41 = *(_QWORD *)(a9 + 56);
    if ( !v41 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, size_t *))(*(_QWORD *)v41 + 16LL))(v41, &v51, &v52, &v58);
    v42 = (volatile signed __int32 *)*((_QWORD *)&v51 + 1);
    if ( *((_QWORD *)&v51 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v42)(v42);
        if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      }
    }
    v43 = (volatile signed __int32 *)*((_QWORD *)&v52 + 1);
    if ( *((_QWORD *)&v52 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
        if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
      }
    }
LABEL_44:
    v30 = (volatile signed __int32 *)v63[1];
    if ( v63[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      }
    }
    sub_1800F6600(v65);
    v32 = (volatile signed __int32 *)v64[1];
    if ( v64[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v64[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      }
    }
    v33 = (volatile signed __int32 *)v47[1];
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
    v34 = (volatile signed __int32 *)v48[1];
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      }
    }
    result = (__int64)v49;
    v35 = (volatile signed __int32 *)v49[1];
    if ( v35 )
    {
      result = (unsigned int)_InterlockedDecrement(v35 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
        result = (unsigned int)_InterlockedDecrement(v35 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      }
    }
    v36 = *(_QWORD *)(a9 + 56);
    if ( v36 )
    {
      LOBYTE(v31) = v36 != a9;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 32LL))(v36, v31);
      *(_QWORD *)(a9 + 56) = 0LL;
    }
    return result;
  }
  sub_180117F54(v64[0], v12, v63[0], v45, v44, a8);
  v24 = *(_QWORD *)(a9 + 56);
  if ( !v24 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x180117C38LL);
  }
  (*(void (__fastcall **)(__int64, void **, void **, __int64 *))(*(_QWORD *)v24 + 16LL))(v24, v64, v63, &v60);
  v25 = (volatile signed __int32 *)v63[1];
  if ( v63[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63[1] + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  result = sub_1800F6600(v65);
  v19 = (volatile signed __int32 *)v64[1];
LABEL_26:
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      result = (unsigned int)_InterlockedDecrement(v19 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v26 = (volatile signed __int32 *)a1[1];
  if ( v26 )
  {
    result = (unsigned int)_InterlockedDecrement(v26 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      result = (unsigned int)_InterlockedDecrement(v26 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  v27 = (volatile signed __int32 *)a2[1];
  if ( v27 )
  {
    result = (unsigned int)_InterlockedDecrement(v27 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      result = (unsigned int)_InterlockedDecrement(v27 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = (volatile signed __int32 *)a4[1];
  if ( v28 )
  {
    result = (unsigned int)_InterlockedDecrement(v28 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      result = (unsigned int)_InterlockedDecrement(v28 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v29 = *(_QWORD *)(a9 + 56);
  if ( v29 )
  {
    LOBYTE(v17) = v29 != a9;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v17);
    *(_QWORD *)(a9 + 56) = 0LL;
  }
  return result;
}
