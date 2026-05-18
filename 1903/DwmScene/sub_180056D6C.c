/*
 * XREFs of sub_180056D6C @ 0x180056D6C
 * Callers:
 *     sub_180001230 @ 0x180001230 (sub_180001230.c)
 *     sub_180001440 @ 0x180001440 (sub_180001440.c)
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001620 @ 0x180001620 (sub_180001620.c)
 *     sub_180001710 @ 0x180001710 (sub_180001710.c)
 *     sub_180001800 @ 0x180001800 (sub_180001800.c)
 *     sub_1800018F0 @ 0x1800018F0 (sub_1800018F0.c)
 *     sub_1800019E0 @ 0x1800019E0 (sub_1800019E0.c)
 *     sub_180001AD0 @ 0x180001AD0 (sub_180001AD0.c)
 *     sub_180001BC0 @ 0x180001BC0 (sub_180001BC0.c)
 *     sub_180001CB0 @ 0x180001CB0 (sub_180001CB0.c)
 *     sub_180001DA0 @ 0x180001DA0 (sub_180001DA0.c)
 *     sub_180001E90 @ 0x180001E90 (sub_180001E90.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_180056A34 @ 0x180056A34 (sub_180056A34.c)
 *     sub_1800D44B8 @ 0x1800D44B8 (sub_1800D44B8.c)
 *     sub_1800D45A4 @ 0x1800D45A4 (sub_1800D45A4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=18
__int64 sub_180056D6C()
{
  __int64 v0; // rbx
  _QWORD *v2; // rax
  const void **v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  const void **v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  const void **v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  const void **v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  const void **v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  const void **v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int128 Src; // [rsp+28h] [rbp-49h] BYREF
  __m128i si128; // [rsp+38h] [rbp-39h]
  __int128 v34; // [rsp+48h] [rbp-29h] BYREF
  __int128 v35; // [rsp+58h] [rbp-19h]
  _QWORD v36[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v37; // [rsp+78h] [rbp+7h]
  __int128 v38; // [rsp+88h] [rbp+17h] BYREF
  __int128 v39; // [rsp+98h] [rbp+27h]
  __int64 v40; // [rsp+A8h] [rbp+37h]

  v40 = -2LL;
  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_180269930 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269930);
    if ( dword_180269930 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801A05C0;
      *((_QWORD *)&Src + 1) = &unk_1801A0E8C;
      *(_QWORD *)&v35 = 0x100000005LL;
      v38 = Src;
      v39 = v35;
      sub_180056A34();
      v2 = (_QWORD *)sub_1800D44B8(v36);
      v3 = sub_180056944(v2, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v3;
      si128 = *((__m128i *)v3 + 1);
      v3[2] = 0LL;
      v3[3] = (const void *)15;
      *(_BYTE *)v3 = 0;
      v4 = std::string::append(&Src, "/Pixel", 6uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v4;
      v35 = *((_OWORD *)v4 + 1);
      v4[2] = 0LL;
      v4[3] = 15LL;
      *(_BYTE *)v4 = 0;
      byte_18026992C = sub_1800D45A4(&v34, &v38);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v5 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v5 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v5 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v5, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v5);
      }
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v37 + 1) >= 0x10uLL )
      {
        v6 = v36[0];
        if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 )
        {
          v6 = *(_QWORD *)(v36[0] - 8LL);
          if ( (unsigned __int64)(v36[0] - v6 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v6, *((_QWORD *)&v37 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v6);
      }
      Init_thread_footer(&dword_180269930);
    }
  }
  if ( dword_180269938 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269938);
    if ( dword_180269938 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801A0E90;
      *((_QWORD *)&Src + 1) = &unk_1801A1A4C;
      *(_QWORD *)&v37 = 0x100000005LL;
      v38 = Src;
      v39 = v37;
      sub_180056A34();
      v7 = (_QWORD *)sub_1800D44B8(v36);
      v8 = sub_180056944(v7, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v8;
      si128 = *((__m128i *)v8 + 1);
      v8[2] = 0LL;
      v8[3] = (const void *)15;
      *(_BYTE *)v8 = 0;
      v9 = std::string::append(&Src, "/Pixel", 6uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v9;
      v35 = *((_OWORD *)v9 + 1);
      v9[2] = 0LL;
      v9[3] = 15LL;
      *(_BYTE *)v9 = 0;
      byte_180269934 = sub_1800D45A4(&v34, &v38);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v10 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v10 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v10 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v10, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v10);
      }
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v37 + 1) >= 0x10uLL )
      {
        v11 = v36[0];
        if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 )
        {
          v11 = *(_QWORD *)(v36[0] - 8LL);
          if ( (unsigned __int64)(v36[0] - v11 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v37 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v11);
      }
      Init_thread_footer(&dword_180269938);
    }
  }
  if ( dword_180269940 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269940);
    if ( dword_180269940 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801A1A50;
      *((_QWORD *)&Src + 1) = &unk_1801A2BEC;
      *(_QWORD *)&v37 = 0x100000005LL;
      v38 = Src;
      v39 = v37;
      sub_180056A34();
      v12 = (_QWORD *)sub_1800D44B8(v36);
      v13 = sub_180056944(v12, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v13;
      si128 = *((__m128i *)v13 + 1);
      v13[2] = 0LL;
      v13[3] = (const void *)15;
      *(_BYTE *)v13 = 0;
      v14 = std::string::append(&Src, "/Pixel", 6uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v14;
      v35 = *((_OWORD *)v14 + 1);
      v14[2] = 0LL;
      v14[3] = 15LL;
      *(_BYTE *)v14 = 0;
      byte_18026993C = sub_1800D45A4(&v34, &v38);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v15 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v15 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v15 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v15, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v15);
      }
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v37 + 1) >= 0x10uLL )
      {
        v16 = v36[0];
        if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 )
        {
          v16 = *(_QWORD *)(v36[0] - 8LL);
          if ( (unsigned __int64)(v36[0] - v16 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v16, *((_QWORD *)&v37 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v16);
      }
      Init_thread_footer(&dword_180269940);
    }
  }
  if ( dword_180269948 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269948);
    if ( dword_180269948 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801A2BF0;
      *((_QWORD *)&Src + 1) = &unk_1801A31DC;
      *(_QWORD *)&v37 = 0x100000001LL;
      v38 = Src;
      v39 = v37;
      sub_180056A34();
      v17 = (_QWORD *)sub_1800D44B8(v36);
      v18 = sub_180056944(v17, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v18;
      si128 = *((__m128i *)v18 + 1);
      v18[2] = 0LL;
      v18[3] = (const void *)15;
      *(_BYTE *)v18 = 0;
      v19 = std::string::append(&Src, "/Vertex", 7uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v19;
      v35 = *((_OWORD *)v19 + 1);
      v19[2] = 0LL;
      v19[3] = 15LL;
      *(_BYTE *)v19 = 0;
      byte_180269944 = sub_1800D45A4(&v34, &v38);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v20 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v20 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v20 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v20, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v20);
      }
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v37 + 1) >= 0x10uLL )
      {
        v21 = v36[0];
        if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 )
        {
          v21 = *(_QWORD *)(v36[0] - 8LL);
          if ( (unsigned __int64)(v36[0] - v21 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v21, *((_QWORD *)&v37 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v21);
      }
      Init_thread_footer(&dword_180269948);
    }
  }
  if ( dword_180269950 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269950);
    if ( dword_180269950 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801A2BF0;
      *((_QWORD *)&Src + 1) = &unk_1801A31DC;
      *(_QWORD *)&v37 = 0x100000001LL;
      v38 = Src;
      v39 = v37;
      sub_180056A34();
      v22 = (_QWORD *)sub_1800D44B8(v36);
      v23 = sub_180056944(v22, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v23;
      si128 = *((__m128i *)v23 + 1);
      v23[2] = 0LL;
      v23[3] = (const void *)15;
      *(_BYTE *)v23 = 0;
      v24 = std::string::append(&Src, "/Vertex", 7uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v24;
      v35 = *((_OWORD *)v24 + 1);
      v24[2] = 0LL;
      v24[3] = 15LL;
      *(_BYTE *)v24 = 0;
      byte_18026994C = sub_1800D45A4(&v34, &v38);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v25 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v25 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v25 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v25, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v25);
      }
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v37 + 1) >= 0x10uLL )
      {
        v26 = v36[0];
        if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 )
        {
          v26 = *(_QWORD *)(v36[0] - 8LL);
          if ( (unsigned __int64)(v36[0] - v26 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v26, *((_QWORD *)&v37 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v26);
      }
      Init_thread_footer(&dword_180269950);
    }
  }
  if ( dword_180269958 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180269958);
    if ( dword_180269958 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801A2BF0;
      *((_QWORD *)&Src + 1) = &unk_1801A31DC;
      *(_QWORD *)&v37 = 0x100000001LL;
      v38 = Src;
      v39 = v37;
      sub_180056A34();
      v27 = (_QWORD *)sub_1800D44B8(v36);
      v28 = sub_180056944(v27, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v28;
      si128 = *((__m128i *)v28 + 1);
      v28[2] = 0LL;
      v28[3] = (const void *)15;
      *(_BYTE *)v28 = 0;
      v29 = std::string::append(&Src, "/Vertex", 7uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v29;
      v35 = *((_OWORD *)v29 + 1);
      v29[2] = 0LL;
      v29[3] = 15LL;
      *(_BYTE *)v29 = 0;
      byte_180269954 = sub_1800D45A4(&v34, &v38);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v30 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v30 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v30 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v30, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v30);
      }
      si128 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v37 + 1) >= 0x10uLL )
      {
        v31 = v36[0];
        if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 )
        {
          v31 = *(_QWORD *)(v36[0] - 8LL);
          if ( (unsigned __int64)(v36[0] - v31 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v31, *((_QWORD *)&v37 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v31);
      }
      Init_thread_footer(&dword_180269958);
    }
  }
  return 0LL;
}
