/*
 * XREFs of sub_18005E510 @ 0x18005E510
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
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     sub_180056A54 @ 0x180056A54 (sub_180056A54.c)
 *     sub_18005E36C @ 0x18005E36C (sub_18005E36C.c)
 *     sub_1800D45C8 @ 0x1800D45C8 (sub_1800D45C8.c)
 *     sub_1800D46B4 @ 0x1800D46B4 (sub_1800D46B4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=108
__int64 sub_18005E510()
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
  if ( dword_18026AD98 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AD98);
    if ( dword_18026AD98 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C97C0;
      *((_QWORD *)&Src + 1) = &unk_1801C9F00;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005E36C();
      v5 = (_QWORD *)sub_1800D45C8(v124);
      v6 = sub_180056A54(v5, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
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
      byte_18026AD94 = sub_1800D46B4(&v128, &v126);
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
      Init_thread_footer(&dword_18026AD98);
    }
  }
  if ( dword_18026ADA0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADA0);
    if ( dword_18026ADA0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C9F00;
      *((_QWORD *)&Src + 1) = &unk_1801CA748;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v10 = (_QWORD *)sub_1800D45C8(v124);
      v11 = sub_180056A54(v10, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
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
      byte_18026AD9C = sub_1800D46B4(&v128, &v126);
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
      Init_thread_footer(&dword_18026ADA0);
    }
  }
  if ( dword_18026ADA8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADA8);
    if ( dword_18026ADA8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CA750;
      *((_QWORD *)&Src + 1) = &unk_1801CB004;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v15 = (_QWORD *)sub_1800D45C8(v124);
      v16 = sub_180056A54(v15, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
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
      byte_18026ADA4 = sub_1800D46B4(&v128, &v126);
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
      Init_thread_footer(&dword_18026ADA8);
    }
  }
  if ( dword_18026ADB0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADB0);
    if ( dword_18026ADB0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CB010;
      *((_QWORD *)&Src + 1) = &unk_1801CB9CC;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v20 = (_QWORD *)sub_1800D45C8(v124);
      v21 = sub_180056A54(v20, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
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
      byte_18026ADAC = sub_1800D46B4(&v128, &v126);
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
      Init_thread_footer(&dword_18026ADB0);
    }
  }
  if ( dword_18026ADB8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADB8);
    if ( dword_18026ADB8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CB9D0;
      *((_QWORD *)&Src + 1) = &unk_1801CC1CC;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v25 = (_QWORD *)sub_1800D45C8(v124);
      v26 = sub_180056A54(v25, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
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
      byte_18026ADB4 = sub_1800D46B4(&v128, &v126);
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
      Init_thread_footer(&dword_18026ADB8);
    }
  }
  if ( dword_18026ADC0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADC0);
    if ( dword_18026ADC0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CC1D0;
      *((_QWORD *)&Src + 1) = &unk_1801CCAD4;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v30 = (_QWORD *)sub_1800D45C8(v124);
      v31 = sub_180056A54(v30, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
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
      byte_18026ADBC = sub_1800D46B4(&v128, &v126);
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
      Init_thread_footer(&dword_18026ADC0);
    }
  }
  if ( dword_18026ADC8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADC8);
    if ( dword_18026ADC8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CCAE0;
      *((_QWORD *)&Src + 1) = &unk_1801CD444;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v35 = sub_1800D45C8(&Src);
      v36 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v35);
      v37 = sub_18002C088((__int64)v124, v36, "/Pixel");
      byte_18026ADC4 = sub_1800D46B4(v37, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026ADC8);
    }
  }
  if ( dword_18026ADD0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADD0);
    if ( dword_18026ADD0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CD450;
      *((_QWORD *)&Src + 1) = &unk_1801CDEBC;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v38 = sub_1800D45C8(&Src);
      v39 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v38);
      v40 = sub_18002C088((__int64)v124, v39, "/Pixel");
      byte_18026ADCC = sub_1800D46B4(v40, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026ADD0);
    }
  }
  if ( dword_18026ADD8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADD8);
    if ( dword_18026ADD8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CDEC0;
      *((_QWORD *)&Src + 1) = &unk_1801CE808;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v41 = sub_1800D45C8(&Src);
      v42 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v41);
      v43 = sub_18002C088((__int64)v124, v42, "/Pixel");
      byte_18026ADD4 = sub_1800D46B4(v43, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026ADD8);
    }
  }
  if ( dword_18026ADE0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADE0);
    if ( dword_18026ADE0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CE810;
      *((_QWORD *)&Src + 1) = &unk_1801CF260;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v44 = sub_1800D45C8(&Src);
      v45 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v44);
      v46 = sub_18002C088((__int64)v124, v45, "/Pixel");
      byte_18026ADDC = sub_1800D46B4(v46, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026ADE0);
    }
  }
  if ( dword_18026ADE8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADE8);
    if ( dword_18026ADE8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CF260;
      *((_QWORD *)&Src + 1) = &unk_1801CFD10;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v47 = sub_1800D45C8(&Src);
      v48 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v47);
      v49 = sub_18002C088((__int64)v124, v48, "/Pixel");
      byte_18026ADE4 = sub_1800D46B4(v49, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026ADE8);
    }
  }
  if ( dword_18026ADF0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADF0);
    if ( dword_18026ADF0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801CFD10;
      *((_QWORD *)&Src + 1) = &unk_1801D08C8;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v50 = sub_1800D45C8(&Src);
      v51 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v50);
      v52 = sub_18002C088((__int64)v124, v51, "/Pixel");
      byte_18026ADEC = sub_1800D46B4(v52, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026ADF0);
    }
  }
  if ( dword_18026ADF8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026ADF8);
    if ( dword_18026ADF8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D08D0;
      *((_QWORD *)&Src + 1) = &unk_1801D12C8;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v53 = sub_1800D45C8(&Src);
      v54 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v53);
      v55 = sub_18002C088((__int64)v124, v54, "/Pixel");
      byte_18026ADF4 = sub_1800D46B4(v55, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026ADF8);
    }
  }
  if ( dword_18026AE00 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE00);
    if ( dword_18026AE00 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D12D0;
      *((_QWORD *)&Src + 1) = &unk_1801D1DD0;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v56 = sub_1800D45C8(&Src);
      v57 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v56);
      v58 = sub_18002C088((__int64)v124, v57, "/Pixel");
      byte_18026ADFC = sub_1800D46B4(v58, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE00);
    }
  }
  if ( dword_18026AE08 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE08);
    if ( dword_18026AE08 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D1DD0;
      *((_QWORD *)&Src + 1) = &unk_1801D2930;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v59 = sub_1800D45C8(&Src);
      v60 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v59);
      v61 = sub_18002C088((__int64)v124, v60, "/Pixel");
      byte_18026AE04 = sub_1800D46B4(v61, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE08);
    }
  }
  if ( dword_18026AE10 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE10);
    if ( dword_18026AE10 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D2930;
      *((_QWORD *)&Src + 1) = &unk_1801D3598;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v62 = sub_1800D45C8(&Src);
      v63 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v62);
      v64 = sub_18002C088((__int64)v124, v63, "/Pixel");
      byte_18026AE0C = sub_1800D46B4(v64, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE10);
    }
  }
  if ( dword_18026AE18 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE18);
    if ( dword_18026AE18 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D35A0;
      *((_QWORD *)&Src + 1) = &unk_1801D378C;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v65 = sub_1800D45C8(&Src);
      v66 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v65);
      v67 = sub_18002C088((__int64)v124, v66, "/Pixel");
      byte_18026AE14 = sub_1800D46B4(v67, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE18);
    }
  }
  if ( dword_18026AE20 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE20);
    if ( dword_18026AE20 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D3790;
      *((_QWORD *)&Src + 1) = &unk_1801D5320;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v68 = sub_1800D45C8(&Src);
      v69 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v68);
      v70 = sub_18002C088((__int64)v124, v69, "/Pixel");
      byte_18026AE1C = sub_1800D46B4(v70, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE20);
    }
  }
  if ( dword_18026AE28 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE28);
    if ( dword_18026AE28 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v71 = sub_1800D45C8(&Src);
      v72 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v71);
      v73 = sub_18002C088((__int64)v124, v72, "/Vertex");
      byte_18026AE24 = sub_1800D46B4(v73, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE28);
    }
  }
  if ( dword_18026AE30 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE30);
    if ( dword_18026AE30 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v74 = sub_1800D45C8(&Src);
      v75 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v74);
      v76 = sub_18002C088((__int64)v124, v75, "/Vertex");
      byte_18026AE2C = sub_1800D46B4(v76, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE30);
    }
  }
  if ( dword_18026AE38 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE38);
    if ( dword_18026AE38 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v77 = sub_1800D45C8(&Src);
      v78 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v77);
      v79 = sub_18002C088((__int64)v124, v78, "/Vertex");
      byte_18026AE34 = sub_1800D46B4(v79, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE38);
    }
  }
  if ( dword_18026AE40 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE40);
    if ( dword_18026AE40 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v80 = sub_1800D45C8(&Src);
      v81 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v80);
      v82 = sub_18002C088((__int64)v124, v81, "/Vertex");
      byte_18026AE3C = sub_1800D46B4(v82, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE40);
    }
  }
  if ( dword_18026AE48 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE48);
    if ( dword_18026AE48 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v83 = sub_1800D45C8(&Src);
      v84 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v83);
      v85 = sub_18002C088((__int64)v124, v84, "/Vertex");
      byte_18026AE44 = sub_1800D46B4(v85, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE48);
    }
  }
  if ( dword_18026AE50 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE50);
    if ( dword_18026AE50 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v86 = sub_1800D45C8(&Src);
      v87 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v86);
      v88 = sub_18002C088((__int64)v124, v87, "/Vertex");
      byte_18026AE4C = sub_1800D46B4(v88, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE50);
    }
  }
  if ( dword_18026AE58 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE58);
    if ( dword_18026AE58 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v89 = sub_1800D45C8(&Src);
      v90 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v89);
      v91 = sub_18002C088((__int64)v124, v90, "/Vertex");
      byte_18026AE54 = sub_1800D46B4(v91, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE58);
    }
  }
  if ( dword_18026AE60 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE60);
    if ( dword_18026AE60 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v92 = sub_1800D45C8(&Src);
      v93 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v92);
      v94 = sub_18002C088((__int64)v124, v93, "/Vertex");
      byte_18026AE5C = sub_1800D46B4(v94, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE60);
    }
  }
  if ( dword_18026AE68 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE68);
    if ( dword_18026AE68 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v95 = sub_1800D45C8(&Src);
      v96 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v95);
      v97 = sub_18002C088((__int64)v124, v96, "/Vertex");
      byte_18026AE64 = sub_1800D46B4(v97, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE68);
    }
  }
  if ( dword_18026AE70 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE70);
    if ( dword_18026AE70 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v98 = sub_1800D45C8(&Src);
      v99 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v98);
      v100 = sub_18002C088((__int64)v124, v99, "/Vertex");
      byte_18026AE6C = sub_1800D46B4(v100, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE70);
    }
  }
  if ( dword_18026AE78 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE78);
    if ( dword_18026AE78 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v101 = sub_1800D45C8(&Src);
      v102 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v101);
      v103 = sub_18002C088((__int64)v124, v102, "/Vertex");
      byte_18026AE74 = sub_1800D46B4(v103, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE78);
    }
  }
  if ( dword_18026AE80 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE80);
    if ( dword_18026AE80 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v104 = sub_1800D45C8(&Src);
      v105 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v104);
      v106 = sub_18002C088((__int64)v124, v105, "/Vertex");
      byte_18026AE7C = sub_1800D46B4(v106, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE80);
    }
  }
  if ( dword_18026AE88 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE88);
    if ( dword_18026AE88 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v107 = sub_1800D45C8(&Src);
      v108 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v107);
      v109 = sub_18002C088((__int64)v124, v108, "/Vertex");
      byte_18026AE84 = sub_1800D46B4(v109, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE88);
    }
  }
  if ( dword_18026AE90 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE90);
    if ( dword_18026AE90 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v110 = sub_1800D45C8(&Src);
      v111 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v110);
      v112 = sub_18002C088((__int64)v124, v111, "/Vertex");
      byte_18026AE8C = sub_1800D46B4(v112, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE90);
    }
  }
  if ( dword_18026AE98 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AE98);
    if ( dword_18026AE98 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v113 = sub_1800D45C8(&Src);
      v114 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v113);
      v115 = sub_18002C088((__int64)v124, v114, "/Vertex");
      byte_18026AE94 = sub_1800D46B4(v115, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AE98);
    }
  }
  if ( dword_18026AEA0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEA0);
    if ( dword_18026AEA0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v116 = sub_1800D45C8(&Src);
      v117 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v116);
      v118 = sub_18002C088((__int64)v124, v117, "/Vertex");
      byte_18026AE9C = sub_1800D46B4(v118, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AEA0);
    }
  }
  if ( dword_18026AEA8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEA8);
    if ( dword_18026AEA8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5A50;
      *((_QWORD *)&Src + 1) = &unk_1801D5E68;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v119 = sub_1800D45C8(&Src);
      v120 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v119);
      v121 = sub_18002C088((__int64)v124, v120, "/Vertex");
      byte_18026AEA4 = sub_1800D46B4(v121, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AEA8);
    }
  }
  if ( dword_18026AEB0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AEB0);
    if ( dword_18026AEB0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801D5320;
      *((_QWORD *)&Src + 1) = &unk_1801D5A50;
      *(_QWORD *)&v125 = 0x100000001LL;
      v126 = Src;
      v127 = v125;
      sub_18005E36C();
      v2 = sub_1800D45C8(&Src);
      v3 = (_QWORD *)sub_1800454BC((__int64)&v128, (__int64)"BackgroundUnlit/ShaderModel40/", v2);
      v4 = sub_18002C088((__int64)v124, v3, "/Vertex");
      byte_18026AEAC = sub_1800D46B4(v4, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v128);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_18026AEB0);
    }
  }
  return 0LL;
}
