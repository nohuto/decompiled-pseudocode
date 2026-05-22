/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18013D3EC
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x18013D8C0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18013CED8 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1, const bool *a2)
{
  _QWORD *v4; // rax
  const struct _TlgProvider_t *v5; // r14
  __int64 v6; // rdx
  __int64 Vector3AsString; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  const struct _TlgProvider_t *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h]
  void *v21[2]; // [rsp+50h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A8h]
  void *v23; // [rsp+70h] [rbp-98h] BYREF
  __m128i v24; // [rsp+80h] [rbp-88h]
  void *v25[3]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  int *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  char *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  const bool *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  int *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  char *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  char *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+168h] [rbp+60h] BYREF
  char *v47; // [rsp+178h] [rbp+70h]
  __int64 v48; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+198h] [rbp+90h] BYREF
  char *v51; // [rsp+1A8h] [rbp+A0h]
  __int64 v52; // [rsp+1B0h] [rbp+A8h]
  char *v53; // [rsp+1B8h] [rbp+B0h]
  __int64 v54; // [rsp+1C0h] [rbp+B8h]

  v20 = -2LL;
  if ( *((_DWORD *)a1 + 16) == 6 )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           (__int64)a1,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v5 = (const struct _TlgProvider_t *)v4[1];
    if ( *(_DWORD *)v5 > 5u && TlgKeywordOn((TraceLoggingHProvider)v4[1], 1uLL) )
    {
      v16 = *(_DWORD *)a1;
      v28 = &v16;
      v29 = 4LL;
      v17 = *((_DWORD *)a1 + 1);
      v30 = &v17;
      v31 = 4LL;
      v32 = (char *)a1 + 8;
      v33 = 4LL;
      v34 = a2;
      v35 = v6;
      v36 = (char *)a1 + 72;
      v37 = 4LL;
      v18 = *((_DWORD *)a1 + 16);
      v38 = &v18;
      v39 = 4LL;
      v19 = *((_DWORD *)a1 + 17);
      v40 = &v19;
      v41 = 4LL;
      v42 = (char *)a1 + 824;
      v43 = 4LL;
      v44 = (char *)a1 + 828;
      v45 = 4LL;
      Vector3AsString = ISMTracing::GetVector3AsString((__int64)v25, (float *)a1 + 180);
      if ( *(_QWORD *)(Vector3AsString + 24) >= 0x10uLL )
        Vector3AsString = *(_QWORD *)Vector3AsString;
      TlgCreateSz(&pDesc, (LPCSTR)Vector3AsString);
      v47 = (char *)a1 + 832;
      v48 = 4LL;
      v8 = ISMTracing::GetVector3AsString((__int64)&v23, (float *)a1 + 200);
      if ( *(_QWORD *)(v8 + 24) >= 0x10uLL )
        v8 = *(_QWORD *)v8;
      TlgCreateSz(&v49, (LPCSTR)v8);
      v9 = ISMTracing::GetVector3AsString((__int64)v21, (float *)a1 + 203);
      if ( *(_QWORD *)(v9 + 24) >= 0x10uLL )
        v9 = *(_QWORD *)v9;
      TlgCreateSz(&v50, (LPCSTR)v9);
      v51 = (char *)a1 + 840;
      v52 = 4LL;
      v53 = (char *)a1 + 836;
      v54 = 4LL;
      TlgWrite(v5, &unk_1801A1645, 0LL, 0LL, 0x11u, &pData);
      if ( si128.m128i_i64[1] >= 0x10uLL )
        std::_Deallocate<16,0>(v21[0], (const struct std::nothrow_t *)(si128.m128i_i64[1] + 1));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v21[0]) = 0;
      if ( v24.m128i_i64[1] >= 0x10uLL )
        std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(v24.m128i_i64[1] + 1));
      v24 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v23) = 0;
LABEL_28:
      if ( v26 >= 0x10 )
        std::_Deallocate<16,0>(v25[0], (const struct std::nothrow_t *)(v26 + 1));
    }
  }
  else
  {
    v10 = wil::details::static_lazy<ISMTracing>::get(
            (__int64)a1,
            lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v11 = (const struct _TlgProvider_t *)v10[1];
    if ( *(_DWORD *)v11 > 4u && TlgKeywordOn((TraceLoggingHProvider)v10[1], 1uLL) )
    {
      v19 = *(_DWORD *)a1;
      v28 = &v19;
      v29 = 4LL;
      v18 = *((_DWORD *)a1 + 1);
      v30 = &v18;
      v31 = 4LL;
      v32 = (char *)a1 + 8;
      v33 = 4LL;
      v34 = a2;
      v35 = v12;
      v36 = (char *)a1 + 72;
      v37 = 4LL;
      v17 = *((_DWORD *)a1 + 16);
      v38 = &v17;
      v39 = 4LL;
      v16 = *((_DWORD *)a1 + 17);
      v40 = &v16;
      v41 = 4LL;
      v42 = (char *)a1 + 824;
      v43 = 4LL;
      v44 = (char *)a1 + 828;
      v45 = 4LL;
      v13 = ISMTracing::GetVector3AsString((__int64)v25, (float *)a1 + 180);
      if ( *(_QWORD *)(v13 + 24) >= 0x10uLL )
        v13 = *(_QWORD *)v13;
      TlgCreateSz(&pDesc, (LPCSTR)v13);
      v47 = (char *)a1 + 832;
      v48 = 4LL;
      v14 = ISMTracing::GetVector3AsString((__int64)v21, (float *)a1 + 200);
      if ( *(_QWORD *)(v14 + 24) >= 0x10uLL )
        v14 = *(_QWORD *)v14;
      TlgCreateSz(&v49, (LPCSTR)v14);
      v15 = ISMTracing::GetVector3AsString((__int64)&v23, (float *)a1 + 203);
      if ( *(_QWORD *)(v15 + 24) >= 0x10uLL )
        v15 = *(_QWORD *)v15;
      TlgCreateSz(&v50, (LPCSTR)v15);
      v51 = (char *)a1 + 840;
      v52 = 4LL;
      v53 = (char *)a1 + 836;
      v54 = 4LL;
      TlgWrite(v11, &unk_1801A1559, 0LL, 0LL, 0x11u, &pData);
      if ( v24.m128i_i64[1] >= 0x10uLL )
        std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(v24.m128i_i64[1] + 1));
      v24 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v23) = 0;
      if ( si128.m128i_i64[1] >= 0x10uLL )
        std::_Deallocate<16,0>(v21[0], (const struct std::nothrow_t *)(si128.m128i_i64[1] + 1));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v21[0]) = 0;
      goto LABEL_28;
    }
  }
}
