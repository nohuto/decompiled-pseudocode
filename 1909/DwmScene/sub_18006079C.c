/*
 * XREFs of sub_18006079C @ 0x18006079C
 * Callers:
 *     sub_1800012B0 @ 0x1800012B0 (sub_1800012B0.c)
 *     sub_1800014C0 @ 0x1800014C0 (sub_1800014C0.c)
 *     sub_1800015B0 @ 0x1800015B0 (sub_1800015B0.c)
 *     sub_1800016A0 @ 0x1800016A0 (sub_1800016A0.c)
 *     sub_180001790 @ 0x180001790 (sub_180001790.c)
 *     sub_180001880 @ 0x180001880 (sub_180001880.c)
 *     sub_180001970 @ 0x180001970 (sub_180001970.c)
 *     sub_180001A60 @ 0x180001A60 (sub_180001A60.c)
 *     sub_180001B50 @ 0x180001B50 (sub_180001B50.c)
 *     sub_180001C40 @ 0x180001C40 (sub_180001C40.c)
 *     sub_180001D30 @ 0x180001D30 (sub_180001D30.c)
 *     sub_180001E20 @ 0x180001E20 (sub_180001E20.c)
 *     sub_180001F10 @ 0x180001F10 (sub_180001F10.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     sub_180056A54 @ 0x180056A54 (sub_180056A54.c)
 *     sub_18006062C @ 0x18006062C (sub_18006062C.c)
 *     sub_1800D45C8 @ 0x1800D45C8 (sub_1800D45C8.c)
 *     sub_1800D46B4 @ 0x1800D46B4 (sub_1800D46B4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=120
__int64 sub_18006079C()
{
  __int64 v0; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  const void **v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  const void **v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  const void **v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  const void **v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  const void **v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  const void **v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  _QWORD *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  _QWORD *v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rax
  __int128 Src; // [rsp+28h] [rbp-59h] BYREF
  __m128i si128; // [rsp+38h] [rbp-49h]
  __int64 v135[2]; // [rsp+48h] [rbp-39h] BYREF
  __int128 v136; // [rsp+58h] [rbp-29h]
  __int128 v137; // [rsp+68h] [rbp-19h] BYREF
  __int128 v138; // [rsp+78h] [rbp-9h]
  __int128 v139; // [rsp+88h] [rbp+7h] BYREF
  __int128 v140; // [rsp+98h] [rbp+17h]
  __int64 v141; // [rsp+A8h] [rbp+27h]

  v141 = -2LL;
  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_18026AEC0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEC0);
    if ( dword_18026AEC0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6550;
      *((_QWORD *)&Src + 1) = &unk_1801D6DC4;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18006062C();
      v5 = (_QWORD *)sub_1800D45C8(v135);
      v6 = sub_180056A54(v5, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v6;
      si128 = *((__m128i *)v6 + 1);
      v6[2] = 0LL;
      v6[3] = (const void *)15;
      *(_BYTE *)v6 = 0;
      v7 = std::string::append(&Src, "/Pixel", 6uLL);
      v140 = 0uLL;
      v139 = *(_OWORD *)v7;
      v140 = *((_OWORD *)v7 + 1);
      v7[2] = 0LL;
      v7[3] = 15LL;
      *(_BYTE *)v7 = 0;
      byte_18026AEBC = sub_1800D46B4(&v139, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v8 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v8 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v8 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v8, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v8);
      }
      si128 = _mm_load_si128(xmmword_180145F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v136 + 1) >= 0x10uLL )
      {
        v9 = v135[0];
        if ( (unsigned __int64)(*((_QWORD *)&v136 + 1) + 1LL) >= 0x1000 )
        {
          v9 = *(_QWORD *)(v135[0] - 8);
          if ( (unsigned __int64)(v135[0] - v9 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v9, *((_QWORD *)&v136 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v9);
      }
      Init_thread_footer(&dword_18026AEC0);
    }
  }
  if ( dword_18026AEC8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEC8);
    if ( dword_18026AEC8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6DD0;
      *((_QWORD *)&Src + 1) = &unk_1801D6FD4;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v10 = (_QWORD *)sub_1800D45C8(v135);
      v11 = sub_180056A54(v10, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v11;
      si128 = *((__m128i *)v11 + 1);
      v11[2] = 0LL;
      v11[3] = (const void *)15;
      *(_BYTE *)v11 = 0;
      v12 = std::string::append(&Src, "/Pixel", 6uLL);
      v140 = 0uLL;
      v139 = *(_OWORD *)v12;
      v140 = *((_OWORD *)v12 + 1);
      v12[2] = 0LL;
      v12[3] = 15LL;
      *(_BYTE *)v12 = 0;
      byte_18026AEC4 = sub_1800D46B4(&v139, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v13 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v13 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v13 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v13, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v13);
      }
      si128 = _mm_load_si128(xmmword_180145F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v136 + 1) >= 0x10uLL )
      {
        v14 = v135[0];
        if ( (unsigned __int64)(*((_QWORD *)&v136 + 1) + 1LL) >= 0x1000 )
        {
          v14 = *(_QWORD *)(v135[0] - 8);
          if ( (unsigned __int64)(v135[0] - v14 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, *((_QWORD *)&v136 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v14);
      }
      Init_thread_footer(&dword_18026AEC8);
    }
  }
  if ( dword_18026AED0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AED0);
    if ( dword_18026AED0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6550;
      *((_QWORD *)&Src + 1) = &unk_1801D6DC4;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v15 = (_QWORD *)sub_1800D45C8(v135);
      v16 = sub_180056A54(v15, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v16;
      si128 = *((__m128i *)v16 + 1);
      v16[2] = 0LL;
      v16[3] = (const void *)15;
      *(_BYTE *)v16 = 0;
      v17 = std::string::append(&Src, "/Pixel", 6uLL);
      v140 = 0uLL;
      v139 = *(_OWORD *)v17;
      v140 = *((_OWORD *)v17 + 1);
      v17[2] = 0LL;
      v17[3] = 15LL;
      *(_BYTE *)v17 = 0;
      byte_18026AECC = sub_1800D46B4(&v139, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v18 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v18 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v18 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v18, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v18);
      }
      si128 = _mm_load_si128(xmmword_180145F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v136 + 1) >= 0x10uLL )
      {
        v19 = v135[0];
        if ( (unsigned __int64)(*((_QWORD *)&v136 + 1) + 1LL) >= 0x1000 )
        {
          v19 = *(_QWORD *)(v135[0] - 8);
          if ( (unsigned __int64)(v135[0] - v19 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v19, *((_QWORD *)&v136 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v19);
      }
      Init_thread_footer(&dword_18026AED0);
    }
  }
  if ( dword_18026AED8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AED8);
    if ( dword_18026AED8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6FE0;
      *((_QWORD *)&Src + 1) = &unk_1801D7CE8;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v20 = (_QWORD *)sub_1800D45C8(v135);
      v21 = sub_180056A54(v20, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v21;
      si128 = *((__m128i *)v21 + 1);
      v21[2] = 0LL;
      v21[3] = (const void *)15;
      *(_BYTE *)v21 = 0;
      v22 = std::string::append(&Src, "/Pixel", 6uLL);
      v140 = 0uLL;
      v139 = *(_OWORD *)v22;
      v140 = *((_OWORD *)v22 + 1);
      v22[2] = 0LL;
      v22[3] = 15LL;
      *(_BYTE *)v22 = 0;
      byte_18026AED4 = sub_1800D46B4(&v139, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v23 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v23 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v23 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v23, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v23);
      }
      si128 = _mm_load_si128(xmmword_180145F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v136 + 1) >= 0x10uLL )
      {
        v24 = v135[0];
        if ( (unsigned __int64)(*((_QWORD *)&v136 + 1) + 1LL) >= 0x1000 )
        {
          v24 = *(_QWORD *)(v135[0] - 8);
          if ( (unsigned __int64)(v135[0] - v24 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v24, *((_QWORD *)&v136 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v24);
      }
      Init_thread_footer(&dword_18026AED8);
    }
  }
  if ( dword_18026AEE0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEE0);
    if ( dword_18026AEE0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D7CF0;
      *((_QWORD *)&Src + 1) = &unk_1801D83E0;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v25 = (_QWORD *)sub_1800D45C8(v135);
      v26 = sub_180056A54(v25, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v26;
      si128 = *((__m128i *)v26 + 1);
      v26[2] = 0LL;
      v26[3] = (const void *)15;
      *(_BYTE *)v26 = 0;
      v27 = std::string::append(&Src, "/Pixel", 6uLL);
      v140 = 0uLL;
      v139 = *(_OWORD *)v27;
      v140 = *((_OWORD *)v27 + 1);
      v27[2] = 0LL;
      v27[3] = 15LL;
      *(_BYTE *)v27 = 0;
      byte_18026AEDC = sub_1800D46B4(&v139, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v28 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v28 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v28 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v28, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v28);
      }
      si128 = _mm_load_si128(xmmword_180145F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v136 + 1) >= 0x10uLL )
      {
        v29 = v135[0];
        if ( (unsigned __int64)(*((_QWORD *)&v136 + 1) + 1LL) >= 0x1000 )
        {
          v29 = *(_QWORD *)(v135[0] - 8);
          if ( (unsigned __int64)(v135[0] - v29 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v29, *((_QWORD *)&v136 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v29);
      }
      Init_thread_footer(&dword_18026AEE0);
    }
  }
  if ( dword_18026AEE8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEE8);
    if ( dword_18026AEE8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6FE0;
      *((_QWORD *)&Src + 1) = &unk_1801D7CE8;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v30 = (_QWORD *)sub_1800D45C8(v135);
      v31 = sub_180056A54(v30, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v31;
      si128 = *((__m128i *)v31 + 1);
      v31[2] = 0LL;
      v31[3] = (const void *)15;
      *(_BYTE *)v31 = 0;
      v32 = std::string::append(&Src, "/Pixel", 6uLL);
      v140 = 0uLL;
      v139 = *(_OWORD *)v32;
      v140 = *((_OWORD *)v32 + 1);
      v32[2] = 0LL;
      v32[3] = 15LL;
      *(_BYTE *)v32 = 0;
      byte_18026AEE4 = sub_1800D46B4(&v139, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v33 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v33 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v33 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v33, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v33);
      }
      si128 = _mm_load_si128(xmmword_180145F90);
      LOBYTE(Src) = 0;
      std::string::_Tidy_deallocate(v135);
      Init_thread_footer(&dword_18026AEE8);
    }
  }
  if ( dword_18026AEF0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEF0);
    if ( dword_18026AEF0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D83E0;
      *((_QWORD *)&Src + 1) = &unk_1801D8FFC;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v34 = sub_1800D45C8(&Src);
      v35 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v34);
      v36 = sub_18002C088((__int64)v135, v35, "/Pixel");
      byte_18026AEEC = sub_1800D46B4(v36, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AEF0);
    }
  }
  if ( dword_18026AEF8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEF8);
    if ( dword_18026AEF8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D83E0;
      *((_QWORD *)&Src + 1) = &unk_1801D8FFC;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v37 = sub_1800D45C8(&Src);
      v38 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v37);
      v39 = sub_18002C088((__int64)v135, v38, "/Pixel");
      byte_18026AEF4 = sub_1800D46B4(v39, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AEF8);
    }
  }
  if ( dword_18026AF00 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF00);
    if ( dword_18026AF00 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D9000;
      *((_QWORD *)&Src + 1) = &unk_1801DA3B0;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v40 = sub_1800D45C8(&Src);
      v41 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v40);
      v42 = sub_18002C088((__int64)v135, v41, "/Pixel");
      byte_18026AEFC = sub_1800D46B4(v42, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF00);
    }
  }
  if ( dword_18026AF08 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF08);
    if ( dword_18026AF08 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D9000;
      *((_QWORD *)&Src + 1) = &unk_1801DA3B0;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v43 = sub_1800D45C8(&Src);
      v44 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v43);
      v45 = sub_18002C088((__int64)v135, v44, "/Pixel");
      byte_18026AF04 = sub_1800D46B4(v45, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF08);
    }
  }
  if ( dword_18026AF10 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF10);
    if ( dword_18026AF10 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6550;
      *((_QWORD *)&Src + 1) = &unk_1801D6DC4;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v46 = sub_1800D45C8(&Src);
      v47 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v46);
      v48 = sub_18002C088((__int64)v135, v47, "/Pixel");
      byte_18026AF0C = sub_1800D46B4(v48, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF10);
    }
  }
  if ( dword_18026AF18 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF18);
    if ( dword_18026AF18 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6DD0;
      *((_QWORD *)&Src + 1) = &unk_1801D6FD4;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v49 = sub_1800D45C8(&Src);
      v50 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v49);
      v51 = sub_18002C088((__int64)v135, v50, "/Pixel");
      byte_18026AF14 = sub_1800D46B4(v51, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF18);
    }
  }
  if ( dword_18026AF20 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF20);
    if ( dword_18026AF20 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6550;
      *((_QWORD *)&Src + 1) = &unk_1801D6DC4;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v52 = sub_1800D45C8(&Src);
      v53 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v52);
      v54 = sub_18002C088((__int64)v135, v53, "/Pixel");
      byte_18026AF1C = sub_1800D46B4(v54, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF20);
    }
  }
  if ( dword_18026AF28 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF28);
    if ( dword_18026AF28 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6FE0;
      *((_QWORD *)&Src + 1) = &unk_1801D7CE8;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v55 = sub_1800D45C8(&Src);
      v56 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v55);
      v57 = sub_18002C088((__int64)v135, v56, "/Pixel");
      byte_18026AF24 = sub_1800D46B4(v57, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF28);
    }
  }
  if ( dword_18026AF30 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF30);
    if ( dword_18026AF30 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D7CF0;
      *((_QWORD *)&Src + 1) = &unk_1801D83E0;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v58 = sub_1800D45C8(&Src);
      v59 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v58);
      v60 = sub_18002C088((__int64)v135, v59, "/Pixel");
      byte_18026AF2C = sub_1800D46B4(v60, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF30);
    }
  }
  if ( dword_18026AF38 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF38);
    if ( dword_18026AF38 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D6FE0;
      *((_QWORD *)&Src + 1) = &unk_1801D7CE8;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v61 = sub_1800D45C8(&Src);
      v62 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v61);
      v63 = sub_18002C088((__int64)v135, v62, "/Pixel");
      byte_18026AF34 = sub_1800D46B4(v63, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF38);
    }
  }
  if ( dword_18026AF40 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF40);
    if ( dword_18026AF40 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D83E0;
      *((_QWORD *)&Src + 1) = &unk_1801D8FFC;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v64 = sub_1800D45C8(&Src);
      v65 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v64);
      v66 = sub_18002C088((__int64)v135, v65, "/Pixel");
      byte_18026AF3C = sub_1800D46B4(v66, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF40);
    }
  }
  if ( dword_18026AF48 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF48);
    if ( dword_18026AF48 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D83E0;
      *((_QWORD *)&Src + 1) = &unk_1801D8FFC;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v67 = sub_1800D45C8(&Src);
      v68 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v67);
      v69 = sub_18002C088((__int64)v135, v68, "/Pixel");
      byte_18026AF44 = sub_1800D46B4(v69, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF48);
    }
  }
  if ( dword_18026AF50 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF50);
    if ( dword_18026AF50 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D9000;
      *((_QWORD *)&Src + 1) = &unk_1801DA3B0;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v70 = sub_1800D45C8(&Src);
      v71 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v70);
      v72 = sub_18002C088((__int64)v135, v71, "/Pixel");
      byte_18026AF4C = sub_1800D46B4(v72, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF50);
    }
  }
  if ( dword_18026AF58 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF58);
    if ( dword_18026AF58 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D9000;
      *((_QWORD *)&Src + 1) = &unk_1801DA3B0;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v73 = sub_1800D45C8(&Src);
      v74 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v73);
      v75 = sub_18002C088((__int64)v135, v74, "/Pixel");
      byte_18026AF54 = sub_1800D46B4(v75, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF58);
    }
  }
  if ( dword_18026AF60 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF60);
    if ( dword_18026AF60 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DA3B0;
      *((_QWORD *)&Src + 1) = &unk_1801DAAE8;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v76 = sub_1800D45C8(&Src);
      v77 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v76);
      v78 = sub_18002C088((__int64)v135, v77, "/Vertex");
      byte_18026AF5C = sub_1800D46B4(v78, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF60);
    }
  }
  if ( dword_18026AF68 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF68);
    if ( dword_18026AF68 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DAAF0;
      *((_QWORD *)&Src + 1) = &unk_1801DB074;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v79 = sub_1800D45C8(&Src);
      v80 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v79);
      v81 = sub_18002C088((__int64)v135, v80, "/Vertex");
      byte_18026AF64 = sub_1800D46B4(v81, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF68);
    }
  }
  if ( dword_18026AF70 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF70);
    if ( dword_18026AF70 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DA3B0;
      *((_QWORD *)&Src + 1) = &unk_1801DAAE8;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v82 = sub_1800D45C8(&Src);
      v83 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v82);
      v84 = sub_18002C088((__int64)v135, v83, "/Vertex");
      byte_18026AF6C = sub_1800D46B4(v84, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF70);
    }
  }
  if ( dword_18026AF78 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF78);
    if ( dword_18026AF78 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DA3B0;
      *((_QWORD *)&Src + 1) = &unk_1801DAAE8;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v85 = sub_1800D45C8(&Src);
      v86 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v85);
      v87 = sub_18002C088((__int64)v135, v86, "/Vertex");
      byte_18026AF74 = sub_1800D46B4(v87, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF78);
    }
  }
  if ( dword_18026AF80 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF80);
    if ( dword_18026AF80 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB080;
      *((_QWORD *)&Src + 1) = &unk_1801DB728;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v88 = sub_1800D45C8(&Src);
      v89 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v88);
      v90 = sub_18002C088((__int64)v135, v89, "/Vertex");
      byte_18026AF7C = sub_1800D46B4(v90, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF80);
    }
  }
  if ( dword_18026AF88 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF88);
    if ( dword_18026AF88 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DA3B0;
      *((_QWORD *)&Src + 1) = &unk_1801DAAE8;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v91 = sub_1800D45C8(&Src);
      v92 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v91);
      v93 = sub_18002C088((__int64)v135, v92, "/Vertex");
      byte_18026AF84 = sub_1800D46B4(v93, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF88);
    }
  }
  if ( dword_18026AF90 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF90);
    if ( dword_18026AF90 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DA3B0;
      *((_QWORD *)&Src + 1) = &unk_1801DAAE8;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v94 = sub_1800D45C8(&Src);
      v95 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v94);
      v96 = sub_18002C088((__int64)v135, v95, "/Vertex");
      byte_18026AF8C = sub_1800D46B4(v96, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF90);
    }
  }
  if ( dword_18026AF98 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AF98);
    if ( dword_18026AF98 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DA3B0;
      *((_QWORD *)&Src + 1) = &unk_1801DAAE8;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v97 = sub_1800D45C8(&Src);
      v98 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v97);
      v99 = sub_18002C088((__int64)v135, v98, "/Vertex");
      byte_18026AF94 = sub_1800D46B4(v99, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AF98);
    }
  }
  if ( dword_18026AFA0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFA0);
    if ( dword_18026AFA0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DA3B0;
      *((_QWORD *)&Src + 1) = &unk_1801DAAE8;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v100 = sub_1800D45C8(&Src);
      v101 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v100);
      v102 = sub_18002C088((__int64)v135, v101, "/Vertex");
      byte_18026AF9C = sub_1800D46B4(v102, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFA0);
    }
  }
  if ( dword_18026AFA8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFA8);
    if ( dword_18026AFA8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DA3B0;
      *((_QWORD *)&Src + 1) = &unk_1801DAAE8;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v103 = sub_1800D45C8(&Src);
      v104 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v103);
      v105 = sub_18002C088((__int64)v135, v104, "/Vertex");
      byte_18026AFA4 = sub_1800D46B4(v105, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFA8);
    }
  }
  if ( dword_18026AFB0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFB0);
    if ( dword_18026AFB0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB730;
      *((_QWORD *)&Src + 1) = &unk_1801DC298;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v106 = sub_1800D45C8(&Src);
      v107 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v106);
      v108 = sub_18002C088((__int64)v135, v107, "/Vertex");
      byte_18026AFAC = sub_1800D46B4(v108, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFB0);
    }
  }
  if ( dword_18026AFB8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFB8);
    if ( dword_18026AFB8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DC2A0;
      *((_QWORD *)&Src + 1) = &unk_1801DCC48;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v109 = sub_1800D45C8(&Src);
      v110 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v109);
      v111 = sub_18002C088((__int64)v135, v110, "/Vertex");
      byte_18026AFB4 = sub_1800D46B4(v111, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFB8);
    }
  }
  if ( dword_18026AFC0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFC0);
    if ( dword_18026AFC0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB730;
      *((_QWORD *)&Src + 1) = &unk_1801DC298;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v112 = sub_1800D45C8(&Src);
      v113 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v112);
      v114 = sub_18002C088((__int64)v135, v113, "/Vertex");
      byte_18026AFBC = sub_1800D46B4(v114, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFC0);
    }
  }
  if ( dword_18026AFC8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFC8);
    if ( dword_18026AFC8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB730;
      *((_QWORD *)&Src + 1) = &unk_1801DC298;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v115 = sub_1800D45C8(&Src);
      v116 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v115);
      v117 = sub_18002C088((__int64)v135, v116, "/Vertex");
      byte_18026AFC4 = sub_1800D46B4(v117, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFC8);
    }
  }
  if ( dword_18026AFD0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFD0);
    if ( dword_18026AFD0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DCC50;
      *((_QWORD *)&Src + 1) = &unk_1801DD728;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v118 = sub_1800D45C8(&Src);
      v119 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v118);
      v120 = sub_18002C088((__int64)v135, v119, "/Vertex");
      byte_18026AFCC = sub_1800D46B4(v120, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFD0);
    }
  }
  if ( dword_18026AFD8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFD8);
    if ( dword_18026AFD8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB730;
      *((_QWORD *)&Src + 1) = &unk_1801DC298;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v121 = sub_1800D45C8(&Src);
      v122 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v121);
      v123 = sub_18002C088((__int64)v135, v122, "/Vertex");
      byte_18026AFD4 = sub_1800D46B4(v123, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFD8);
    }
  }
  if ( dword_18026AFE0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFE0);
    if ( dword_18026AFE0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB730;
      *((_QWORD *)&Src + 1) = &unk_1801DC298;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v124 = sub_1800D45C8(&Src);
      v125 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v124);
      v126 = sub_18002C088((__int64)v135, v125, "/Vertex");
      byte_18026AFDC = sub_1800D46B4(v126, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFE0);
    }
  }
  if ( dword_18026AFE8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFE8);
    if ( dword_18026AFE8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB730;
      *((_QWORD *)&Src + 1) = &unk_1801DC298;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v127 = sub_1800D45C8(&Src);
      v128 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v127);
      v129 = sub_18002C088((__int64)v135, v128, "/Vertex");
      byte_18026AFE4 = sub_1800D46B4(v129, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFE8);
    }
  }
  if ( dword_18026AFF0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFF0);
    if ( dword_18026AFF0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB730;
      *((_QWORD *)&Src + 1) = &unk_1801DC298;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v130 = sub_1800D45C8(&Src);
      v131 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v130);
      v132 = sub_18002C088((__int64)v135, v131, "/Vertex");
      byte_18026AFEC = sub_1800D46B4(v132, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFF0);
    }
  }
  if ( dword_18026AFF8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AFF8);
    if ( dword_18026AFF8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801DB730;
      *((_QWORD *)&Src + 1) = &unk_1801DC298;
      *(_QWORD *)&v136 = 0x100000001LL;
      v137 = Src;
      v138 = v136;
      sub_18006062C();
      v2 = sub_1800D45C8(&Src);
      v3 = (_QWORD *)sub_1800454BC((__int64)&v139, (__int64)"UnlitShader/ShaderModel40/", v2);
      v4 = sub_18002C088((__int64)v135, v3, "/Vertex");
      byte_18026AFF4 = sub_1800D46B4(v4, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v139);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AFF8);
    }
  }
  return 0LL;
}
