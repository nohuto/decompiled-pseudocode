/*
 * XREFs of sub_180112790 @ 0x180112790
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180090C3C @ 0x180090C3C (sub_180090C3C.c)
 *     sub_180090C68 @ 0x180090C68 (sub_180090C68.c)
 *     sub_18009BA9C @ 0x18009BA9C (sub_18009BA9C.c)
 *     sub_1800A40DC @ 0x1800A40DC (sub_1800A40DC.c)
 *     sub_1800A9414 @ 0x1800A9414 (sub_1800A9414.c)
 *     sub_1800AE9F0 @ 0x1800AE9F0 (sub_1800AE9F0.c)
 *     sub_1800B0E64 @ 0x1800B0E64 (sub_1800B0E64.c)
 *     sub_1800F5E90 @ 0x1800F5E90 (sub_1800F5E90.c)
 *     sub_1800F610C @ 0x1800F610C (sub_1800F610C.c)
 *     sub_18010B3B4 @ 0x18010B3B4 (sub_18010B3B4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180112790(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rcx
  __int64 *v14; // rax
  char v15; // r14
  volatile signed __int32 *v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // rdx
  signed __int32 v23; // eax
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rcx
  __int64 result; // rax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int128 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v35[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v36[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  char v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-40h]
  __int128 v41; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v42; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-8h]
  _QWORD *v45; // [rsp+100h] [rbp+0h]
  _QWORD *v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v48; // [rsp+118h] [rbp+18h]
  _BYTE v49[24]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v51; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v52; // [rsp+158h] [rbp+58h]

  v44 = -2LL;
  v45 = a4;
  v46 = a5;
  v51 = 0LL;
  v52 = 0LL;
  v9 = *a2;
  v30 = 0LL;
  v10 = *(_QWORD *)(v9 + 16);
  if ( !v10 )
  {
LABEL_47:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( !v11 )
      goto LABEL_47;
  }
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
  v30 = *(_OWORD *)(v9 + 8);
  sub_1800AE9F0(a1[3], &v51, (__int64 *)&v30);
  v12 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v31 = 0LL;
  v13 = a4[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a4[1];
  }
  *(_QWORD *)&v31 = *a4;
  *((_QWORD *)&v31 + 1) = v13;
  v35[0] = *a5;
  v35[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_18010B3B4(a1[3], a2, v35, (__int64)&v31, 0);
  v41 = 0LL;
  sub_1800B0E64(a1[3], (__int64 *)&v41);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  v14 = sub_1800A9414(a1[38], &v47);
  v15 = sub_1800A40DC(*v14, (__int64)(a1 + 42));
  v16 = v48;
  if ( v48 )
  {
    if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  sub_180090C68(a1[34], -1LL, 0);
  sub_180090C3C(a1[34], v15, 1);
  v17 = a1 + 9;
  *(_BYTE *)(a1[9] + 72) = 1;
  v32 = 0LL;
  v18 = a1[35];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a1[35];
  }
  *(_QWORD *)&v32 = a1[34];
  *((_QWORD *)&v32 + 1) = v18;
  sub_18009BA9C(*v17, &v32);
  v36[0] = *a4;
  v36[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  sub_1800F5E90(a1[36], &qword_18025E368, v36);
  v33 = 0LL;
  v19 = a1[41];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a1[41];
  }
  *(_QWORD *)&v33 = a1[40];
  *((_QWORD *)&v33 + 1) = v19;
  sub_1800F610C(a1[36], (__int64)&qword_18025E368, &v33);
  v40 = 15LL;
  LOBYTE(v37) = 0;
  v39 = 8LL;
  memmove(&v37, "Blurring", 8uLL);
  v38 = 0;
  v20 = a1[3];
  v21 = *a2;
  v34 = 0LL;
  v22 = *(_QWORD *)(v21 + 16);
  if ( !v22 )
  {
LABEL_48:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v49);
    throw (std::bad_weak_ptr *)v49;
  }
  do
  {
    v23 = *(_DWORD *)(v22 + 8);
    if ( !v23 )
      goto LABEL_48;
  }
  while ( v23 != _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 8), v23 + 1, v23) );
  v34 = *(_OWORD *)(v21 + 8);
  (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64 *, __int64 *))(*(_QWORD *)v20 + 208LL))(
    v20,
    &v34,
    a3,
    a1 + 9,
    &v37);
  v24 = (volatile signed __int32 *)*((_QWORD *)&v34 + 1);
  if ( *((_QWORD *)&v34 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  if ( v40 >= 0x10 )
  {
    v25 = v37;
    if ( v40 + 1 >= 0x1000 )
    {
      v25 = *(_QWORD *)(v37 - 8);
      if ( (unsigned __int64)(v37 - v25 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v25, v40 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v25);
  }
  v42 = 0LL;
  sub_1800F5E90(a1[36], &qword_18025E368, &v42);
  v43 = 0LL;
  sub_1800F610C(a1[36], (__int64)&qword_18025E368, &v43);
  result = *v17;
  *(_BYTE *)(*v17 + 72) = 0;
  v27 = v52;
  if ( v52 )
  {
    result = (unsigned int)_InterlockedDecrement(v52 + 2);
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
  v29 = (volatile signed __int32 *)a5[1];
  if ( v29 )
  {
    result = (unsigned int)_InterlockedDecrement(v29 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      result = (unsigned int)_InterlockedDecrement(v29 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  return result;
}
