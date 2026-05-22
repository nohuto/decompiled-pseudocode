/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180101F68
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180100A30 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180101C94 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // r15
  const unsigned __int16 *Vector3AsString; // rax
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rcx
  const unsigned __int16 *v9; // rax
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  void *v15; // rcx
  const unsigned __int16 *v16; // rax
  const unsigned __int16 *v17; // r14
  const unsigned __int16 *v18; // rdx
  __int64 v19; // rcx
  const unsigned __int16 *v20; // rax
  const unsigned __int16 *v21; // rdx
  __int64 v22; // rcx
  const unsigned __int16 *v23; // rax
  __int64 v24; // rcx
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  _QWORD v30[2]; // [rsp+50h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A8h]
  void *v32; // [rsp+70h] [rbp-98h] BYREF
  __m128i v33; // [rsp+80h] [rbp-88h]
  _QWORD v34[3]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+A8h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  const bool *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int64 v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  int *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  int *v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  __int64 v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  __int64 v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  const unsigned __int16 *v55; // [rsp+168h] [rbp+60h]
  int v56; // [rsp+170h] [rbp+68h]
  int v57; // [rsp+174h] [rbp+6Ch]
  __int64 v58; // [rsp+178h] [rbp+70h]
  __int64 v59; // [rsp+180h] [rbp+78h]
  const unsigned __int16 *v60; // [rsp+188h] [rbp+80h]
  int v61; // [rsp+190h] [rbp+88h]
  int v62; // [rsp+194h] [rbp+8Ch]
  const bool *v63; // [rsp+198h] [rbp+90h]
  int v64; // [rsp+1A0h] [rbp+98h]
  int v65; // [rsp+1A4h] [rbp+9Ch]
  __int64 v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  __int64 v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]

  v29 = -2LL;
  v3 = (__int64)a1;
  v4 = *((_DWORD *)a1 + 130);
  v5 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 == 6 )
  {
    if ( *(_DWORD *)v5 <= 5u || (*(_BYTE *)(v5 + 16) & 1) == 0 || (*(_QWORD *)(v5 + 24) & 1LL) != *(_QWORD *)(v5 + 24) )
      return;
    v25 = *(_DWORD *)v3;
    v37 = &v25;
    v38 = 4LL;
    v26 = *(_DWORD *)(v3 + 4);
    v39 = &v26;
    v40 = 4LL;
    v41 = v3 + 8;
    v42 = 4LL;
    v43 = a2;
    v44 = 1LL;
    v45 = v3 + 528;
    v46 = 4LL;
    v27 = *(_DWORD *)(v3 + 520);
    v47 = &v27;
    v48 = 4LL;
    v28 = *(_DWORD *)(v3 + 524);
    v49 = &v28;
    v50 = 4LL;
    v51 = v3 + 1196;
    v52 = 4LL;
    v53 = v3 + 1200;
    v54 = 4LL;
    Vector3AsString = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v34, (float *)(v3 + 1144));
    if ( *((_QWORD *)Vector3AsString + 3) >= 0x10uLL )
      Vector3AsString = *(const unsigned __int16 **)Vector3AsString;
    a2 = (const bool *)&word_18014A10A;
    v7 = &word_18014A10A;
    LODWORD(v8) = 0;
    if ( Vector3AsString )
    {
      v7 = Vector3AsString;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)Vector3AsString + v8) );
    }
    v55 = v7;
    v56 = v8 + 1;
    v57 = 0;
    v58 = v3 + 1204;
    v59 = 4LL;
    v9 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)&v32, (float *)(v3 + 1156));
    if ( *((_QWORD *)v9 + 3) >= 0x10uLL )
      v9 = *(const unsigned __int16 **)v9;
    v10 = &word_18014A10A;
    LODWORD(v11) = 0;
    if ( v9 )
    {
      v10 = v9;
      v11 = -1LL;
      do
        ++v11;
      while ( *((_BYTE *)v9 + v11) );
    }
    v60 = v10;
    v61 = v11 + 1;
    v62 = 0;
    v12 = ISMTracing::GetVector3AsString((__int64)v30, (float *)(v3 + 1168));
    if ( *(_QWORD *)(v12 + 24) >= 0x10uLL )
      v12 = *(_QWORD *)v12;
    LODWORD(v13) = 0;
    if ( v12 )
    {
      a2 = (const bool *)v12;
      v13 = -1LL;
      do
        ++v13;
      while ( *(_BYTE *)(v12 + v13) );
    }
    v63 = a2;
    v64 = v13 + 1;
    v65 = 0;
    v66 = v3 + 1216;
    v67 = 4LL;
    v68 = v3 + 1208;
    v69 = 4LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_18016BD26, 0LL, 0LL, 0x11u, &pData);
    v3 = 4096LL;
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v14 = (const struct std::nothrow_t *)(si128.m128i_i64[1] + 1);
      v15 = (void *)v30[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v14 = (const struct std::nothrow_t *)(si128.m128i_i64[1] + 40);
        v15 = *(void **)(v30[0] - 8LL);
        if ( (unsigned __int64)(v30[0] - (_QWORD)v15 - 8LL) > 0x1F )
          goto LABEL_31;
      }
      operator delete(v15, v14);
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v30[0]) = 0;
    if ( v33.m128i_i64[1] < 0x10uLL )
      goto LABEL_28;
    v14 = (const struct std::nothrow_t *)(v33.m128i_i64[1] + 1);
    v15 = v32;
    if ( (unsigned __int64)(v33.m128i_i64[1] + 1) < 0x1000
      || (v14 = (const struct std::nothrow_t *)(v33.m128i_i64[1] + 40),
          v15 = (void *)*((_QWORD *)v32 - 1),
          (unsigned __int64)((_BYTE *)v32 - (_BYTE *)v15 - 8) <= 0x1F) )
    {
      operator delete(v15, v14);
LABEL_28:
      v33 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v32) = 0;
      if ( v35 < 0x10 )
        return;
      v14 = (const struct std::nothrow_t *)(v35 + 1);
      v15 = (void *)v34[0];
      if ( v35 + 1 < 0x1000 )
        goto LABEL_62;
      v14 = (const struct std::nothrow_t *)(v35 + 40);
      v15 = *(void **)(v34[0] - 8LL);
      if ( (unsigned __int64)(v34[0] - (_QWORD)v15 - 8LL) <= 0x1F )
        goto LABEL_62;
    }
