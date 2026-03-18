/*
 * XREFs of ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x1800DE960
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800164B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x18001B250 (_anonymous_namespace_--Compressor--Compress.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180063B14 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x1800DCFE8 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800DE778 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800DEC24 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

_OWORD *__fastcall EncodeStringsList(__int64 a1, __int64 **a2)
{
  _OWORD *v2; // rdi
  _BYTE *v3; // rax
  __int64 *v5; // rbx
  _BYTE *v6; // r10
  _BYTE *v7; // r11
  __int64 v8; // rax
  int v9; // r15d
  unsigned __int16 *v10; // rsi
  int *v11; // r13
  _BYTE *v12; // r10
  _BYTE *v13; // r10
  int v14; // r12d
  unsigned __int16 *v15; // r14
  unsigned __int16 *v16; // r13
  unsigned __int16 v17; // si
  _BYTE *v18; // r10
  __int16 v19; // si
  unsigned __int8 *v20; // rsi
  __int64 v21; // r14
  __m128i si128; // xmm0
  unsigned __int64 v23; // r15
  int v24; // ebx
  __int128 v25; // xmm0
  __m128i v26; // xmm1
  char v27[8]; // [rsp+28h] [rbp-59h] BYREF
  __int128 v28; // [rsp+30h] [rbp-51h] BYREF
  _BYTE *v29; // [rsp+40h] [rbp-41h]
  __int128 *v30; // [rsp+48h] [rbp-39h] BYREF
  __int64 v31; // [rsp+50h] [rbp-31h]
  int v32; // [rsp+58h] [rbp-29h]
  __int64 v33; // [rsp+60h] [rbp-21h] BYREF
  _OWORD *v34; // [rsp+68h] [rbp-19h]
  unsigned __int8 *v35; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-9h]
  __int128 v37; // [rsp+88h] [rbp+7h] BYREF
  __m128i v38; // [rsp+98h] [rbp+17h]

  v34 = (_OWORD *)a1;
  v2 = (_OWORD *)a1;
  if ( a2[1] )
  {
    v5 = *a2;
    v29 = 0LL;
    v28 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v8 = *v5;
    v33 = *v5;
    while ( (__int64 *)v8 != v5 )
    {
      v9 = 0xFFFF;
      v10 = (unsigned __int16 *)(v8 + 32);
      v11 = (int *)(v8 + 48);
      if ( *(_DWORD *)(v8 + 48) < 0xFFFFu )
        v9 = *v11;
      v27[0] = v9;
      if ( v7 == v6 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)&v28, v6, v27);
        v7 = v29;
        v12 = (_BYTE *)*((_QWORD *)&v28 + 1);
      }
      else
      {
        *v6 = v9;
        v12 = v6 + 1;
        *((_QWORD *)&v28 + 1) = v12;
      }
      v27[0] = BYTE1(v9);
      if ( v7 == v12 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)&v28, v12, v27);
        v7 = v29;
        v13 = (_BYTE *)*((_QWORD *)&v28 + 1);
      }
      else
      {
        *v12 = BYTE1(v9);
        v13 = v12 + 1;
        *((_QWORD *)&v28 + 1) = v13;
      }
      v14 = 0;
      v15 = v10;
      if ( *((_QWORD *)v10 + 3) >= 8uLL )
      {
        v15 = *(unsigned __int16 **)v10;
        v10 = *(unsigned __int16 **)v10;
      }
      v16 = &v10[*(_QWORD *)v11];
      while ( v15 != v16 )
      {
        v17 = *v15;
        v27[0] = *v15;
        if ( v7 == v13 )
        {
          std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)&v28, v13, v27);
          v7 = v29;
          v18 = (_BYTE *)*((_QWORD *)&v28 + 1);
        }
        else
        {
          *v13 = v17;
          v18 = v13 + 1;
          *((_QWORD *)&v28 + 1) = v18;
        }
        v19 = HIBYTE(v17);
        v27[0] = v19;
        if ( v7 == v18 )
        {
          std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)&v28, v18, v27);
          v7 = v29;
          v13 = (_BYTE *)*((_QWORD *)&v28 + 1);
        }
        else
        {
          *v18 = v19;
          v13 = v18 + 1;
          *((_QWORD *)&v28 + 1) = v13;
        }
        if ( ++v14 == v9 )
          break;
        ++v15;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v33);
      v8 = v33;
    }
    anonymous_namespace_::Compressor::Compress((__int64)&v35, (__int64)a2, (__int64)&v28);
    v20 = v35;
    v21 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v23 = v36 - (_QWORD)v35;
    LOBYTE(v37) = 0;
    if ( (unsigned __int64)v35 > v36 )
      v23 = 0LL;
    v31 = 0LL;
    v32 = 0;
    v2 = v34;
    v30 = &v37;
    v38 = si128;
    if ( v23 )
    {
      do
      {
        v24 = *v20;
        Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v30);
        LODWORD(v31) = (v24 << (8 * (3 - BYTE4(v31)))) | v31;
        if ( ++HIDWORD(v31) == 4 )
          Base853Encoder::EncodeBlock((Base853Encoder *)&v30);
        ++v20;
        ++v21;
      }
      while ( v21 != v23 );
    }
    Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v30);
    if ( HIDWORD(v31) )
      Base853Encoder::EncodeBlock((Base853Encoder *)&v30);
    v25 = v37;
    LOBYTE(v37) = 0;
    v26 = v38;
    *v2 = v25;
    v38 = _mm_load_si128((const __m128i *)&_xmm);
    v2[1] = v26;
    std::vector<unsigned char>::_Tidy((__int64)&v35);
    std::vector<unsigned char>::_Tidy((__int64)&v28);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    v3 = (_BYTE *)a1;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
    if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
      v3 = *(_BYTE **)a1;
    *(_QWORD *)(a1 + 16) = 0LL;
    *v3 = 0;
  }
  return v2;
}
