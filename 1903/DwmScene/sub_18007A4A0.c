/*
 * XREFs of sub_18007A4A0 @ 0x18007A4A0
 * Callers:
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_180073974 @ 0x180073974 (sub_180073974.c)
 *     sub_180074840 @ 0x180074840 (sub_180074840.c)
 *     sub_1800779BC @ 0x1800779BC (sub_1800779BC.c)
 *     sub_180078A58 @ 0x180078A58 (sub_180078A58.c)
 *     sub_1800A3A94 @ 0x1800A3A94 (sub_1800A3A94.c)
 *     sub_1800E9B4C @ 0x1800E9B4C (sub_1800E9B4C.c)
 *     sub_180114E54 @ 0x180114E54 (sub_180114E54.c)
 *     sub_180115050 @ 0x180115050 (sub_180115050.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_18007A4A0(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rcx
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  volatile signed __int32 *v27; // rcx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rax
  volatile signed __int32 *v32; // rcx
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  volatile signed __int32 *v38; // rbx
  __int128 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v42; // [rsp+60h] [rbp-A0h]
  __int128 v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v45; // [rsp+80h] [rbp-80h]
  __int128 v46; // [rsp+88h] [rbp-78h] BYREF
  __int128 v47; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v49; // [rsp+B0h] [rbp-50h]
  __int128 v50; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v52; // [rsp+D0h] [rbp-30h]
  __int128 v53; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-18h] BYREF
  char v55; // [rsp+F5h] [rbp-Bh]
  __m128i si128; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+108h] [rbp+8h] BYREF
  char v58; // [rsp+113h] [rbp+13h]
  __m128i v59; // [rsp+118h] [rbp+18h]
  __int128 v60; // [rsp+130h] [rbp+30h] BYREF
  __int128 v61; // [rsp+140h] [rbp+40h] BYREF
  __int64 v62[2]; // [rsp+150h] [rbp+50h] BYREF
  __m128i v63; // [rsp+160h] [rbp+60h]
  __int64 v64[2]; // [rsp+170h] [rbp+70h] BYREF
  __m128i v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+90h] BYREF
  int v67; // [rsp+198h] [rbp+98h]
  __int64 v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69[3]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v70[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v71; // [rsp+1D8h] [rbp+D8h] BYREF
  int v72; // [rsp+1E0h] [rbp+E0h]
  __int64 v73; // [rsp+1E8h] [rbp+E8h]
  __int64 v74[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v75[3]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v76; // [rsp+220h] [rbp+120h] BYREF
  volatile signed __int32 *v77; // [rsp+228h] [rbp+128h]
  __int64 v78; // [rsp+230h] [rbp+130h] BYREF
  volatile signed __int32 *v79; // [rsp+238h] [rbp+138h]
  __int64 v80; // [rsp+240h] [rbp+140h] BYREF
  volatile signed __int32 *v81; // [rsp+248h] [rbp+148h]
  __int64 v82; // [rsp+250h] [rbp+150h]
  __int64 v83; // [rsp+258h] [rbp+158h] BYREF
  volatile signed __int32 *v84; // [rsp+260h] [rbp+160h]
  _BYTE v85[8]; // [rsp+268h] [rbp+168h] BYREF
  __int64 v86; // [rsp+270h] [rbp+170h]
  __int128 v87; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v88[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v89[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v90[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v91[64]; // [rsp+350h] [rbp+250h] BYREF

  v82 = -2LL;
  memset(v91, 0, sizeof(v91));
  v40 = 0LL;
  v8 = a1[59];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a1[59];
  }
  *(_QWORD *)&v40 = a1[58];
  *((_QWORD *)&v40 + 1) = v8;
  sub_180114E54(
    (unsigned int)v91,
    (unsigned int)&v40,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1017,
    (__int64)"RenderContent",
    (__int64)"RenderContent",
    1);
  memset(v75, 0, sizeof(v75));
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v54) = 0;
  si128.m128i_i64[0] = 13LL;
  memmove(&v54, "RenderContent", 0xDuLL);
  v55 = 0;
  v9 = sub_1800779BC((__int64)a1, &v83);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)v9[1];
  }
  v41 = *v9;
  v42 = v10;
  sub_180073974(v75, &v41, (__int64)&v54);
  if ( v42 && _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
  v11 = v84;
  if ( v84 )
  {
    if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v54;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v54 - 8);
      if ( (unsigned __int64)(v54 - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v54) = 0;
  v87 = 0uLL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 376LL))(*a4, v85);
  v87 = 0LL;
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      if ( !v15 )
        break;
      if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
      {
        v87 = *(_OWORD *)v13;
        break;
      }
    }
  }
  v16 = v86;
  if ( v86 && !_InterlockedDecrement((volatile signed __int32 *)(v86 + 12)) )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, v14, v13);
  if ( (_QWORD)v87
    && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v87 + 16LL))(v87, v14, v13) )
  {
    memset(v88, 0, sizeof(v88));
    v43 = 0LL;
    v17 = a1[59];
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v17 = a1[59];
    }
    *(_QWORD *)&v43 = a1[58];
    *((_QWORD *)&v43 + 1) = v17;
    sub_180114E54(
      (unsigned int)v88,
      (unsigned int)&v43,
      (unsigned int)"..\\Source\\Engine\\Engine.cpp",
      1025,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_PreRender",
      1);
    memset(v69, 0, sizeof(v69));
    v63 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v62[0]) = 0;
    sub_18000E118(v62, 0x1AuLL, 0LL, "kSpectreRenderCB_PreRender");
    v18 = sub_1800779BC((__int64)a1, &v76);
    v19 = (volatile signed __int32 *)v18[1];
    if ( v19 )
    {
      _InterlockedIncrement(v19 + 3);
      v19 = (volatile signed __int32 *)v18[1];
    }
    v44 = *v18;
    v45 = v19;
    sub_180073974(v69, &v44, (__int64)v62);
    if ( v45 && _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
    v20 = v77;
    if ( v77 )
    {
      if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    if ( v63.m128i_i64[1] >= 0x10uLL )
    {
      v21 = v62[0];
      if ( (unsigned __int64)(v63.m128i_i64[1] + 1) >= 0x1000 )
      {
        v21 = *(_QWORD *)(v62[0] - 8);
        if ( (unsigned __int64)(v62[0] - v21 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v21, v63.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v21);
    }
    v63 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v62[0]) = 0;
    v66 = a1[121];
    v67 = 3;
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    v68 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
    sub_1800E9B4C(v66, &v66);
    v46 = 0LL;
    v24 = a4[1];
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      v24 = a4[1];
    }
    *(_QWORD *)&v46 = *a4;
    *((_QWORD *)&v46 + 1) = v24;
    v61 = 0LL;
    if ( *((_QWORD *)&v87 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v87 + 1) + 8LL));
    v61 = v87;
    sub_180078A58((__int64)a1, 3u, (__int64)&v61, (__int64)&v46);
    sub_180074840(v69);
    sub_180115050(v88);
    memset(v89, 0, sizeof(v89));
    v47 = 0LL;
    v25 = a1[59];
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
      v25 = a1[59];
    }
    *(_QWORD *)&v47 = a1[58];
    *((_QWORD *)&v47 + 1) = v25;
    sub_180114E54(
      (unsigned int)v89,
      (unsigned int)&v47,
      (unsigned int)"..\\Source\\Engine\\Engine.cpp",
      1030,
      (__int64)"RenderContent",
      (__int64)"RenderScene",
      1);
    memset(v70, 0, sizeof(v70));
    v59.m128i_i64[1] = 15LL;
    LOBYTE(v57) = 0;
    v59.m128i_i64[0] = 11LL;
    memmove(&v57, "RenderScene", 0xBuLL);
    v58 = 0;
    v26 = sub_1800779BC((__int64)a1, &v78);
    v27 = (volatile signed __int32 *)v26[1];
    if ( v27 )
    {
      _InterlockedIncrement(v27 + 3);
      v27 = (volatile signed __int32 *)v26[1];
    }
    v48 = *v26;
    v49 = v27;
    sub_180073974(v70, &v48, (__int64)&v57);
    if ( v49 && _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
    v28 = v79;
    if ( v79 )
    {
      if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
    if ( v59.m128i_i64[1] >= 0x10uLL )
    {
      v29 = v57;
      if ( (unsigned __int64)(v59.m128i_i64[1] + 1) >= 0x1000 )
      {
        v29 = *(_QWORD *)(v57 - 8);
        if ( (unsigned __int64)(v57 - v29 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v29, v59.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v29);
    }
    v59 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v57) = 0;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int128 *, _QWORD *))(*a1 + 128LL))(a1, a2, a3, &v87, a4);
    sub_180074840(v70);
    sub_180115050(v89);
    memset(v90, 0, sizeof(v90));
    v50 = 0LL;
    v30 = a1[59];
    if ( v30 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
      v30 = a1[59];
    }
    *(_QWORD *)&v50 = a1[58];
    *((_QWORD *)&v50 + 1) = v30;
    sub_180114E54(
      (unsigned int)v90,
      (unsigned int)&v50,
      (unsigned int)"..\\Source\\Engine\\Engine.cpp",
      1036,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_EndFrame",
      1);
    memset(v74, 0, sizeof(v74));
    v65 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v64[0]) = 0;
    sub_18000E118(v64, 0x19uLL, 0LL, "kSpectreRenderCB_EndFrame");
    v31 = sub_1800779BC((__int64)a1, &v80);
    v32 = (volatile signed __int32 *)v31[1];
    if ( v32 )
    {
      _InterlockedIncrement(v32 + 3);
      v32 = (volatile signed __int32 *)v31[1];
    }
    v51 = *v31;
    v52 = v32;
    sub_180073974(v74, &v51, (__int64)v64);
    if ( v52 && _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
    v33 = v81;
    if ( v81 )
    {
      if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
    if ( v65.m128i_i64[1] >= 0x10uLL )
    {
      v34 = v64[0];
      if ( (unsigned __int64)(v65.m128i_i64[1] + 1) >= 0x1000 )
      {
        v34 = *(_QWORD *)(v64[0] - 8);
        if ( (unsigned __int64)(v64[0] - v34 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v34, v65.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v34);
    }
    v65 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v64[0]) = 0;
    v71 = a1[121];
    v72 = 5;
    v35 = Query_perf_frequency();
    v36 = Query_perf_counter();
    v73 = 1000000000 * (v36 % v35) / v35 + 1000000000 * (v36 / v35);
    sub_1800E9B4C(v71, &v71);
    v53 = 0LL;
    v37 = a4[1];
    if ( v37 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
      v37 = a4[1];
    }
    *(_QWORD *)&v53 = *a4;
    *((_QWORD *)&v53 + 1) = v37;
    v60 = 0LL;
    if ( *((_QWORD *)&v87 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v87 + 1) + 8LL));
    v60 = v87;
    sub_180078A58((__int64)a1, 5u, (__int64)&v60, (__int64)&v53);
    sub_180074840(v74);
    sub_180115050(v90);
  }
  v38 = (volatile signed __int32 *)*((_QWORD *)&v87 + 1);
  if ( *((_QWORD *)&v87 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v87 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64))v38)(v38, v14, v13);
      if ( !_InterlockedDecrement(v38 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
    }
  }
  sub_1800A3A94(a1[64], v14, v13);
  sub_180074840(v75);
  return sub_180115050(v91);
}
