/*
 * XREFs of sub_18007D6D0 @ 0x18007D6D0
 * Callers:
 *     sub_1800CA7C0 @ 0x1800CA7C0 (sub_1800CA7C0.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_180077ACC @ 0x180077ACC (sub_180077ACC.c)
 *     sub_180078B68 @ 0x180078B68 (sub_180078B68.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_1800E2EE4 @ 0x1800E2EE4 (sub_1800E2EE4.c)
 *     sub_1800E2FEC @ 0x1800E2FEC (sub_1800E2FEC.c)
 *     sub_1800E3048 @ 0x1800E3048 (sub_1800E3048.c)
 *     sub_1800E32F0 @ 0x1800E32F0 (sub_1800E32F0.c)
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
__int64 __fastcall sub_18007D6D0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 *v15; // r15
  __int64 *i; // rsi
  struct __crt_locale_pointers *LocaleT; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h] BYREF
  char v28; // [rsp+94h] [rbp-74h]
  __m128i si128; // [rsp+98h] [rbp-70h]
  __int64 v30[2]; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C8h] [rbp-40h] BYREF
  int v33; // [rsp+D0h] [rbp-38h]
  __int64 v34; // [rsp+D8h] [rbp-30h]
  __int64 v35[3]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v36[3]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v37; // [rsp+110h] [rbp+8h] BYREF
  __int128 v38; // [rsp+120h] [rbp+18h] BYREF
  __int64 v39; // [rsp+130h] [rbp+28h]
  __int64 v40; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v41; // [rsp+140h] [rbp+38h]
  __int64 v42; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v43; // [rsp+150h] [rbp+48h]
  __int128 v44; // [rsp+158h] [rbp+50h] BYREF
  __m256i v45; // [rsp+168h] [rbp+60h]
  _BYTE v46[64]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v47[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  v39 = -2LL;
  memset(v47, 0, sizeof(v47));
  v22 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v22 = a1[58];
  *((_QWORD *)&v22 + 1) = v2;
  sub_180114F64(
    (unsigned int)v47,
    (unsigned int)&v22,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    707,
    (__int64)"UpdateScenes",
    (__int64)"UpdateScenes",
    1);
  memset(v36, 0, sizeof(v36));
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v27) = 0;
  si128.m128i_i64[0] = 12LL;
  memmove(&v27, "UpdateScenes", 0xCuLL);
  v28 = 0;
  v3 = sub_180077ACC((__int64)a1, &v40);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v23 = *v3;
  v24 = v4;
  sub_180073A84(v36, &v23, (__int64)&v27);
  if ( v24 && _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
  v5 = v41;
  if ( v41 )
  {
    if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v27;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v27 - 8);
      if ( (unsigned __int64)(v27 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v27) = 0;
  memset(v46, 0, sizeof(v46));
  v21 = 0LL;
  v7 = a1[59];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a1[59];
  }
  *(_QWORD *)&v21 = a1[58];
  *((_QWORD *)&v21 + 1) = v7;
  sub_180114F64(
    (unsigned int)v46,
    (unsigned int)&v21,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    712,
    (__int64)"UpdateScenes",
    (__int64)"kSpectreRenderCB_BeginFrame",
    1);
  memset(v35, 0, sizeof(v35));
  v31 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v30[0]) = 0;
  LOBYTE(v8) = 0;
  sub_18000E168(v30, 0x1BuLL, v8, "kSpectreRenderCB_BeginFrame");
  v9 = sub_180077ACC((__int64)a1, &v42);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)v9[1];
  }
  v25 = *v9;
  v26 = v10;
  sub_180073A84(v35, &v25, (__int64)v30);
  if ( v26 && _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
  v11 = v43;
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( v31.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v30[0];
    if ( (unsigned __int64)(v31.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v30[0] - 8);
      if ( (unsigned __int64)(v30[0] - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v31.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  v31 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v30[0]) = 0;
  v32 = a1[121];
  v33 = 0;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v34 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E9C5C(v32, &v32);
  v37 = 0LL;
  v38 = 0LL;
  sub_180078B68((__int64)a1, 0, (__int64)&v38, (__int64)&v37);
  sub_180074950(v35);
  sub_180115160(v46);
  v15 = (__int64 *)a1[89];
  for ( i = (__int64 *)a1[88]; i != v15; i += 2 )
  {
    LocaleT = _LocaleUpdate::GetLocaleT((_LocaleUpdate *)(a1 + 46));
    v18 = sub_1800E2EE4(LocaleT);
    v44 = *(_OWORD *)v18;
    v45 = *(__m256i *)(v18 + 16);
    v19 = sub_1800E2EE4(a1 + 25);
    if ( (*(float *)v19 == -1.0
       && *(float *)(v19 + 4) == -1.0
       && *(_DWORD *)(v19 + 8) == 2
       && !*(_DWORD *)(v19 + 12)
       && !*(_DWORD *)(v19 + 16)
       || *(float *)(v19 + 20) == -1.0
       && *(float *)(v19 + 24) == -1.0
       && *(_DWORD *)(v19 + 28) == 2
       && !*(_DWORD *)(v19 + 32)
       && !*(_DWORD *)(v19 + 36))
      && (*(float *)&v44 != -1.0 || *((float *)&v44 + 1) != -1.0 || *((_QWORD *)&v44 + 1) != 2LL || v45.m256i_i32[0])
      && (*(float *)&v45.m256i_i32[1] != -1.0
       || *(float *)&v45.m256i_i32[2] != -1.0
       || *(__int64 *)((char *)&v45.m256i_i64[1] + 4) != 2
       || v45.m256i_i32[5]) )
    {
      sub_1800E3048(a1 + 25, &v44);
    }
    sub_1800E32F0(a1 + 46, a1 + 25);
    sub_18007CCF4(a1, i);
  }
  sub_1800E2FEC(a1 + 25);
  sub_180074950(v36);
  return sub_180115160(v47);
}
