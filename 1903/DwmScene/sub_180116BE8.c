/*
 * XREFs of sub_180116BE8 @ 0x180116BE8
 * Callers:
 *     sub_180095EDC @ 0x180095EDC (sub_180095EDC.c)
 * Callees:
 *     sub_180095264 @ 0x180095264 (sub_180095264.c)
 *     sub_1800F64F0 @ 0x1800F64F0 (sub_1800F64F0.c)
 *     sub_1800FB8B0 @ 0x1800FB8B0 (sub_1800FB8B0.c)
 *     sub_18011598C @ 0x18011598C (sub_18011598C.c)
 *     sub_180115B40 @ 0x180115B40 (sub_180115B40.c)
 *     sub_1801161D8 @ 0x1801161D8 (sub_1801161D8.c)
 *     sub_18011635C @ 0x18011635C (sub_18011635C.c)
 *     sub_180117E44 @ 0x180117E44 (sub_180117E44.c)
 *     sub_180117F9C @ 0x180117F9C (sub_180117F9C.c)
 *     sub_18011803C @ 0x18011803C (sub_18011803C.c)
 *     sub_1801180DC @ 0x1801180DC (sub_1801180DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180116BE8(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  unsigned __int64 v12; // rsi
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rsi
  __int64 result; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdx
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rsi
  volatile signed __int32 *v36; // rsi
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rsi
  __int64 v39; // rcx
  const char *v40; // r8
  __int64 v41; // rcx
  volatile signed __int32 *v42; // rbx
  __int64 v43; // rcx
  volatile signed __int32 *v44; // rbx
  __int128 v45; // [rsp+60h] [rbp-128h] BYREF
  __int128 v46; // [rsp+70h] [rbp-118h] BYREF
  __int64 *v47; // [rsp+80h] [rbp-108h]
  __int128 v48; // [rsp+88h] [rbp-100h] BYREF
  __int64 *v49; // [rsp+98h] [rbp-F0h]
  _QWORD *v50; // [rsp+A0h] [rbp-E8h]
  __int64 v51; // [rsp+A8h] [rbp-E0h]
  __int64 *v52; // [rsp+B0h] [rbp-D8h]
  __int64 v53; // [rsp+B8h] [rbp-D0h]
  _QWORD *v54; // [rsp+C0h] [rbp-C8h]
  __int64 v55; // [rsp+C8h] [rbp-C0h]
  const Spectre::Framework::GeometryProcessingException *v56; // [rsp+D0h] [rbp-B8h] BYREF
  _QWORD pExceptionObject[3]; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v60; // [rsp+100h] [rbp-88h] BYREF
  __int64 v61; // [rsp+108h] [rbp-80h] BYREF
  char v62; // [rsp+110h] [rbp-78h]
  void *v63[2]; // [rsp+118h] [rbp-70h] BYREF
  __int64 v64[3]; // [rsp+128h] [rbp-60h] BYREF

  v55 = -2LL;
  v12 = a4;
  v47 = a3;
  v49 = (__int64 *)a2;
  v54 = a1;
  v50 = a1;
  v51 = a2;
  v52 = a3;
  v15 = a5;
  *(_QWORD *)&v45 = a5;
  v53 = a5;
  v61 = a11;
  v59 = a11;
  *(_QWORD *)&v48 = a12;
  if ( !(unsigned __int8)sub_1801180DC(a4, "ComputeTangents") )
  {
    v48 = 0LL;
    v59 = a11;
    v16 = *(_QWORD *)(a10 + 56);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v16 + 16LL))(v16, &v48, &v59);
      v18 = (volatile signed __int32 *)*((_QWORD *)&v48 + 1);
      if ( *((_QWORD *)&v48 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      v19 = (volatile signed __int32 *)a1[1];
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
      }
      v20 = *(volatile signed __int32 **)(a2 + 8);
      goto LABEL_31;
    }
    std::_Xbad_function_call();
LABEL_69:
    sub_180095264(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v63[0] = 0LL;
  v63[1] = 0LL;
  v62 = 0;
  v21 = 16 * v12;
  if ( !is_mul_ok(v12, 0x10uLL) )
    v21 = -1LL;
  *(_OWORD *)v63 = 0LL;
  v22 = o__aligned_malloc(v21, 16LL);
  sub_1801161D8((__int64 *)v63, v22);
  if ( !v63[0] )
    goto LABEL_69;
  memset(v63[0], 0, 16 * v12);
  memset(v64, 0, sizeof(v64));
  sub_1800FB8B0(v64, (unsigned int)(2 * v12));
  try
  {
    v23 = v64[0];
    *(_QWORD *)&v46 = v64[0] + 12 * v12;
    v24 = *a1;
    v25 = *v49;
    v58 = *v49;
    v60 = *v47;
    if ( a7 )
    {
      if ( *(_QWORD *)v45 )
      {
        sub_180117F9C(a6, a8);
        v15 = v45;
        sub_180115B40(v24, v12, *(_QWORD *)v45, a6, v58, a8, (_QWORD *)v48, v23, v46);
      }
      else
      {
        sub_18011803C((unsigned int)v12, a8);
        sub_18011635C(v24, v12, v25, a8, (_QWORD *)v48, v23, v46);
        v15 = v45;
      }
    }
    else
    {
      sub_180117F9C(a6, a8);
      v15 = v45;
      sub_18011598C(v24, v12, *(_QWORD *)v45, a6, v58, a8, (_QWORD *)v48, v23, v46);
    }
  }
  catch ( Spectre::Utils::CancelledException )
  {
    throw;
  }
  catch ( const Spectre::Framework::GeometryProcessingException *v56 )
  {
    v40 = (char *)v56 + 24;
    if ( *((_QWORD *)v56 + 6) >= 0x10uLL )
      v40 = *(const char **)v40;
    sub_18011D988(&unk_18025DE00, 3LL, v40);
    v46 = 0LL;
    v60 = v59;
    v41 = *(_QWORD *)(a10 + 56);
    if ( !v41 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v41 + 16LL))(v41, &v46, &v60);
    v42 = (volatile signed __int32 *)*((_QWORD *)&v46 + 1);
    if ( *((_QWORD *)&v46 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v42)(v42);
        if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      }
    }
    goto LABEL_45;
  }
  catch ( ... )
  {
    sub_18011D988(&unk_18025DE00, 3LL, "ComputeTangents threw exception");
    v45 = 0LL;
    v58 = v59;
    v43 = *(_QWORD *)(a10 + 56);
    if ( !v43 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v43 + 16LL))(v43, &v45, &v58);
    v44 = (volatile signed __int32 *)*((_QWORD *)&v45 + 1);
    if ( *((_QWORD *)&v45 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
        if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
      }
    }
LABEL_45:
    sub_1800F64F0(v64);
    v34 = (volatile signed __int32 *)v63[1];
    if ( v63[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      }
    }
    v35 = (volatile signed __int32 *)v50[1];
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      }
    }
    v36 = *(volatile signed __int32 **)(v51 + 8);
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
        if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
      }
    }
    v37 = (volatile signed __int32 *)v52[1];
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
      }
    }
    result = v53;
    v38 = *(volatile signed __int32 **)(v53 + 8);
    if ( v38 )
    {
      result = (unsigned int)_InterlockedDecrement(v38 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
        result = (unsigned int)_InterlockedDecrement(v38 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
      }
    }
    v39 = *(_QWORD *)(a10 + 56);
    if ( v39 )
    {
      LOBYTE(v33) = v39 != a10;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 32LL))(v39, v33);
      *(_QWORD *)(a10 + 56) = 0LL;
    }
    return result;
  }
  sub_180117E44(v63[0], v12, v60, v23, v46, a9);
  v26 = *(_QWORD *)(a10 + 56);
  if ( !v26 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x18011735ALL);
  }
  (*(void (__fastcall **)(__int64, void **, __int64 *))(*(_QWORD *)v26 + 16LL))(v26, v63, &v61);
  sub_1800F64F0(v64);
  v27 = (volatile signed __int32 *)v63[1];
  if ( v63[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63[1] + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = (volatile signed __int32 *)v54[1];
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v20 = (volatile signed __int32 *)v49[1];
LABEL_31:
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  result = (__int64)v47;
  v30 = (volatile signed __int32 *)v47[1];
  if ( v30 )
  {
    result = (unsigned int)_InterlockedDecrement(v30 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      result = (unsigned int)_InterlockedDecrement(v30 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  v31 = *(volatile signed __int32 **)(v15 + 8);
  if ( v31 )
  {
    result = (unsigned int)_InterlockedDecrement(v31 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      result = (unsigned int)_InterlockedDecrement(v31 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  v32 = *(_QWORD *)(a10 + 56);
  if ( v32 )
  {
    LOBYTE(v17) = v32 != a10;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 32LL))(v32, v17);
    *(_QWORD *)(a10 + 56) = 0LL;
  }
  return result;
}
