/*
 * XREFs of ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18007C2F8
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18007B5F8 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x18007B534 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x18007C5AC (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18007D230 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007D28C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@U_Iterator_.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1634 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x1800D13DC (_anonymous_namespace_--Compressor--Compress.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3798 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_OWORD *__fastcall EncodeStringsList(_OWORD *a1, __int64 a2)
{
  _OWORD *v2; // r14
  __int64 *v3; // rbx
  char *v4; // r9
  char *v5; // r10
  __int64 v6; // rax
  int v7; // r15d
  unsigned __int16 *v8; // rdi
  int *v9; // r13
  char *v10; // r9
  char *v11; // r9
  int v12; // r12d
  unsigned __int16 *v13; // rsi
  unsigned __int16 *v14; // r13
  unsigned __int16 v15; // di
  char *v16; // r9
  __int16 v17; // di
  unsigned __int8 *v18; // rdi
  __int64 v19; // rsi
  __m128i si128; // xmm0
  unsigned __int64 v21; // r15
  int v22; // ebx
  __int128 v23; // xmm0
  __m128i v24; // xmm1
  int v26; // [rsp+28h] [rbp-59h] BYREF
  __int128 v27; // [rsp+30h] [rbp-51h] BYREF
  char *v28; // [rsp+40h] [rbp-41h]
  __int128 *v29; // [rsp+48h] [rbp-39h] BYREF
  __int64 v30; // [rsp+50h] [rbp-31h]
  int v31; // [rsp+58h] [rbp-29h]
  __int64 v32; // [rsp+60h] [rbp-21h] BYREF
  _OWORD *v33; // [rsp+68h] [rbp-19h]
  unsigned __int8 *v34; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-9h]
  __int128 v36; // [rsp+88h] [rbp+7h] BYREF
  __m128i v37; // [rsp+98h] [rbp+17h]

  v33 = a1;
  v2 = a1;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = *(__int64 **)a2;
    v28 = 0LL;
    v27 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v6 = *v3;
    v32 = *v3;
    while ( (__int64 *)v6 != v3 )
    {
      v7 = 0xFFFF;
      v8 = (unsigned __int16 *)(v6 + 32);
      v9 = (int *)(v6 + 48);
      if ( *(_DWORD *)(v6 + 48) < 0xFFFFu )
        v7 = *v9;
      LOBYTE(v26) = v7;
      if ( v5 == v4 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((__int64 *)&v27, v4, (char *)&v26);
        v5 = v28;
        v10 = (char *)*((_QWORD *)&v27 + 1);
      }
      else
      {
        *v4 = v7;
        v10 = v4 + 1;
        *((_QWORD *)&v27 + 1) = v10;
      }
      LOBYTE(v26) = BYTE1(v7);
      if ( v5 == v10 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((__int64 *)&v27, v10, (char *)&v26);
        v5 = v28;
        v11 = (char *)*((_QWORD *)&v27 + 1);
      }
      else
      {
        *v10 = BYTE1(v7);
        v11 = v10 + 1;
        *((_QWORD *)&v27 + 1) = v11;
      }
      v12 = 0;
      v13 = v8;
      if ( *((_QWORD *)v8 + 3) >= 8uLL )
      {
        v13 = *(unsigned __int16 **)v8;
        v8 = *(unsigned __int16 **)v8;
      }
      v14 = &v8[*(_QWORD *)v9];
      while ( v13 != v14 )
      {
        v15 = *v13;
        LOBYTE(v26) = *v13;
        if ( v5 == v11 )
        {
          std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((__int64 *)&v27, v11, (char *)&v26);
          v5 = v28;
          v16 = (char *)*((_QWORD *)&v27 + 1);
        }
        else
        {
          *v11 = v15;
          v16 = v11 + 1;
          *((_QWORD *)&v27 + 1) = v16;
        }
        v17 = HIBYTE(v15);
        LOBYTE(v26) = v17;
        if ( v5 == v16 )
        {
          std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((__int64 *)&v27, v16, (char *)&v26);
          v5 = v28;
          v11 = (char *)*((_QWORD *)&v27 + 1);
        }
        else
        {
          *v16 = v17;
          v11 = v16 + 1;
          *((_QWORD *)&v27 + 1) = v11;
        }
        if ( ++v12 == v7 )
          break;
        ++v13;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>,std::_Iterator_base0>::operator++(&v32);
      v6 = v32;
    }
    ((void (__fastcall *)(unsigned __int8 **, __int64, __int128 *, char *, int))anonymous_namespace_::Compressor::Compress)(
      &v34,
      a2,
      &v27,
      v4,
      v26);
    v18 = v34;
    v19 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v21 = v35 - (_QWORD)v34;
    LOBYTE(v36) = 0;
    if ( (unsigned __int64)v34 > v35 )
      v21 = 0LL;
    v30 = 0LL;
    v31 = 0;
    v2 = v33;
    v29 = &v36;
    v37 = si128;
    if ( v21 )
    {
      do
      {
        v22 = *v18;
        Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v29);
        LODWORD(v30) = (v22 << (8 * (3 - BYTE4(v30)))) | v30;
        if ( ++HIDWORD(v30) == 4 )
          Base853Encoder::EncodeBlock((Base853Encoder *)&v29);
        ++v18;
        ++v19;
      }
      while ( v19 != v21 );
    }
    Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v29);
    if ( HIDWORD(v30) )
      Base853Encoder::EncodeBlock((Base853Encoder *)&v29);
    v23 = v36;
    LOBYTE(v36) = 0;
    v24 = v37;
    *v2 = v23;
    v37 = _mm_load_si128((const __m128i *)&_xmm);
    v2[1] = v24;
    std::string::_Tidy_deallocate(&v36);
    std::vector<unsigned char>::_Tidy(&v34);
    std::vector<unsigned char>::_Tidy(&v27);
  }
  else
  {
    std::string::string(a1, byte_1802B2AA6);
  }
  return v2;
}
