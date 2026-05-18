/*
 * XREFs of sub_18005DBD8 @ 0x18005DBD8
 * Callers:
 *     sub_180001270 @ 0x180001270 (sub_180001270.c)
 *     sub_180001480 @ 0x180001480 (sub_180001480.c)
 *     sub_180001570 @ 0x180001570 (sub_180001570.c)
 *     sub_180001660 @ 0x180001660 (sub_180001660.c)
 *     sub_180001750 @ 0x180001750 (sub_180001750.c)
 *     sub_180001840 @ 0x180001840 (sub_180001840.c)
 *     sub_180001930 @ 0x180001930 (sub_180001930.c)
 *     sub_180001A20 @ 0x180001A20 (sub_180001A20.c)
 *     sub_180001B10 @ 0x180001B10 (sub_180001B10.c)
 *     sub_180001C00 @ 0x180001C00 (sub_180001C00.c)
 *     sub_180001CF0 @ 0x180001CF0 (sub_180001CF0.c)
 *     sub_180001DE0 @ 0x180001DE0 (sub_180001DE0.c)
 *     sub_180001ED0 @ 0x180001ED0 (sub_180001ED0.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180056A54 @ 0x180056A54 (sub_180056A54.c)
 *     sub_180056DF8 @ 0x180056DF8 (sub_180056DF8.c)
 *     sub_1800D45C8 @ 0x1800D45C8 (sub_1800D45C8.c)
 *     sub_1800D46B4 @ 0x1800D46B4 (sub_1800D46B4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_18005DBD8()
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
  __int128 Src; // [rsp+28h] [rbp-49h] BYREF
  __m128i si128; // [rsp+38h] [rbp-39h]
  __int128 v14; // [rsp+48h] [rbp-29h] BYREF
  __int128 v15; // [rsp+58h] [rbp-19h]
  _QWORD v16[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v17; // [rsp+78h] [rbp+7h]
  __int128 v18; // [rsp+88h] [rbp+17h] BYREF
  __int128 v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+37h]

  v20 = -2LL;
  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_18026A964 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026A964);
    if ( dword_18026A964 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801A41E0;
      *((_QWORD *)&Src + 1) = &unk_1801A4460;
      *(_QWORD *)&v15 = 0x100000005LL;
      v18 = Src;
      v19 = v15;
      sub_180056DF8();
      v2 = (_QWORD *)sub_1800D45C8(v16);
      v3 = sub_180056A54(v2, 0LL, "ImageProcessingFullscreen/ShaderModel40/", 0x28uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v3;
      si128 = *((__m128i *)v3 + 1);
      v3[2] = 0LL;
      v3[3] = (const void *)15;
      *(_BYTE *)v3 = 0;
      v4 = std::string::append(&Src, "/Pixel", 6uLL);
      v15 = 0uLL;
      v14 = *(_OWORD *)v4;
      v15 = *((_OWORD *)v4 + 1);
      v4[2] = 0LL;
      v4[3] = 15LL;
      *(_BYTE *)v4 = 0;
      byte_18026A960 = sub_1800D46B4(&v14, &v18);
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
      si128 = _mm_load_si128(xmmword_180145F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v17 + 1) >= 0x10uLL )
      {
        v6 = v16[0];
        if ( (unsigned __int64)(*((_QWORD *)&v17 + 1) + 1LL) >= 0x1000 )
        {
          v6 = *(_QWORD *)(v16[0] - 8LL);
          if ( (unsigned __int64)(v16[0] - v6 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v6, *((_QWORD *)&v17 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v6);
      }
      Init_thread_footer(&dword_18026A964);
    }
  }
  if ( dword_18026A96C > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026A96C);
    if ( dword_18026A96C == -1 )
    {
      *(_QWORD *)&Src = &unk_1801A4460;
      *((_QWORD *)&Src + 1) = &unk_1801A4A4C;
      *(_QWORD *)&v17 = 0x100000001LL;
      v18 = Src;
      v19 = v17;
      sub_180056DF8();
      v7 = (_QWORD *)sub_1800D45C8(v16);
      v8 = sub_180056A54(v7, 0LL, "ImageProcessingFullscreen/ShaderModel40/", 0x28uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v8;
      si128 = *((__m128i *)v8 + 1);
      v8[2] = 0LL;
      v8[3] = (const void *)15;
      *(_BYTE *)v8 = 0;
      v9 = std::string::append(&Src, "/Vertex", 7uLL);
      v15 = 0uLL;
      v14 = *(_OWORD *)v9;
      v15 = *((_OWORD *)v9 + 1);
      v9[2] = 0LL;
      v9[3] = 15LL;
      *(_BYTE *)v9 = 0;
      byte_18026A968 = sub_1800D46B4(&v14, &v18);
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
      si128 = _mm_load_si128(xmmword_180145F90);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v17 + 1) >= 0x10uLL )
      {
        v11 = v16[0];
        if ( (unsigned __int64)(*((_QWORD *)&v17 + 1) + 1LL) >= 0x1000 )
        {
          v11 = *(_QWORD *)(v16[0] - 8LL);
          if ( (unsigned __int64)(v16[0] - v11 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v17 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v11);
      }
      Init_thread_footer(&dword_18026A96C);
    }
  }
  return 0LL;
}
