/*
 * XREFs of sub_18007CCF4 @ 0x18007CCF4
 * Callers:
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_180077ACC @ 0x180077ACC (sub_180077ACC.c)
 *     sub_1800782CC @ 0x1800782CC (sub_1800782CC.c)
 *     sub_180078B68 @ 0x180078B68 (sub_180078B68.c)
 *     sub_18008CBD8 @ 0x18008CBD8 (sub_18008CBD8.c)
 *     sub_1800E9C5C @ 0x1800E9C5C (sub_1800E9C5C.c)
 *     sub_180114F64 @ 0x180114F64 (sub_180114F64.c)
 *     sub_180115160 @ 0x180115160 (sub_180115160.c)
 *     sub_18011E8C0 @ 0x18011E8C0 (sub_18011E8C0.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=39
__int64 __fastcall sub_18007CCF4(_QWORD *a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rcx
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  volatile signed __int32 *v20; // rcx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  volatile signed __int32 *v26; // rcx
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 result; // rax
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v33; // [rsp+58h] [rbp-B0h]
  __int128 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v36; // [rsp+78h] [rbp-90h]
  __int128 v37; // [rsp+80h] [rbp-88h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v39; // [rsp+98h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v42; // [rsp+B8h] [rbp-50h]
  __int128 v43; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h] BYREF
  char v47; // [rsp+EEh] [rbp-1Ah]
  __m128i si128; // [rsp+F0h] [rbp-18h]
  __int64 v49; // [rsp+100h] [rbp-8h] BYREF
  char v50; // [rsp+10Ch] [rbp+4h]
  __m128i v51; // [rsp+110h] [rbp+8h]
  __int64 v52[2]; // [rsp+120h] [rbp+18h] BYREF
  __m128i v53; // [rsp+130h] [rbp+28h]
  __int64 v54[2]; // [rsp+140h] [rbp+38h] BYREF
  __m128i v55; // [rsp+150h] [rbp+48h]
  __int64 v56; // [rsp+160h] [rbp+58h] BYREF
  int v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  __int64 v59[3]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v60[3]; // [rsp+190h] [rbp+88h] BYREF
  __int64 v61[3]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v62; // [rsp+1C0h] [rbp+B8h] BYREF
  int v63; // [rsp+1C8h] [rbp+C0h]
  __int64 v64; // [rsp+1D0h] [rbp+C8h]
  __int64 v65[3]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int128 v66; // [rsp+1F0h] [rbp+E8h] BYREF
  __int128 v67; // [rsp+200h] [rbp+F8h] BYREF
  __int128 v68; // [rsp+210h] [rbp+108h] BYREF
  __int128 v69; // [rsp+220h] [rbp+118h] BYREF
  __int64 v70; // [rsp+230h] [rbp+128h] BYREF
  volatile signed __int32 *v71; // [rsp+238h] [rbp+130h]
  __int64 v72; // [rsp+240h] [rbp+138h] BYREF
  volatile signed __int32 *v73; // [rsp+248h] [rbp+140h]
  __int64 v74; // [rsp+250h] [rbp+148h]
  __int64 v75; // [rsp+258h] [rbp+150h] BYREF
  volatile signed __int32 *v76; // [rsp+260h] [rbp+158h]
  __int64 v77; // [rsp+268h] [rbp+160h] BYREF
  volatile signed __int32 *v78; // [rsp+270h] [rbp+168h]
  __int64 v79; // [rsp+278h] [rbp+170h] BYREF
  __int64 v80; // [rsp+280h] [rbp+178h]
  __int64 v81; // [rsp+288h] [rbp+180h] BYREF
  __int64 v82; // [rsp+290h] [rbp+188h]
  _BYTE v83[64]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v84[64]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v85[64]; // [rsp+318h] [rbp+210h] BYREF
  _BYTE v86[64]; // [rsp+358h] [rbp+250h] BYREF

  v74 = -2LL;
  v79 = 0LL;
  v80 = 0LL;
  sub_1800632D0((__int64)(a1 + 1), &v79);
  v81 = 0LL;
  v82 = 0LL;
  sub_1800632D0(*a2 + 16, &v81);
  v32 = 0LL;
  v33 = 0LL;
  sub_1800782CC((__int64)a1, &v32, a2);
  if ( v32 )
    sub_18011E8C0();
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      v4 = v33;
      (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
    }
  }
  memset(v83, 0, sizeof(v83));
  v34 = 0LL;
  v5 = a1[59];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a1[59];
  }
  *(_QWORD *)&v34 = a1[58];
  *((_QWORD *)&v34 + 1) = v5;
  sub_180114F64(
    (unsigned int)v83,
    (unsigned int)&v34,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    750,
    (__int64)"UpdateScene",
    (__int64)"PreUpdateScene",
    1);
  memset(v59, 0, sizeof(v59));
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v46) = 0;
  si128.m128i_i64[0] = 14LL;
  memmove(&v46, "PreUpdateScene", 0xEuLL);
  v47 = 0;
  v6 = sub_180077ACC((__int64)a1, &v75);
  v7 = (volatile signed __int32 *)v6[1];
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 3);
    v7 = (volatile signed __int32 *)v6[1];
  }
  v35 = *v6;
  v36 = v7;
  sub_180073A84(v59, &v35, (__int64)&v46);
  if ( v36 && _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
  v8 = v76;
  if ( v76 )
  {
    if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v9 = v46;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v9 = *(_QWORD *)(v46 - 8);
      if ( (unsigned __int64)(v46 - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v9);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v46) = 0;
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 96LL))(a1, a2);
  sub_180074950(v59);
  sub_180115160(v83);
  memset(v84, 0, sizeof(v84));
  v37 = 0LL;
  v10 = a1[59];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a1[59];
  }
  *(_QWORD *)&v37 = a1[58];
  *((_QWORD *)&v37 + 1) = v10;
  sub_180114F64(
    (unsigned int)v84,
    (unsigned int)&v37,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    765,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PreSceneUpdate",
    1);
  memset(v60, 0, sizeof(v60));
  v53 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v52[0]) = 0;
  LOBYTE(v11) = 0;
  sub_18000E168(v52, 0x1FuLL, v11, "kSpectreRenderCB_PreSceneUpdate");
  v12 = sub_180077ACC((__int64)a1, &v77);
  v13 = (volatile signed __int32 *)v12[1];
  if ( v13 )
  {
    _InterlockedIncrement(v13 + 3);
    v13 = (volatile signed __int32 *)v12[1];
  }
  v38 = *v12;
  v39 = v13;
  sub_180073A84(v60, &v38, (__int64)v52);
  if ( v39 && _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
  v14 = v78;
  if ( v78 )
  {
    if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  if ( v53.m128i_i64[1] >= 0x10uLL )
  {
    v15 = v52[0];
    if ( (unsigned __int64)(v53.m128i_i64[1] + 1) >= 0x1000 )
    {
      v15 = *(_QWORD *)(v52[0] - 8);
      if ( (unsigned __int64)(v52[0] - v15 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v15, v53.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v15);
  }
  v53 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v52[0]) = 0;
  v56 = a1[121];
  v57 = 1;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v58 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E9C5C(v56, &v56);
  v67 = 0LL;
  v68 = 0LL;
  sub_180078B68((__int64)a1, 1u, (__int64)&v68, (__int64)&v67);
  sub_180074950(v60);
  sub_180115160(v84);
  memset(v85, 0, sizeof(v85));
  v40 = 0LL;
  v18 = a1[59];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a1[59];
  }
  *(_QWORD *)&v40 = a1[58];
  *((_QWORD *)&v40 + 1) = v18;
  sub_180114F64(
    (unsigned int)v85,
    (unsigned int)&v40,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    771,
    (__int64)"UpdateScene",
    (__int64)"Update Scene",
    1);
  memset(v61, 0, sizeof(v61));
  v51.m128i_i64[1] = 15LL;
  LOBYTE(v49) = 0;
  v51.m128i_i64[0] = 12LL;
  memmove(&v49, "Update Scene", 0xCuLL);
  v50 = 0;
  v19 = sub_180077ACC((__int64)a1, &v70);
  v20 = (volatile signed __int32 *)v19[1];
  if ( v20 )
  {
    _InterlockedIncrement(v20 + 3);
    v20 = (volatile signed __int32 *)v19[1];
  }
  v41 = *v19;
  v42 = v20;
  sub_180073A84(v61, &v41, (__int64)&v49);
  if ( v42 && !_InterlockedDecrement(v42 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
  v21 = v71;
  if ( v71 )
  {
    if ( !_InterlockedDecrement(v71 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( !_InterlockedDecrement(v21 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  if ( v51.m128i_i64[1] >= 0x10uLL )
  {
    v22 = v49;
    if ( (unsigned __int64)(v51.m128i_i64[1] + 1) >= 0x1000 )
    {
      v22 = *(_QWORD *)(v49 - 8);
      if ( (unsigned __int64)(v49 - v22 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v22, v51.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v22);
  }
  v51 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v49) = 0;
  sub_18008CBD8(*a2, a1 + 46);
  sub_180074950(v61);
  sub_180115160(v85);
  memset(v86, 0, sizeof(v86));
  v43 = 0LL;
  v23 = a1[59];
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    v23 = a1[59];
  }
  *(_QWORD *)&v43 = a1[58];
  *((_QWORD *)&v43 + 1) = v23;
  sub_180114F64(
    (unsigned int)v86,
    (unsigned int)&v43,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    777,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PostSceneUpdate",
    1);
  memset(v65, 0, sizeof(v65));
  v55 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v54[0]) = 0;
  LOBYTE(v24) = 0;
  sub_18000E168(v54, 0x20uLL, v24, "kSpectreRenderCB_PostSceneUpdate");
  v25 = sub_180077ACC((__int64)a1, &v72);
  v26 = (volatile signed __int32 *)v25[1];
  if ( v26 )
  {
    _InterlockedIncrement(v26 + 3);
    v26 = (volatile signed __int32 *)v25[1];
  }
  v44 = *v25;
  v45 = v26;
  sub_180073A84(v65, &v44, (__int64)v54);
  if ( v45 && _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
  v27 = v73;
  if ( v73 )
  {
    if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  if ( v55.m128i_i64[1] >= 0x10uLL )
  {
    v28 = v54[0];
    if ( (unsigned __int64)(v55.m128i_i64[1] + 1) >= 0x1000 )
    {
      v28 = *(_QWORD *)(v54[0] - 8);
      if ( (unsigned __int64)(v54[0] - v28 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v28, v55.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v28);
  }
  v55 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v54[0]) = 0;
  v62 = a1[121];
  v63 = 2;
  v29 = Query_perf_frequency();
  v30 = Query_perf_counter();
  v64 = 1000000000 * (v30 % v29) / v29 + 1000000000 * (v30 / v29);
  sub_1800E9C5C(v62, &v62);
  v69 = 0LL;
  v66 = 0LL;
  sub_180078B68((__int64)a1, 2u, (__int64)&v66, (__int64)&v69);
  sub_180074950(v65);
  sub_180115160(v86);
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 104LL))(a1, a2);
  if ( (_BYTE)v82 )
    result = sub_180063778(v81);
  if ( (_BYTE)v80 )
    return sub_180063778(v79);
  return result;
}
