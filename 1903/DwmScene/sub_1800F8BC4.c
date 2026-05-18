/*
 * XREFs of sub_1800F8BC4 @ 0x1800F8BC4
 * Callers:
 *     sub_1800A865C @ 0x1800A865C (sub_1800A865C.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800F0340 @ 0x1800F0340 (sub_1800F0340.c)
 *     sub_1800F8ACC @ 0x1800F8ACC (sub_1800F8ACC.c)
 *     sub_1800F93D4 @ 0x1800F93D4 (sub_1800F93D4.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180017CD4 @ 0x180017CD4 (sub_180017CD4.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_1800A4330 @ 0x1800A4330 (sub_1800A4330.c)
 *     sub_1800A51E4 @ 0x1800A51E4 (sub_1800A51E4.c)
 *     sub_1800A53B8 @ 0x1800A53B8 (sub_1800A53B8.c)
 *     sub_1800A6058 @ 0x1800A6058 (sub_1800A6058.c)
 *     sub_1800A9304 @ 0x1800A9304 (sub_1800A9304.c)
 *     sub_1800A9338 @ 0x1800A9338 (sub_1800A9338.c)
 *     sub_1800F899C @ 0x1800F899C (sub_1800F899C.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800F8BC4(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  const void **v13; // rax
  const void *v14; // rdx
  __m128i *v15; // rax
  __m128i *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rcx
  const void *v22; // rcx
  const void *v23; // rcx
  const void *v24; // rcx
  const void *v25; // rcx
  const void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 result; // rax
  volatile signed __int32 *v30; // rdi
  signed __int32 v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  __m128i v45; // [rsp+28h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-C8h]
  __m128i Src; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v48; // [rsp+58h] [rbp-A8h]
  _QWORD v49[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v50; // [rsp+78h] [rbp-88h]
  char *v51; // [rsp+88h] [rbp-78h] BYREF
  __m128i v52; // [rsp+98h] [rbp-68h]
  __int64 v53[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v54[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v55[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v56[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v57[5]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v58[3]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v59; // [rsp+168h] [rbp+68h]
  __int64 *v60[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD *v61[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v62; // [rsp+190h] [rbp+90h] BYREF
  volatile signed __int32 *v63; // [rsp+198h] [rbp+98h]
  __int128 v64; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v65; // [rsp+1B0h] [rbp+B0h]
  _QWORD v66[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __m128i v67; // [rsp+1D0h] [rbp+D0h]
  const void *v68[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __m128i v69; // [rsp+1F0h] [rbp+F0h]
  const void *v70[2]; // [rsp+200h] [rbp+100h] BYREF
  __m128i v71; // [rsp+210h] [rbp+110h]
  const void *v72[2]; // [rsp+220h] [rbp+120h] BYREF
  __m128i v73; // [rsp+230h] [rbp+130h]
  const void *v74[2]; // [rsp+240h] [rbp+140h] BYREF
  __m128i v75; // [rsp+250h] [rbp+150h]
  const void *v76[2]; // [rsp+260h] [rbp+160h] BYREF
  __m128i v77; // [rsp+270h] [rbp+170h]

  v57[4] = -2LL;
  v60[1] = a2;
  v60[0] = a4;
  if ( !a2[2] )
  {
    v8 = a1[2] + 496LL;
    v50 = 0LL;
    sub_18000F3F4(v49, v8);
    sub_180017CD4(a2, (__int64)v49);
    if ( *((_QWORD *)&v50 + 1) >= 0x10uLL )
    {
      v9 = v49[0];
      if ( (unsigned __int64)(*((_QWORD *)&v50 + 1) + 1LL) >= 0x1000 )
      {
        v9 = *(_QWORD *)(v49[0] - 8LL);
        if ( (unsigned __int64)(v49[0] - v9 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v9, *((_QWORD *)&v50 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v9);
    }
  }
  if ( !a4[2] )
  {
    v10 = sub_1800A9338(a1[2]);
    v11 = sub_1800A51E4(v58, v10);
    sub_180017CD4(a4, (__int64)v11);
    if ( v59 >= 0x10 )
    {
      v12 = v58[0];
      if ( v59 + 1 >= 0x1000 )
      {
        v12 = *(_QWORD *)(v58[0] - 8);
        if ( (unsigned __int64)(v58[0] - v12 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v12, v59 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v12);
    }
  }
  v62 = 0LL;
  v63 = 0LL;
  sub_1800A9304(a1[2], &v62);
  v61[0] = 0LL;
  v61[1] = 0LL;
  sub_1800A4330(v62, v61, a3);
  sub_1800A53B8(v66, v61);
  v13 = sub_18002BFD4((const void **)&v51, a2, byte_18020AC58);
  v14 = a4;
  if ( (unsigned __int64)a4[3] >= 0x10 )
    v14 = (const void *)*a4;
  v15 = (__m128i *)std::string::append(v13, v14, a4[2]);
  v48 = 0LL;
  Src = *v15;
  v48 = v15[1];
  v15[1].m128i_i64[0] = 0LL;
  v15[1].m128i_i64[1] = 15LL;
  v15->m128i_i8[0] = 0;
  v16 = (__m128i *)std::string::append(&Src, &unk_18020AC54, 1uLL);
  si128 = 0LL;
  v45 = *v16;
  si128 = v16[1];
  v16[1].m128i_i64[0] = 0LL;
  v16[1].m128i_i64[1] = 15LL;
  v16->m128i_i8[0] = 0;
  v17 = v66;
  if ( v67.m128i_i64[1] >= 0x10uLL )
    v17 = (_QWORD *)v66[0];
  v18 = std::string::append(&v45, v17, v67.m128i_u64[0]);
  v64 = *(_OWORD *)v18;
  v65 = *((_OWORD *)v18 + 1);
  v18[2] = 0LL;
  v18[3] = 15LL;
  *(_BYTE *)v18 = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v19 = v45.m128i_i64[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v19 = *(_QWORD *)(v45.m128i_i64[0] - 8);
      if ( (unsigned __int64)(v45.m128i_i64[0] - v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v19);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  v45.m128i_i8[0] = 0;
  if ( v48.m128i_i64[1] >= 0x10uLL )
  {
    v20 = Src.m128i_i64[0];
    if ( (unsigned __int64)(v48.m128i_i64[1] + 1) >= 0x1000 )
    {
      v20 = *(_QWORD *)(Src.m128i_i64[0] - 8);
      if ( (unsigned __int64)(Src.m128i_i64[0] - v20 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v20, v48.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v20);
  }
  v48 = _mm_load_si128(xmmword_180144F90);
  Src.m128i_i8[0] = 0;
  if ( v52.m128i_i64[1] >= 0x10uLL )
  {
    v21 = v51;
    if ( (unsigned __int64)(v52.m128i_i64[1] + 1) >= 0x1000 )
    {
      v21 = (char *)*((_QWORD *)v51 - 1);
      if ( (unsigned __int64)(v51 - v21 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v21, v52.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v21);
  }
  v52 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v51) = 0;
  sub_18002BFD4(v76, &v64, "/Vertex");
  sub_18002BFD4(v74, &v64, "/Pixel");
  sub_18002BFD4(v72, &v64, "/Geometry");
  sub_18002BFD4(v70, &v64, "/Domain");
  sub_18002BFD4(v68, &v64, "/Hull");
  v53[2] = 0LL;
  v53[3] = 0LL;
  sub_18000F3F4(v53, (__int64)v76);
  sub_1800F899C(a1, 1, v53);
  v54[2] = 0LL;
  v54[3] = 0LL;
  sub_18000F3F4(v54, (__int64)v74);
  sub_1800F899C(a1, 5, v54);
  v55[2] = 0LL;
  v55[3] = 0LL;
  sub_18000F3F4(v55, (__int64)v72);
  sub_1800F899C(a1, 4, v55);
  v56[2] = 0LL;
  v56[3] = 0LL;
  sub_18000F3F4(v56, (__int64)v70);
  sub_1800F899C(a1, 3, v56);
  v57[2] = 0LL;
  v57[3] = 0LL;
  sub_18000F3F4(v57, (__int64)v68);
  sub_1800F899C(a1, 2, v57);
  if ( v69.m128i_i64[1] >= 0x10uLL )
  {
    v22 = v68[0];
    if ( (unsigned __int64)(v69.m128i_i64[1] + 1) >= 0x1000 )
    {
      v22 = (const void *)*((_QWORD *)v68[0] - 1);
      if ( (unsigned __int64)((char *)v68[0] - (char *)v22 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v22, v69.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v22);
  }
  v69 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v68[0]) = 0;
  if ( v71.m128i_i64[1] >= 0x10uLL )
  {
    v23 = v70[0];
    if ( (unsigned __int64)(v71.m128i_i64[1] + 1) >= 0x1000 )
    {
      v23 = (const void *)*((_QWORD *)v70[0] - 1);
      if ( (unsigned __int64)((char *)v70[0] - (char *)v23 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v23, v71.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v23);
  }
  v71 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v70[0]) = 0;
  if ( v73.m128i_i64[1] >= 0x10uLL )
  {
    v24 = v72[0];
    if ( (unsigned __int64)(v73.m128i_i64[1] + 1) >= 0x1000 )
    {
      v24 = (const void *)*((_QWORD *)v72[0] - 1);
      if ( (unsigned __int64)((char *)v72[0] - (char *)v24 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v24, v73.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v24);
  }
  v73 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v72[0]) = 0;
  if ( v75.m128i_i64[1] >= 0x10uLL )
  {
    v25 = v74[0];
    if ( (unsigned __int64)(v75.m128i_i64[1] + 1) >= 0x1000 )
    {
      v25 = (const void *)*((_QWORD *)v74[0] - 1);
      if ( (unsigned __int64)((char *)v74[0] - (char *)v25 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v25, v75.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v25);
  }
  v75 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v74[0]) = 0;
  if ( v77.m128i_i64[1] >= 0x10uLL )
  {
    v26 = v76[0];
    if ( (unsigned __int64)(v77.m128i_i64[1] + 1) >= 0x1000 )
    {
      v26 = (const void *)*((_QWORD *)v76[0] - 1);
      if ( (unsigned __int64)((char *)v76[0] - (char *)v26 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v26, v77.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v26);
  }
  v77 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v76[0]) = 0;
  if ( *((_QWORD *)&v65 + 1) >= 0x10uLL )
  {
    v27 = v64;
    if ( (unsigned __int64)(*((_QWORD *)&v65 + 1) + 1LL) >= 0x1000 )
    {
      v27 = *(_QWORD *)(v64 - 8);
      if ( (unsigned __int64)(v64 - v27 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v27, *((_QWORD *)&v65 + 1) + 40LL);
        __debugbreak();
      }
    }
    j_j__o_free(v27);
  }
  if ( v67.m128i_i64[1] >= 0x10uLL )
  {
    v28 = v66[0];
    if ( (unsigned __int64)(v67.m128i_i64[1] + 1) >= 0x1000 )
    {
      v28 = *(_QWORD *)(v66[0] - 8LL);
      if ( (unsigned __int64)(v66[0] - v28 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v28, v67.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v28);
  }
  v67 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v66[0]) = 0;
  sub_1800A6058((__int64 ***)v61, v60, *(__int64 **)v61[0], v61[0]);
  result = j_j__o_free(v61[0]);
  v30 = v63;
  if ( v63 )
  {
    v31 = _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF);
    v32 = v31 == 1;
    result = (unsigned int)(v31 - 1);
    if ( v32 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      result = (unsigned int)_InterlockedDecrement(v30 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  v33 = a2[3];
  if ( v33 >= 0x10 )
  {
    v34 = *a2;
    v35 = v33 + 1;
    if ( v35 >= 0x1000 )
    {
      v36 = v35 + 39;
      v37 = *(_QWORD *)(v34 - 8);
      v38 = v34 - v37;
      if ( (unsigned __int64)(v38 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v38, v36);
        goto LABEL_83;
      }
      v34 = v37;
    }
    result = j_j__o_free(v34);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v39 = a4[3];
  if ( v39 >= 0x10 )
  {
    v40 = v39 + 1;
    v41 = *a4;
    if ( v40 < 0x1000 )
    {
LABEL_80:
      result = j_j__o_free(v41);
      goto LABEL_81;
    }
    v42 = v40 + 39;
    v43 = *(_QWORD *)(v41 - 8);
    v44 = v41 - v43;
    if ( (unsigned __int64)(v44 - 8) <= 0x1F )
    {
      v41 = v43;
      goto LABEL_80;
    }
LABEL_83:
    o__invalid_parameter_noinfo_noreturn(v44, v42);
    JUMPOUT(0x1800F93D2LL);
  }
LABEL_81:
  a4[2] = 0LL;
  a4[3] = 15LL;
  *(_BYTE *)a4 = 0;
  return result;
}
