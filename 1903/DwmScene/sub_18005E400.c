/*
 * XREFs of sub_18005E400 @ 0x18005E400
 * Callers:
 *     sub_1800011F0 @ 0x1800011F0 (sub_1800011F0.c)
 *     sub_180001400 @ 0x180001400 (sub_180001400.c)
 *     sub_1800014F0 @ 0x1800014F0 (sub_1800014F0.c)
 *     sub_1800015E0 @ 0x1800015E0 (sub_1800015E0.c)
 *     sub_1800016D0 @ 0x1800016D0 (sub_1800016D0.c)
 *     sub_1800017C0 @ 0x1800017C0 (sub_1800017C0.c)
 *     sub_1800018B0 @ 0x1800018B0 (sub_1800018B0.c)
 *     sub_1800019A0 @ 0x1800019A0 (sub_1800019A0.c)
 *     sub_180001A90 @ 0x180001A90 (sub_180001A90.c)
 *     sub_180001B80 @ 0x180001B80 (sub_180001B80.c)
 *     sub_180001C70 @ 0x180001C70 (sub_180001C70.c)
 *     sub_180001D60 @ 0x180001D60 (sub_180001D60.c)
 *     sub_180001E50 @ 0x180001E50 (sub_180001E50.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_18005E25C @ 0x18005E25C (sub_18005E25C.c)
 *     sub_1800D44B8 @ 0x1800D44B8 (sub_1800D44B8.c)
 *     sub_1800D45A4 @ 0x1800D45A4 (sub_1800D45A4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=108
__int64 sub_18005E400()
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
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int128 Src; // [rsp+28h] [rbp-59h] BYREF
  __m128i si128; // [rsp+38h] [rbp-49h]
  _QWORD v124[2]; // [rsp+48h] [rbp-39h] BYREF
  __int128 v125; // [rsp+58h] [rbp-29h]
  __int128 v126; // [rsp+68h] [rbp-19h] BYREF
  __int128 v127; // [rsp+78h] [rbp-9h]
  __int128 v128; // [rsp+88h] [rbp+7h] BYREF
  __int128 v129; // [rsp+98h] [rbp+17h]
  __int64 v130; // [rsp+A8h] [rbp+27h]

  v130 = -2LL;
  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_180269D98 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269D98);
    if ( dword_180269D98 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C87C0;
      *((_QWORD *)&Src + 1) = &unk_1801C8F00;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005E25C();
      v5 = (_QWORD *)sub_1800D44B8(v124);
      v6 = sub_180056944(v5, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v6;
      si128 = *((__m128i *)v6 + 1);
      v6[2] = 0LL;
      v6[3] = (const void *)15;
      *(_BYTE *)v6 = 0;
      v7 = std::string::append(&Src, "/Pixel", 6uLL);
      v129 = 0uLL;
      v128 = *(_OWORD *)v7;
      v129 = *((_OWORD *)v7 + 1);
      v7[2] = 0LL;
      v7[3] = 15LL;
      *(_BYTE *)v7 = 0;
      byte_180269D94 = sub_1800D45A4(&v128, &v126);
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
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v125 + 1) >= 0x10uLL )
      {
        v9 = v124[0];
        if ( (unsigned __int64)(*((_QWORD *)&v125 + 1) + 1LL) >= 0x1000 )
        {
          v9 = *(_QWORD *)(v124[0] - 8LL);
          if ( (unsigned __int64)(v124[0] - v9 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v9, *((_QWORD *)&v125 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v9);
      }
      Init_thread_footer(&dword_180269D98);
    }
  }
  if ( dword_180269DA0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DA0);
    if ( dword_180269DA0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C8F00;
      *((_QWORD *)&Src + 1) = &unk_1801C9748;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v10 = (_QWORD *)sub_1800D44B8(v124);
      v11 = sub_180056944(v10, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v11;
      si128 = *((__m128i *)v11 + 1);
      v11[2] = 0LL;
      v11[3] = (const void *)15;
      *(_BYTE *)v11 = 0;
      v12 = std::string::append(&Src, "/Pixel", 6uLL);
      v129 = 0uLL;
      v128 = *(_OWORD *)v12;
      v129 = *((_OWORD *)v12 + 1);
      v12[2] = 0LL;
      v12[3] = 15LL;
      *(_BYTE *)v12 = 0;
      byte_180269D9C = sub_1800D45A4(&v128, &v126);
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
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v125 + 1) >= 0x10uLL )
      {
        v14 = v124[0];
        if ( (unsigned __int64)(*((_QWORD *)&v125 + 1) + 1LL) >= 0x1000 )
        {
          v14 = *(_QWORD *)(v124[0] - 8LL);
          if ( (unsigned __int64)(v124[0] - v14 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, *((_QWORD *)&v125 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v14);
      }
      Init_thread_footer(&dword_180269DA0);
    }
  }
  if ( dword_180269DA8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DA8);
    if ( dword_180269DA8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C9750;
      *((_QWORD *)&Src + 1) = &unk_1801CA004;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v15 = (_QWORD *)sub_1800D44B8(v124);
      v16 = sub_180056944(v15, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v16;
      si128 = *((__m128i *)v16 + 1);
      v16[2] = 0LL;
      v16[3] = (const void *)15;
      *(_BYTE *)v16 = 0;
      v17 = std::string::append(&Src, "/Pixel", 6uLL);
      v129 = 0uLL;
      v128 = *(_OWORD *)v17;
      v129 = *((_OWORD *)v17 + 1);
      v17[2] = 0LL;
      v17[3] = 15LL;
      *(_BYTE *)v17 = 0;
      byte_180269DA4 = sub_1800D45A4(&v128, &v126);
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
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v125 + 1) >= 0x10uLL )
      {
        v19 = v124[0];
        if ( (unsigned __int64)(*((_QWORD *)&v125 + 1) + 1LL) >= 0x1000 )
        {
          v19 = *(_QWORD *)(v124[0] - 8LL);
          if ( (unsigned __int64)(v124[0] - v19 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v19, *((_QWORD *)&v125 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v19);
      }
      Init_thread_footer(&dword_180269DA8);
    }
  }
  if ( dword_180269DB0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DB0);
    if ( dword_180269DB0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CA010;
      *((_QWORD *)&Src + 1) = &unk_1801CA9CC;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v20 = (_QWORD *)sub_1800D44B8(v124);
      v21 = sub_180056944(v20, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v21;
      si128 = *((__m128i *)v21 + 1);
      v21[2] = 0LL;
      v21[3] = (const void *)15;
      *(_BYTE *)v21 = 0;
      v22 = std::string::append(&Src, "/Pixel", 6uLL);
      v129 = 0uLL;
      v128 = *(_OWORD *)v22;
      v129 = *((_OWORD *)v22 + 1);
      v22[2] = 0LL;
      v22[3] = 15LL;
      *(_BYTE *)v22 = 0;
      byte_180269DAC = sub_1800D45A4(&v128, &v126);
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
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v125 + 1) >= 0x10uLL )
      {
        v24 = v124[0];
        if ( (unsigned __int64)(*((_QWORD *)&v125 + 1) + 1LL) >= 0x1000 )
        {
          v24 = *(_QWORD *)(v124[0] - 8LL);
          if ( (unsigned __int64)(v124[0] - v24 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v24, *((_QWORD *)&v125 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v24);
      }
      Init_thread_footer(&dword_180269DB0);
    }
  }
  if ( dword_180269DB8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DB8);
    if ( dword_180269DB8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CA9D0;
      *((_QWORD *)&Src + 1) = &unk_1801CB1CC;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v25 = (_QWORD *)sub_1800D44B8(v124);
      v26 = sub_180056944(v25, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v26;
      si128 = *((__m128i *)v26 + 1);
      v26[2] = 0LL;
      v26[3] = (const void *)15;
      *(_BYTE *)v26 = 0;
      v27 = std::string::append(&Src, "/Pixel", 6uLL);
      v129 = 0uLL;
      v128 = *(_OWORD *)v27;
      v129 = *((_OWORD *)v27 + 1);
      v27[2] = 0LL;
      v27[3] = 15LL;
      *(_BYTE *)v27 = 0;
      byte_180269DB4 = sub_1800D45A4(&v128, &v126);
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
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v125 + 1) >= 0x10uLL )
      {
        v29 = v124[0];
        if ( (unsigned __int64)(*((_QWORD *)&v125 + 1) + 1LL) >= 0x1000 )
        {
          v29 = *(_QWORD *)(v124[0] - 8LL);
          if ( (unsigned __int64)(v124[0] - v29 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v29, *((_QWORD *)&v125 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v29);
      }
      Init_thread_footer(&dword_180269DB8);
    }
  }
  if ( dword_180269DC0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DC0);
    if ( dword_180269DC0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CB1D0;
      *((_QWORD *)&Src + 1) = &unk_1801CBAD4;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v30 = (_QWORD *)sub_1800D44B8(v124);
      v31 = sub_180056944(v30, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v31;
      si128 = *((__m128i *)v31 + 1);
      v31[2] = 0LL;
      v31[3] = (const void *)15;
      *(_BYTE *)v31 = 0;
      v32 = std::string::append(&Src, "/Pixel", 6uLL);
      v129 = 0uLL;
      v128 = *(_OWORD *)v32;
      v129 = *((_OWORD *)v32 + 1);
      v32[2] = 0LL;
      v32[3] = 15LL;
      *(_BYTE *)v32 = 0;
      byte_180269DBC = sub_1800D45A4(&v128, &v126);
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
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v125 + 1) >= 0x10uLL )
      {
        v34 = v124[0];
        if ( (unsigned __int64)(*((_QWORD *)&v125 + 1) + 1LL) >= 0x1000 )
        {
          v34 = *(_QWORD *)(v124[0] - 8LL);
          if ( (unsigned __int64)(v124[0] - v34 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v34, *((_QWORD *)&v125 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v34);
      }
      Init_thread_footer(&dword_180269DC0);
    }
  }
  if ( dword_180269DC8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DC8);
    if ( dword_180269DC8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CBAE0;
      *((_QWORD *)&Src + 1) = &unk_1801CC444;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v35 = sub_1800D44B8(&Src);
      v36 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v35);
      v37 = sub_18002BF78((__int64)v124, v36, "/Pixel");
      byte_180269DC4 = sub_1800D45A4(v37, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269DC8);
    }
  }
  if ( dword_180269DD0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DD0);
    if ( dword_180269DD0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CC450;
      *((_QWORD *)&Src + 1) = &unk_1801CCEBC;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v38 = sub_1800D44B8(&Src);
      v39 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v38);
      v40 = sub_18002BF78((__int64)v124, v39, "/Pixel");
      byte_180269DCC = sub_1800D45A4(v40, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269DD0);
    }
  }
  if ( dword_180269DD8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DD8);
    if ( dword_180269DD8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CCEC0;
      *((_QWORD *)&Src + 1) = &unk_1801CD808;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v41 = sub_1800D44B8(&Src);
      v42 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v41);
      v43 = sub_18002BF78((__int64)v124, v42, "/Pixel");
      byte_180269DD4 = sub_1800D45A4(v43, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269DD8);
    }
  }
  if ( dword_180269DE0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DE0);
    if ( dword_180269DE0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CD810;
      *((_QWORD *)&Src + 1) = &unk_1801CE260;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v44 = sub_1800D44B8(&Src);
      v45 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v44);
      v46 = sub_18002BF78((__int64)v124, v45, "/Pixel");
      byte_180269DDC = sub_1800D45A4(v46, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269DE0);
    }
  }
  if ( dword_180269DE8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DE8);
    if ( dword_180269DE8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CE260;
      *((_QWORD *)&Src + 1) = &unk_1801CED10;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v47 = sub_1800D44B8(&Src);
      v48 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v47);
      v49 = sub_18002BF78((__int64)v124, v48, "/Pixel");
      byte_180269DE4 = sub_1800D45A4(v49, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269DE8);
    }
  }
  if ( dword_180269DF0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DF0);
    if ( dword_180269DF0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CED10;
      *((_QWORD *)&Src + 1) = &unk_1801CF8C8;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v50 = sub_1800D44B8(&Src);
      v51 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v50);
      v52 = sub_18002BF78((__int64)v124, v51, "/Pixel");
      byte_180269DEC = sub_1800D45A4(v52, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269DF0);
    }
  }
  if ( dword_180269DF8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269DF8);
    if ( dword_180269DF8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CF8D0;
      *((_QWORD *)&Src + 1) = &unk_1801D02C8;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v53 = sub_1800D44B8(&Src);
      v54 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v53);
      v55 = sub_18002BF78((__int64)v124, v54, "/Pixel");
      byte_180269DF4 = sub_1800D45A4(v55, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269DF8);
    }
  }
  if ( dword_180269E00 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E00);
    if ( dword_180269E00 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D02D0;
      *((_QWORD *)&Src + 1) = &unk_1801D0DD0;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v56 = sub_1800D44B8(&Src);
      v57 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v56);
      v58 = sub_18002BF78((__int64)v124, v57, "/Pixel");
      byte_180269DFC = sub_1800D45A4(v58, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E00);
    }
  }
  if ( dword_180269E08 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E08);
    if ( dword_180269E08 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D0DD0;
      *((_QWORD *)&Src + 1) = &unk_1801D1930;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v59 = sub_1800D44B8(&Src);
      v60 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v59);
      v61 = sub_18002BF78((__int64)v124, v60, "/Pixel");
      byte_180269E04 = sub_1800D45A4(v61, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E08);
    }
  }
  if ( dword_180269E10 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E10);
    if ( dword_180269E10 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D1930;
      *((_QWORD *)&Src + 1) = &unk_1801D2598;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v62 = sub_1800D44B8(&Src);
      v63 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v62);
      v64 = sub_18002BF78((__int64)v124, v63, "/Pixel");
      byte_180269E0C = sub_1800D45A4(v64, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E10);
    }
  }
  if ( dword_180269E18 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E18);
    if ( dword_180269E18 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D25A0;
      *((_QWORD *)&Src + 1) = &unk_1801D278C;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v65 = sub_1800D44B8(&Src);
      v66 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v65);
      v67 = sub_18002BF78((__int64)v124, v66, "/Pixel");
      byte_180269E14 = sub_1800D45A4(v67, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E18);
    }
  }
  if ( dword_180269E20 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E20);
    if ( dword_180269E20 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D2790;
      *((_QWORD *)&Src + 1) = &unk_1801D4320;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v68 = sub_1800D44B8(&Src);
      v69 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v68);
      v70 = sub_18002BF78((__int64)v124, v69, "/Pixel");
      byte_180269E1C = sub_1800D45A4(v70, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E20);
    }
  }
  if ( dword_180269E28 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E28);
    if ( dword_180269E28 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v71 = sub_1800D44B8(&Src);
      v72 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v71);
      v73 = sub_18002BF78((__int64)v124, v72, "/Vertex");
      byte_180269E24 = sub_1800D45A4(v73, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E28);
    }
  }
  if ( dword_180269E30 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E30);
    if ( dword_180269E30 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v74 = sub_1800D44B8(&Src);
      v75 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v74);
      v76 = sub_18002BF78((__int64)v124, v75, "/Vertex");
      byte_180269E2C = sub_1800D45A4(v76, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E30);
    }
  }
  if ( dword_180269E38 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E38);
    if ( dword_180269E38 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v77 = sub_1800D44B8(&Src);
      v78 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v77);
      v79 = sub_18002BF78((__int64)v124, v78, "/Vertex");
      byte_180269E34 = sub_1800D45A4(v79, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E38);
    }
  }
  if ( dword_180269E40 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E40);
    if ( dword_180269E40 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v80 = sub_1800D44B8(&Src);
      v81 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v80);
      v82 = sub_18002BF78((__int64)v124, v81, "/Vertex");
      byte_180269E3C = sub_1800D45A4(v82, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E40);
    }
  }
  if ( dword_180269E48 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E48);
    if ( dword_180269E48 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v83 = sub_1800D44B8(&Src);
      v84 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v83);
      v85 = sub_18002BF78((__int64)v124, v84, "/Vertex");
      byte_180269E44 = sub_1800D45A4(v85, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E48);
    }
  }
  if ( dword_180269E50 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E50);
    if ( dword_180269E50 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v86 = sub_1800D44B8(&Src);
      v87 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v86);
      v88 = sub_18002BF78((__int64)v124, v87, "/Vertex");
      byte_180269E4C = sub_1800D45A4(v88, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E50);
    }
  }
  if ( dword_180269E58 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E58);
    if ( dword_180269E58 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v89 = sub_1800D44B8(&Src);
      v90 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v89);
      v91 = sub_18002BF78((__int64)v124, v90, "/Vertex");
      byte_180269E54 = sub_1800D45A4(v91, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E58);
    }
  }
  if ( dword_180269E60 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E60);
    if ( dword_180269E60 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v92 = sub_1800D44B8(&Src);
      v93 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v92);
      v94 = sub_18002BF78((__int64)v124, v93, "/Vertex");
      byte_180269E5C = sub_1800D45A4(v94, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E60);
    }
  }
  if ( dword_180269E68 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E68);
    if ( dword_180269E68 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v95 = sub_1800D44B8(&Src);
      v96 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v95);
      v97 = sub_18002BF78((__int64)v124, v96, "/Vertex");
      byte_180269E64 = sub_1800D45A4(v97, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E68);
    }
  }
  if ( dword_180269E70 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E70);
    if ( dword_180269E70 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v98 = sub_1800D44B8(&Src);
      v99 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v98);
      v100 = sub_18002BF78((__int64)v124, v99, "/Vertex");
      byte_180269E6C = sub_1800D45A4(v100, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E70);
    }
  }
  if ( dword_180269E78 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E78);
    if ( dword_180269E78 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v101 = sub_1800D44B8(&Src);
      v102 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v101);
      v103 = sub_18002BF78((__int64)v124, v102, "/Vertex");
      byte_180269E74 = sub_1800D45A4(v103, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E78);
    }
  }
  if ( dword_180269E80 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E80);
    if ( dword_180269E80 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v104 = sub_1800D44B8(&Src);
      v105 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v104);
      v106 = sub_18002BF78((__int64)v124, v105, "/Vertex");
      byte_180269E7C = sub_1800D45A4(v106, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E80);
    }
  }
  if ( dword_180269E88 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E88);
    if ( dword_180269E88 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v107 = sub_1800D44B8(&Src);
      v108 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v107);
      v109 = sub_18002BF78((__int64)v124, v108, "/Vertex");
      byte_180269E84 = sub_1800D45A4(v109, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E88);
    }
  }
  if ( dword_180269E90 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E90);
    if ( dword_180269E90 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v110 = sub_1800D44B8(&Src);
      v111 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v110);
      v112 = sub_18002BF78((__int64)v124, v111, "/Vertex");
      byte_180269E8C = sub_1800D45A4(v112, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E90);
    }
  }
  if ( dword_180269E98 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269E98);
    if ( dword_180269E98 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v113 = sub_1800D44B8(&Src);
      v114 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v113);
      v115 = sub_18002BF78((__int64)v124, v114, "/Vertex");
      byte_180269E94 = sub_1800D45A4(v115, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269E98);
    }
  }
  if ( dword_180269EA0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269EA0);
    if ( dword_180269EA0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v116 = sub_1800D44B8(&Src);
      v117 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v116);
      v118 = sub_18002BF78((__int64)v124, v117, "/Vertex");
      byte_180269E9C = sub_1800D45A4(v118, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269EA0);
    }
  }
  if ( dword_180269EA8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269EA8);
    if ( dword_180269EA8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4A50;
      *((_QWORD *)&Src + 1) = &unk_1801D4E68;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v119 = sub_1800D44B8(&Src);
      v120 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v119);
      v121 = sub_18002BF78((__int64)v124, v120, "/Vertex");
      byte_180269EA4 = sub_1800D45A4(v121, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269EA8);
    }
  }
  if ( dword_180269EB0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269EB0);
    if ( dword_180269EB0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D4320;
      *((_QWORD *)&Src + 1) = &unk_1801D4A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E25C();
      v2 = sub_1800D44B8(&Src);
      v3 = (_QWORD *)sub_1800453AC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v2);
      v4 = sub_18002BF78((__int64)v124, v3, "/Vertex");
      byte_180269EAC = sub_1800D45A4(v4, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180269EB0);
    }
  }
  return 0LL;
}