LABEL_31:
    _o__invalid_parameter_noinfo_noreturn(v15, v14);
  }
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v28 = *(_DWORD *)v3;
    v37 = &v28;
    v38 = 4LL;
    v27 = *(_DWORD *)(v3 + 4);
    v39 = &v27;
    v40 = 4LL;
    v41 = v3 + 8;
    v42 = 4LL;
    v43 = a2;
    v44 = 1LL;
    v45 = v3 + 528;
    v46 = 4LL;
    v26 = *(_DWORD *)(v3 + 520);
    v47 = &v26;
    v48 = 4LL;
    v25 = *(_DWORD *)(v3 + 524);
    v49 = &v25;
    v50 = 4LL;
    v51 = v3 + 1196;
    v52 = 4LL;
    v53 = v3 + 1200;
    v54 = 4LL;
    v16 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v34, (float *)(v3 + 1144));
    if ( *((_QWORD *)v16 + 3) >= 0x10uLL )
      v16 = *(const unsigned __int16 **)v16;
    v17 = &word_18014A10A;
    v18 = &word_18014A10A;
    LODWORD(v19) = 0;
    if ( v16 )
    {
      v18 = v16;
      v19 = -1LL;
      do
        ++v19;
      while ( *((_BYTE *)v16 + v19) );
    }
    v55 = v18;
    v56 = v19 + 1;
    v57 = 0;
    v58 = v3 + 1204;
    v59 = 4LL;
    v20 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v30, (float *)(v3 + 1156));
    if ( *((_QWORD *)v20 + 3) >= 0x10uLL )
      v20 = *(const unsigned __int16 **)v20;
    v21 = &word_18014A10A;
    LODWORD(v22) = 0;
    if ( v20 )
    {
      v21 = v20;
      v22 = -1LL;
      do
        ++v22;
      while ( *((_BYTE *)v20 + v22) );
    }
    v60 = v21;
    v61 = v22 + 1;
    v62 = 0;
    v23 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)&v32, (float *)(v3 + 1168));
    if ( *((_QWORD *)v23 + 3) >= 0x10uLL )
      v23 = *(const unsigned __int16 **)v23;
    LODWORD(v24) = 0;
    if ( v23 )
    {
      v17 = v23;
      v24 = -1LL;
      do
        ++v24;
      while ( *((_BYTE *)v23 + v24) );
    }
    v63 = (const bool *)v17;
    v64 = v24 + 1;
    v65 = 0;
    v66 = v3 + 1216;
    v67 = 4LL;
    v68 = v3 + 1208;
    v69 = 4LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_18016BBB2, 0LL, 0LL, 0x11u, &pData);
    if ( v33.m128i_i64[1] >= 0x10uLL )
    {
      v14 = (const struct std::nothrow_t *)(v33.m128i_i64[1] + 1);
      v15 = v32;
      if ( (unsigned __int64)(v33.m128i_i64[1] + 1) >= 0x1000 )
      {
        v14 = (const struct std::nothrow_t *)(v33.m128i_i64[1] + 40);
        v15 = (void *)*((_QWORD *)v32 - 1);
        if ( (unsigned __int64)((_BYTE *)v32 - (_BYTE *)v15 - 8) > 0x1F )
          goto LABEL_61;
      }
      operator delete(v15, v14);
    }
    v33 = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v32) = 0;
    if ( si128.m128i_i64[1] < 0x10uLL )
      goto LABEL_58;
    v14 = (const struct std::nothrow_t *)(si128.m128i_i64[1] + 1);
    v15 = (void *)v30[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) < 0x1000
      || (v14 = (const struct std::nothrow_t *)(si128.m128i_i64[1] + 40),
          v15 = *(void **)(v30[0] - 8LL),
          (unsigned __int64)(v30[0] - (_QWORD)v15 - 8LL) <= 0x1F) )
    {
      operator delete(v15, v14);
LABEL_58:
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v30[0]) = 0;
      if ( v35 < 0x10 )
        return;
      v14 = (const struct std::nothrow_t *)(v35 + 1);
      v15 = (void *)v34[0];
      if ( v35 + 1 < 0x1000 )
        goto LABEL_62;
      v14 = (const struct std::nothrow_t *)(v35 + 40);
      v15 = *(void **)(v34[0] - 8LL);
      if ( (unsigned __int64)(v34[0] - (_QWORD)v15 - 8LL) <= 0x1F )
        goto LABEL_62;
    }
LABEL_61:
    _o__invalid_parameter_noinfo_noreturn(v15, v14);
LABEL_62:
    operator delete(v15, v14);
  }
}
