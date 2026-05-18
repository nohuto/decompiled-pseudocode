/*
 * XREFs of sub_1800FA510 @ 0x1800FA510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180090B14 @ 0x180090B14 (sub_180090B14.c)
 *     sub_180090C68 @ 0x180090C68 (sub_180090C68.c)
 *     sub_180090C88 @ 0x180090C88 (sub_180090C88.c)
 *     sub_180099A60 @ 0x180099A60 (sub_180099A60.c)
 *     sub_18009BA54 @ 0x18009BA54 (sub_18009BA54.c)
 *     sub_18009BA9C @ 0x18009BA9C (sub_18009BA9C.c)
 *     sub_1800B0E64 @ 0x1800B0E64 (sub_1800B0E64.c)
 *     sub_1800B1094 @ 0x1800B1094 (sub_1800B1094.c)
 *     sub_1800F5E90 @ 0x1800F5E90 (sub_1800F5E90.c)
 *     sub_1800F610C @ 0x1800F610C (sub_1800F610C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800FA510(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  signed __int32 v15; // eax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __m128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  _QWORD **v22; // rax
  volatile signed __int32 *v23; // rbx
  __int64 v24; // r10
  __int64 v25; // rdx
  signed __int32 v26; // eax
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rcx
  __int64 result; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int128 v32; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+70h] [rbp-98h] BYREF
  __int128 v36; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v37[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v38[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-58h] BYREF
  char v40; // [rsp+BDh] [rbp-4Bh]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v42; // [rsp+C8h] [rbp-40h]
  __int64 v43[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v44[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v45; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v46[2]; // [rsp+108h] [rbp+0h] BYREF
  __m128i si128; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+128h] [rbp+20h]
  _QWORD *v49; // [rsp+130h] [rbp+28h]
  _QWORD *v50; // [rsp+138h] [rbp+30h]
  _BYTE v51[8]; // [rsp+140h] [rbp+38h] BYREF
  volatile signed __int32 *v52; // [rsp+148h] [rbp+40h]
  __m128i v53; // [rsp+150h] [rbp+48h]
  __int128 v54; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v55[24]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE pExceptionObject[16]; // [rsp+190h] [rbp+88h] BYREF

  v48 = -2LL;
  v49 = a4;
  v50 = a5;
  v32 = 0LL;
  v9 = *(_QWORD *)(a1 + 240);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = *(_QWORD *)(a1 + 240);
  }
  *(_QWORD *)&v32 = *(_QWORD *)(a1 + 232);
  *((_QWORD *)&v32 + 1) = v9;
  sub_1800B1094(*(_QWORD *)(a1 + 24), (__int64 *)&v32);
  *(_OWORD *)v43 = 0LL;
  sub_1800B0E64(*(_QWORD *)(a1 + 24), v43);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v33 = 0LL;
  v10 = *(_QWORD *)(a1 + 256);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 256);
  }
  *(_QWORD *)&v33 = *(_QWORD *)(a1 + 248);
  *((_QWORD *)&v33 + 1) = v10;
  v11 = (__int64 *)(a1 + 72);
  sub_18009BA9C(*(_QWORD *)(a1 + 72), &v33);
  sub_180090C68(*(_QWORD *)(a1 + 248), -1LL, 0);
  sub_180090C88(*(_QWORD **)(a1 + 248), 0, 0, 2);
  v37[0] = *a5;
  v37[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_1800F5E90(*(_QWORD *)(a1 + 200), &qword_18025E368, v37);
  v34 = 0LL;
  v12 = *(_QWORD *)(a1 + 48);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(a1 + 48);
  }
  *(_QWORD *)&v34 = *(_QWORD *)(a1 + 40);
  *((_QWORD *)&v34 + 1) = v12;
  sub_1800F610C(*(_QWORD *)(a1 + 200), (__int64)&qword_18025E368, &v34);
  v42 = 15LL;
  LOBYTE(v39) = 0;
  v41 = 13LL;
  memmove(&v39, "Bloom Phase 1", 0xDuLL);
  v40 = 0;
  v13 = *(_QWORD *)(a1 + 24);
  v35 = 0LL;
  v14 = *(_QWORD *)(a2 + 16);
  if ( !v14 )
  {
LABEL_48:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v15 = *(_DWORD *)(v14 + 8);
    if ( !v15 )
      goto LABEL_48;
  }
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) );
  v35 = *(_OWORD *)(a2 + 8);
  (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64, __int64 *))(*(_QWORD *)v13 + 208LL))(
    v13,
    &v35,
    a3,
    a1 + 72,
    &v39);
  v16 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
  if ( *((_QWORD *)&v35 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  if ( v42 >= 0x10 )
  {
    v17 = v39;
    if ( v42 + 1 >= 0x1000 )
    {
      v17 = *(_QWORD *)(v39 - 8);
      if ( (unsigned __int64)(v39 - v17 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v17, v42 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v17);
  }
  v18 = (__m128)*(unsigned int *)(a1 + 280);
  v18.m128_f32[0] = fmaxf(v18.m128_f32[0], 0.0);
  v18.m128_f32[0] = fminf(v18.m128_f32[0], 1.0);
  v38[0] = *a4;
  v38[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  sub_1800F5E90(*(_QWORD *)(a1 + 200), &qword_18025E368, v38);
  sub_180090B14(*(_QWORD *)(a1 + 248), (__int64)&qword_18025E208, 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v19 = sub_18006CE94(a2);
  v20 = sub_180077A8C(v19, 1);
  v21 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v20 + 72LL))(v20, &unk_18025B1F8, 14LL);
  v22 = (_QWORD **)sub_180099A60(*v11, (__int64)v51);
  sub_180090C88(*v22, v21, 0, 2);
  v23 = v52;
  if ( v52 )
  {
    if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v53 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), (__m128)xmmword_18025EF88);
  v44[0] = v53.m128i_i64[0];
  v44[1] = _mm_srli_si128(v53, 8).m128i_u64[0];
  sub_18009BA54((_DWORD *)*v11, v44);
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v46[0]) = 0;
  sub_18000E168(v46, 0x13uLL, 0LL, "Bloom Scene Overlay");
  v24 = *(_QWORD *)(a1 + 24);
  v36 = 0LL;
  v25 = *(_QWORD *)(a2 + 16);
  if ( !v25 )
  {
LABEL_49:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v55);
    throw (std::bad_weak_ptr *)v55;
  }
  do
  {
    v26 = *(_DWORD *)(v25 + 8);
    if ( !v26 )
      goto LABEL_49;
  }
  while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) );
  v36 = *(_OWORD *)(a2 + 8);
  (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64, __int64 *))(*(_QWORD *)v24 + 208LL))(
    v24,
    &v36,
    a3,
    a1 + 72,
    v46);
  v27 = (volatile signed __int32 *)*((_QWORD *)&v36 + 1);
  if ( *((_QWORD *)&v36 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v28 = v46[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v28 = *(_QWORD *)(v46[0] - 8);
      if ( (unsigned __int64)(v46[0] - v28 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v28, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v28);
  }
  v54 = xmmword_18025EF88;
  sub_18009BA54((_DWORD *)*v11, &v54);
  v45 = 0LL;
  result = sub_1800F5E90(*(_QWORD *)(a1 + 200), &qword_18025E368, &v45);
  v30 = (volatile signed __int32 *)a4[1];
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
  v31 = (volatile signed __int32 *)a5[1];
  if ( v31 )
  {
    result = (unsigned int)_InterlockedDecrement(v31 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      result = (unsigned int)_InterlockedDecrement(v31 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  return result;
}
