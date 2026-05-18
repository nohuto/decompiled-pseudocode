/*
 * XREFs of sub_1800797D4 @ 0x1800797D4
 * Callers:
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_180077ACC @ 0x180077ACC (sub_180077ACC.c)
 *     sub_180078B68 @ 0x180078B68 (sub_180078B68.c)
 *     sub_1800E9C5C @ 0x1800E9C5C (sub_1800E9C5C.c)
 *     sub_180114F64 @ 0x180114F64 (sub_180114F64.c)
 *     sub_180115160 @ 0x180115160 (sub_180115160.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800797D4(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int128 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v27; // [rsp+60h] [rbp-A0h]
  __int128 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v30; // [rsp+80h] [rbp-80h]
  __int128 v31; // [rsp+88h] [rbp-78h] BYREF
  __int128 v32; // [rsp+98h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h] BYREF
  char v34; // [rsp+B4h] [rbp-4Ch]
  __m128i si128; // [rsp+B8h] [rbp-48h]
  __int64 v36[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v37; // [rsp+D8h] [rbp-28h]
  __int64 v38[3]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v39; // [rsp+100h] [rbp+0h] BYREF
  int v40; // [rsp+108h] [rbp+8h]
  __int64 v41; // [rsp+110h] [rbp+10h]
  __int64 v42[4]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v43; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h] BYREF
  volatile signed __int32 *v46; // [rsp+150h] [rbp+50h]
  _BYTE v47[64]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v48[64]; // [rsp+1A0h] [rbp+A0h] BYREF

  v42[3] = -2LL;
  memset(v47, 0, sizeof(v47));
  v25 = 0LL;
  v10 = a1[59];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a1[59];
  }
  *(_QWORD *)&v25 = a1[58];
  *((_QWORD *)&v25 + 1) = v10;
  sub_180114F64(
    (unsigned int)v47,
    (unsigned int)&v25,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1050,
    (__int64)"PresentFrame",
    (__int64)"PresentFrame",
    1);
  memset(v38, 0, sizeof(v38));
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v33) = 0;
  si128.m128i_i64[0] = 12LL;
  memmove(&v33, "PresentFrame", 0xCuLL);
  v34 = 0;
  v11 = sub_180077ACC((__int64)a1, &v43);
  v12 = (volatile signed __int32 *)v11[1];
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 3);
    v12 = (volatile signed __int32 *)v11[1];
  }
  v26 = *v11;
  v27 = v12;
  sub_180073A84(v38, &v26, (__int64)&v33);
  if ( v27 && _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
  v13 = v44;
  if ( v44 )
  {
    if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v14 = v33;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = *(_QWORD *)(v33 - 8);
      if ( (unsigned __int64)(v33 - v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v14);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v33) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)*a2 + 216LL))(*a2, a3, a4, a5, a6);
  sub_180074950(v38);
  sub_180115160(v47);
  memset(v48, 0, sizeof(v48));
  v28 = 0LL;
  v15 = a1[59];
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v15 = a1[59];
  }
  *(_QWORD *)&v28 = a1[58];
  *((_QWORD *)&v28 + 1) = v15;
  sub_180114F64(
    (unsigned int)v48,
    (unsigned int)&v28,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1056,
    (__int64)"PresentFrame",
    (__int64)"kSpectreRenderCB_PostPresent",
    1);
  memset(v42, 0, 24);
  v37 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v36[0]) = 0;
  sub_18000E168(v36, 0x1CuLL, 0LL, "kSpectreRenderCB_PostPresent");
  v16 = sub_180077ACC((__int64)a1, &v45);
  v17 = (volatile signed __int32 *)v16[1];
  if ( v17 )
  {
    _InterlockedIncrement(v17 + 3);
    v17 = (volatile signed __int32 *)v16[1];
  }
  v29 = *v16;
  v30 = v17;
  sub_180073A84(v42, &v29, (__int64)v36);
  if ( v30 && _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
  v18 = v46;
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  if ( v37.m128i_i64[1] >= 0x10uLL )
  {
    v19 = v36[0];
    if ( (unsigned __int64)(v37.m128i_i64[1] + 1) >= 0x1000 )
    {
      v19 = *(_QWORD *)(v36[0] - 8);
      if ( (unsigned __int64)(v36[0] - v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v37.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v19);
  }
  v37 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v36[0]) = 0;
  v39 = a1[121];
  v40 = 6;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v41 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E9C5C(v39, &v39);
  v31 = 0LL;
  v22 = a3[1];
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v22 = a3[1];
  }
  *(_QWORD *)&v31 = *a3;
  *((_QWORD *)&v31 + 1) = v22;
  v32 = 0LL;
  v23 = a2[1];
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    v23 = a2[1];
  }
  *(_QWORD *)&v32 = *a2;
  *((_QWORD *)&v32 + 1) = v23;
  sub_180078B68((__int64)a1, 6u, (__int64)&v32, (__int64)&v31);
  sub_180074950(v42);
  return sub_180115160(v48);
}
