/*
 * XREFs of ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180101C94
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180101F68 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1801014C4 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1801017F4 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1801017F4.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x180101B4C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ISMTracing::GetVector3AsString(__int64 a1, float *a2)
{
  char **v4; // rsi
  char **v5; // rbx
  char **v6; // rdx
  __int64 v7; // r8
  size_t *v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // r8
  size_t *v12; // rax
  __int64 v13; // r9
  const struct std::nothrow_t *v14; // rdx
  char *v15; // rcx
  char *v17; // [rsp+30h] [rbp-81h] BYREF
  __m128i si128; // [rsp+40h] [rbp-71h]
  char *v19; // [rsp+50h] [rbp-61h] BYREF
  __m128i v20; // [rsp+60h] [rbp-51h]
  char *v21; // [rsp+70h] [rbp-41h] BYREF
  __m128i v22; // [rsp+80h] [rbp-31h]
  char *v23; // [rsp+90h] [rbp-21h] BYREF
  __m128i v24; // [rsp+A0h] [rbp-11h]
  char *v25; // [rsp+B0h] [rbp-1h] BYREF
  __m128i v26; // [rsp+C0h] [rbp+Fh]
  char *Src; // [rsp+D0h] [rbp+1Fh] BYREF
  unsigned __int64 v28; // [rsp+E8h] [rbp+37h]

  v4 = std::to_string(&Src, a2[2]);
  v5 = std::to_string(&v25, a2[1]);
  v6 = std::to_string(&v23, *a2);
  v8 = (size_t *)std::operator+<char>((__int64)&v21, v6, v7);
  v10 = (_QWORD *)std::operator+<char>((__int64)&v19, v8, (__int64)v5, v9);
  v12 = (size_t *)std::operator+<char>((__int64)&v17, v10, v11);
  std::operator+<char>(a1, v12, (__int64)v4, v13);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v14 = (const struct std::nothrow_t *)(si128.m128i_i64[1] + 1);
    v15 = v17;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = (const struct std::nothrow_t *)(si128.m128i_i64[1] + 40);
      v15 = (char *)*((_QWORD *)v17 - 1);
      if ( (unsigned __int64)(v17 - v15 - 8) > 0x1F )
        goto LABEL_24;
    }
    operator delete(v15, v14);
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v17) = 0;
  if ( v20.m128i_i64[1] >= 0x10uLL )
  {
    v14 = (const struct std::nothrow_t *)(v20.m128i_i64[1] + 1);
    v15 = v19;
    if ( (unsigned __int64)(v20.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = (const struct std::nothrow_t *)(v20.m128i_i64[1] + 40);
      v15 = (char *)*((_QWORD *)v19 - 1);
      if ( (unsigned __int64)(v19 - v15 - 8) > 0x1F )
        goto LABEL_24;
    }
    operator delete(v15, v14);
  }
  v20 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v19) = 0;
  if ( v22.m128i_i64[1] >= 0x10uLL )
  {
    v14 = (const struct std::nothrow_t *)(v22.m128i_i64[1] + 1);
    v15 = v21;
    if ( (unsigned __int64)(v22.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = (const struct std::nothrow_t *)(v22.m128i_i64[1] + 40);
      v15 = (char *)*((_QWORD *)v21 - 1);
      if ( (unsigned __int64)(v21 - v15 - 8) > 0x1F )
        goto LABEL_24;
    }
    operator delete(v15, v14);
  }
  v22 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v21) = 0;
  if ( v24.m128i_i64[1] >= 0x10uLL )
  {
    v14 = (const struct std::nothrow_t *)(v24.m128i_i64[1] + 1);
    v15 = v23;
    if ( (unsigned __int64)(v24.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = (const struct std::nothrow_t *)(v24.m128i_i64[1] + 40);
      v15 = (char *)*((_QWORD *)v23 - 1);
      if ( (unsigned __int64)(v23 - v15 - 8) > 0x1F )
        goto LABEL_24;
    }
    operator delete(v15, v14);
  }
  v24 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v23) = 0;
  if ( v26.m128i_i64[1] < 0x10uLL )
    goto LABEL_21;
  v14 = (const struct std::nothrow_t *)(v26.m128i_i64[1] + 1);
  v15 = v25;
  if ( (unsigned __int64)(v26.m128i_i64[1] + 1) >= 0x1000 )
  {
    v14 = (const struct std::nothrow_t *)(v26.m128i_i64[1] + 40);
    v15 = (char *)*((_QWORD *)v25 - 1);
    if ( (unsigned __int64)(v25 - v15 - 8) > 0x1F )
    {
LABEL_24:
      _o__invalid_parameter_noinfo_noreturn(v15, v14);
LABEL_25:
      operator delete(v15, v14);
      return a1;
    }
  }
  operator delete(v15, v14);
LABEL_21:
  v26 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v25) = 0;
  if ( v28 >= 0x10 )
  {
    v14 = (const struct std::nothrow_t *)(v28 + 1);
    v15 = Src;
    if ( v28 + 1 < 0x1000 )
      goto LABEL_25;
    v14 = (const struct std::nothrow_t *)(v28 + 40);
    v15 = (char *)*((_QWORD *)Src - 1);
    if ( (unsigned __int64)(Src - v15 - 8) <= 0x1F )
      goto LABEL_25;
    goto LABEL_24;
  }
  return a1;
}
