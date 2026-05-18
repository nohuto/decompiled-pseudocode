/*
 * XREFs of sub_1800ACDE0 @ 0x1800ACDE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017F3C @ 0x180017F3C (sub_180017F3C.c)
 *     sub_18006751C @ 0x18006751C (sub_18006751C.c)
 *     sub_18006AA88 @ 0x18006AA88 (sub_18006AA88.c)
 *     sub_18006AAEC @ 0x18006AAEC (sub_18006AAEC.c)
 *     sub_18006AC60 @ 0x18006AC60 (sub_18006AC60.c)
 *     sub_180078118 @ 0x180078118 (sub_180078118.c)
 *     sub_180083644 @ 0x180083644 (sub_180083644.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_1800A5110 @ 0x1800A5110 (sub_1800A5110.c)
 *     sub_1800A511C @ 0x1800A511C (sub_1800A511C.c)
 *     sub_1800A5128 @ 0x1800A5128 (sub_1800A5128.c)
 *     sub_1800A51B0 @ 0x1800A51B0 (sub_1800A51B0.c)
 *     sub_1800AC360 @ 0x1800AC360 (sub_1800AC360.c)
 *     sub_1800AE8A4 @ 0x1800AE8A4 (sub_1800AE8A4.c)
 *     sub_1800AE8E0 @ 0x1800AE8E0 (sub_1800AE8E0.c)
 *     sub_1800AE934 @ 0x1800AE934 (sub_1800AE934.c)
 *     sub_1800AE9B8 @ 0x1800AE9B8 (sub_1800AE9B8.c)
 *     sub_1800AE9F4 @ 0x1800AE9F4 (sub_1800AE9F4.c)
 *     sub_1800AEC7C @ 0x1800AEC7C (sub_1800AEC7C.c)
 *     sub_1800B1790 @ 0x1800B1790 (sub_1800B1790.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800ACDE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  _QWORD *v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // xmm6_4
  int v19; // eax
  int v20; // xmm15_4
  float v21; // xmm14_4
  float v22; // xmm10_4
  int v23; // xmm9_4
  char v24; // al
  __m128i v25; // xmm0
  __m128i v26; // xmm6
  char v27; // bl
  __m128 v28; // xmm6
  __m128 v29; // xmm11
  float v30; // xmm9_4
  float v31; // xmm10_4
  __m128 v32; // xmm3
  float v33; // xmm11_4
  float v34; // xmm12_4
  __m128 v35; // xmm3
  unsigned __int64 *v36; // rax
  int v37; // xmm6_4
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // zf
  const char *v41; // r9
  const char *v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r8
  volatile signed __int32 *v46; // rbx
  __int64 v47; // rdx
  signed __int32 v48; // eax
  int v49; // xmm2_4
  __int64 v50; // r8
  volatile signed __int32 *v51; // rbx
  __int64 v52; // rdx
  signed __int32 v53; // eax
  float *v54; // rax
  __m128 v55; // xmm2
  __int64 v56; // rax
  __int64 result; // rax
  volatile signed __int32 *v58; // rbx
  int v59; // [rsp+30h] [rbp-D8h]
  int v60; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+80h] [rbp-88h] BYREF
  __int64 v64; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v65; // [rsp+90h] [rbp-78h] BYREF
  int v66; // [rsp+98h] [rbp-70h]
  int v67; // [rsp+9Ch] [rbp-6Ch]
  int v68; // [rsp+A0h] [rbp-68h]
  float v69; // [rsp+A4h] [rbp-64h]
  __int32 v70; // [rsp+A8h] [rbp-60h]
  unsigned __int32 v71; // [rsp+ACh] [rbp-5Ch]
  unsigned __int32 v72; // [rsp+B0h] [rbp-58h]
  int v73; // [rsp+B4h] [rbp-54h]
  int v74; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v75; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v76; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-18h]
  int v78; // [rsp+F8h] [rbp-10h] BYREF
  char v79[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v80; // [rsp+108h] [rbp+0h]
  char v81[8]; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v82; // [rsp+118h] [rbp+10h]
  __int128 v83; // [rsp+128h] [rbp+20h] BYREF
  __int128 v84; // [rsp+138h] [rbp+30h] BYREF
  __m128i v85; // [rsp+148h] [rbp+40h] BYREF
  __int128 v86; // [rsp+158h] [rbp+50h] BYREF
  __int64 v87; // [rsp+168h] [rbp+60h]
  volatile signed __int32 *v88; // [rsp+170h] [rbp+68h]
  __int64 v89; // [rsp+178h] [rbp+70h]
  volatile signed __int32 *v90; // [rsp+180h] [rbp+78h]
  __int128 v91; // [rsp+188h] [rbp+80h]
  __int128 v92; // [rsp+198h] [rbp+90h]
  __int128 v93; // [rsp+1A8h] [rbp+A0h]
  __int128 v94; // [rsp+1B8h] [rbp+B0h]
  __int128 v95; // [rsp+1C8h] [rbp+C0h]
  __int128 v96; // [rsp+1D8h] [rbp+D0h]
  __int128 v97; // [rsp+1E8h] [rbp+E0h]
  __int128 v98; // [rsp+1F8h] [rbp+F0h]
  char v99[16]; // [rsp+208h] [rbp+100h] BYREF
  char v100[64]; // [rsp+218h] [rbp+110h] BYREF
  char v101[64]; // [rsp+258h] [rbp+150h] BYREF
  __int32 v102; // [rsp+298h] [rbp+190h] BYREF
  unsigned __int32 v103; // [rsp+29Ch] [rbp+194h]
  unsigned __int32 v104; // [rsp+2A0h] [rbp+198h]
  _DWORD v105[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _DWORD v106[2]; // [rsp+2B0h] [rbp+1A8h] BYREF
  __int64 v107; // [rsp+2B8h] [rbp+1B0h] BYREF
  volatile signed __int32 *v108; // [rsp+2C0h] [rbp+1B8h]
  __m128i v109; // [rsp+2C8h] [rbp+1C0h] BYREF
  unsigned __int64 v110; // [rsp+2D8h] [rbp+1D0h] BYREF
  float v111; // [rsp+2E0h] [rbp+1D8h] BYREF
  float v112; // [rsp+2E4h] [rbp+1DCh]
  unsigned int v113; // [rsp+2E8h] [rbp+1E0h]
  float v114; // [rsp+2ECh] [rbp+1E4h]
  float v115; // [rsp+2F0h] [rbp+1E8h]
  unsigned int v116; // [rsp+2F4h] [rbp+1ECh]
  unsigned __int64 v117; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned __int64 v118; // [rsp+300h] [rbp+1F8h] BYREF
  _DWORD v119[4]; // [rsp+308h] [rbp+200h] BYREF
  _DWORD v120[4]; // [rsp+318h] [rbp+210h] BYREF
  __m128i v121; // [rsp+328h] [rbp+220h]
  char v122; // [rsp+338h] [rbp+230h]
  __int128 v123; // [rsp+348h] [rbp+240h] BYREF
  __int128 v124; // [rsp+358h] [rbp+250h]
  __int128 v125; // [rsp+368h] [rbp+260h]
  __int128 v126; // [rsp+378h] [rbp+270h]

  v77 = -2LL;
  v107 = 0LL;
  v108 = 0LL;
  sub_1800AE8E0(a1, &v107, a2);
  if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
  {
    v5 = sub_1800F0DA4(a1);
    v6 = sub_180078118(v5);
    v7 = v6;
    if ( *(_QWORD *)(a1 + 200) )
    {
      v75 = 0LL;
      sub_1800A5128(v6, a1 + 184, &v75);
      v8 = (volatile signed __int32 *)*((_QWORD *)&v75 + 1);
      if ( *((_QWORD *)&v75 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v75 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      v76 = 0LL;
      sub_1800A5128(v7, a1 + 216, &v76);
      v9 = (volatile signed __int32 *)*((_QWORD *)&v76 + 1);
      if ( *((_QWORD *)&v76 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v76 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 264) )
    {
      v91 = xmmword_18025DFE0;
      v92 = xmmword_18025DFF0;
      v93 = xmmword_18025E000;
      v94 = xmmword_18025E010;
      sub_1800A5110(v7);
    }
  }
  v10 = (_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 136) || *v10 )
  {
    sub_18006AA88(v107, a1 + 136, (__int64)v10);
  }
  else
  {
    v11 = *a3;
    v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a3 + 40LL))(*a3, v81);
    v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 32LL))(v11, v79);
    sub_18006AA88(v107, v13, v12);
    v14 = v80;
    if ( v80 )
    {
      if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v15 = v82;
    if ( v82 )
    {
      if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v16 = *a3;
    v17 = v107;
    *(float *)&v18 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
    sub_18006AC60(v17, 0.0, 0.0, (float)v19, v18, 0, 1065353216);
  }
  v20 = 1065353216;
  v60 = 0;
  v21 = 0.0;
  sub_1800AE8A4(a1, &v110);
  v119[0] = 0;
  v119[1] = 0;
  v22 = *(float *)&v110;
  v119[2] = (int)o_roundf();
  v23 = SHIDWORD(v110);
  v119[3] = (int)o_roundf();
  v24 = 0;
  v122 = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v25 = *(__m128i *)(a1 + 372);
    v121 = v25;
    v24 = 1;
    v122 = 1;
  }
  else
  {
    v25 = v121;
  }
  if ( v24 )
  {
    v109 = v25;
  }
  else
  {
    sub_1800AE9F4(a1, &v74);
    v109.m128i_i32[0] = (int)o_roundf();
    v109.m128i_i32[1] = (int)o_roundf();
    v109.m128i_i32[2] = (int)o_roundf();
    v109.m128i_i32[3] = (int)o_roundf();
  }
  v26 = *(__m128i *)sub_1800AEC7C(v99, &v109, v119);
  v109 = v26;
  v27 = 0;
  sub_1800AE9F4(a1, &v111);
  if ( (*(_BYTE *)(a1 + 443) & 1) != 0 )
  {
    v28 = (__m128)v116;
    v29 = (__m128)v113;
    sub_18006AC60(v107, 0.0, 0.0, v22, v23, v113, v116);
    if ( v22 == 0.0 || *(float *)&v23 == 0.0 )
      v27 = 1;
    v30 = v111;
    v31 = v112;
    v32 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)LODWORD(v111), (__m128)LODWORD(v112)), v29);
    LODWORD(v62) = v32.m128_i32[0];
    HIDWORD(v62) = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
    sub_18006751C(&v117, &v62, &v110);
    v33 = v114;
    v34 = v115;
    v35 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)LODWORD(v114), (__m128)LODWORD(v115)), v28);
    LODWORD(v63) = v35.m128_i32[0];
    HIDWORD(v63) = _mm_shuffle_ps(v35, v35, 85).m128_u32[0];
    sub_18006751C(&v118, &v63, &v110);
    sub_1800AC360(v105, &v118, &v117);
    v65 = 0x3F8000003F800000LL;
    v36 = (unsigned __int64 *)sub_180017F3C(&v78, &v118, &v117);
    sub_1800AC360(v106, v36, &v65);
    v21 = -*(float *)&v106[1];
    v20 = v105[0];
    v37 = v105[1];
    v60 = v106[0];
    v120[0] = (int)o_roundf();
    v120[1] = (int)o_roundf();
    v120[2] = (int)o_roundf();
    v120[3] = (int)o_roundf();
    sub_1800AEC7C(&v83, &v109, v120);
    v84 = v83;
    sub_18006AAEC(v107, &v84);
    v40 = (v109.m128i_i32[2] - v109.m128i_i32[0]) * (v109.m128i_i32[3] - v109.m128i_i32[1]) == 0;
  }
  else
  {
    v33 = v114;
    v30 = v111;
    v34 = v115;
    v31 = v112;
    sub_18006AC60(v107, v111, v112, v114 - v111, COERCE_INT(v115 - v112), v113, v116);
    v85 = v26;
    sub_18006AAEC(v107, (__int128 *)v85.m128i_i8);
    v40 = (_mm_cvtsi128_si32(_mm_srli_si128(v26, 8)) - _mm_cvtsi128_si32(v26))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v26, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v26, 4))) == 0;
    v37 = 1065353216;
  }
  if ( v30 == v33 || v31 == v34 )
    v27 = 1;
  if ( v40 )
  {
    v41 = (const char *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v41 = *(const char **)v41;
    sub_18011D988(
      &unk_18025C7A0,
      4LL,
      "Warning: camera '%s' scissor rectangle is empty -- no pixels will be rendered",
      v41);
  }
  if ( v27 )
  {
    v42 = (const char *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v42 = *(const char **)v42;
    sub_18011D988(
      &unk_18025C7A0,
      4LL,
      "Warning: camera '%s' viewport rectangle is empty -- no pixels will be rendered",
      v42);
  }
  LOBYTE(v38) = *(_BYTE *)(a1 + 465);
  if ( (v38 & 1) != 0 && *(_QWORD *)(a1 + 136) )
  {
    v86 = *(_OWORD *)(a1 + 296);
    (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v107 + 88LL))(v107, a1 + 136, &v86);
    LOBYTE(v38) = *(_BYTE *)(a1 + 465);
  }
  if ( (v38 & 6) != 0 && *(_QWORD *)(a1 + 152) )
  {
    LOBYTE(v39) = (v38 & 4) != 0;
    LOBYTE(v38) = (v38 & 2) != 0;
    LOBYTE(v59) = *(_BYTE *)(a1 + 464);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, int))(*(_QWORD *)v107 + 104LL))(
      v107,
      a1 + 152,
      v38,
      v39,
      *(_DWORD *)(a1 + 312),
      v59);
  }
  v43 = sub_1800F0DA4(a1);
  v44 = sub_180078118(v43);
  v45 = 0LL;
  v46 = 0LL;
  v47 = *(_QWORD *)(a1 + 64);
  if ( v47 )
  {
    while ( 1 )
    {
      v48 = *(_DWORD *)(v47 + 8);
      if ( !v48 )
        break;
      if ( v48 == _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 8), v48 + 1, v48) )
      {
        v45 = *(_QWORD *)(a1 + 56);
        v46 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  v87 = v45;
  v88 = v46;
  sub_180083DF0(v45, (__int64)&v102);
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
      if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
    }
  }
  v49 = 1065353216;
  if ( *(_DWORD *)(a1 + 316) == 3 )
  {
    v50 = 0LL;
    v51 = 0LL;
    v52 = *(_QWORD *)(a1 + 64);
    if ( v52 )
    {
      while ( 1 )
      {
        v53 = *(_DWORD *)(v52 + 8);
        if ( !v53 )
          break;
        if ( v53 == _InterlockedCompareExchange((volatile signed __int32 *)(v52 + 8), v53 + 1, v53) )
        {
          v50 = *(_QWORD *)(a1 + 56);
          v51 = *(volatile signed __int32 **)(a1 + 64);
          break;
        }
      }
    }
    v89 = v50;
    v90 = v51;
    v54 = (float *)sub_180083644(v50, (__int64)v100);
    *(float *)&v61 = -v54[8];
    *((float *)&v61 + 1) = -v54[9];
    v55 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v61, (__m128)COERCE_UNSIGNED_INT(-v54[10])));
    v102 = v55.m128_i32[0];
    v103 = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
    v104 = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
      }
    }
    v49 = 0;
  }
  v70 = v102;
  v71 = v103;
  v72 = v104;
  v73 = v49;
  sub_1800A51B0(v44);
  v66 = v20;
  v67 = v37;
  v68 = v60;
  v69 = v21;
  sub_1800A51B0(v44);
  sub_1800A511C(v44);
  v123 = xmmword_1801F2AC0;
  v124 = xmmword_1801F2AD0;
  v125 = xmmword_1801F2AE0;
  v126 = xmmword_1801E38A0;
  v56 = sub_1800AE9B8(a1, v101);
  sub_1800B1790(v56, &v123);
  v95 = v123;
  v96 = v124;
  v97 = v125;
  v98 = v126;
  sub_1800A5110(v44);
  sub_1800AE934(a1, &v64);
  result = sub_1800A51B0(v44);
  v58 = v108;
  if ( v108 )
  {
    result = (unsigned int)_InterlockedDecrement(v108 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v58)(v58);
      result = (unsigned int)_InterlockedDecrement(v58 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
    }
  }
  return result;
}
