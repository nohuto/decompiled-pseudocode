/*
 * XREFs of sub_18005DFE4 @ 0x18005DFE4
 * Callers:
 *     sub_180001210 @ 0x180001210 (sub_180001210.c)
 *     sub_180001420 @ 0x180001420 (sub_180001420.c)
 *     sub_180001510 @ 0x180001510 (sub_180001510.c)
 *     sub_180001600 @ 0x180001600 (sub_180001600.c)
 *     sub_1800016F0 @ 0x1800016F0 (sub_1800016F0.c)
 *     sub_1800017E0 @ 0x1800017E0 (sub_1800017E0.c)
 *     sub_1800018D0 @ 0x1800018D0 (sub_1800018D0.c)
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     sub_180001AB0 @ 0x180001AB0 (sub_180001AB0.c)
 *     sub_180001BA0 @ 0x180001BA0 (sub_180001BA0.c)
 *     sub_180001C90 @ 0x180001C90 (sub_180001C90.c)
 *     sub_180001D80 @ 0x180001D80 (sub_180001D80.c)
 *     sub_180001E70 @ 0x180001E70 (sub_180001E70.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180056A54 @ 0x180056A54 (sub_180056A54.c)
 *     sub_18005DF60 @ 0x18005DF60 (sub_18005DF60.c)
 *     sub_1800D45C8 @ 0x1800D45C8 (sub_1800D45C8.c)
 *     sub_1800D46B4 @ 0x1800D46B4 (sub_1800D46B4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_18005DFE4()
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
  if ( dword_18026AD80 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AD80);
    if ( dword_18026AD80 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C8950;
      *((_QWORD *)&Src + 1) = &unk_1801C8EB4;
      *(_QWORD *)&v15 = 0x100000005LL;
      v18 = Src;
      v19 = v15;
      sub_18005DF60();
      v2 = (_QWORD *)sub_1800D45C8(v16);
      v3 = sub_180056A54(v2, 0LL, "Font/ShaderModel40/", 0x13uLL);
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
      byte_18026AD7C = sub_1800D46B4(&v14, &v18);
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
      Init_thread_footer(&dword_18026AD80);
    }
  }
  if ( dword_18026AD88 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_18026AD88);
    if ( dword_18026AD88 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C8EC0;
      *((_QWORD *)&Src + 1) = &unk_1801C9164;
      *(_QWORD *)&v17 = 0x100000001LL;
      v18 = Src;
      v19 = v17;
      sub_18005DF60();
      v7 = (_QWORD *)sub_1800D45C8(v16);
      v8 = sub_180056A54(v7, 0LL, "Font/ShaderModel40/", 0x13uLL);
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
      byte_18026AD84 = sub_1800D46B4(&v14, &v18);
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
      Init_thread_footer(&dword_18026AD88);
    }
  }
  return 0LL;
}
