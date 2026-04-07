/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180005320
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x1800053B4 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x180008F5C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18007A4C8 (_TlgCreateSz.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        char a8)
{
  int v9; // r15d
  _DWORD *v11; // rcx
  int *v12; // r14
  __int64 v13; // rcx
  __int16 v14; // ax
  int v15; // edx
  int v16; // edx
  __int64 v17; // rcx
  const enum wil_ReportingKind *v18; // r14
  __int64 v19; // rcx
  __int16 v20; // ax
  int v21; // edx
  int v22; // edx
  __int64 v23; // r10
  __int16 v24; // ax
  int v25; // ecx
  int v26; // ecx
  const CHAR *v27; // rdx
  const CHAR *v28; // rdx
  const CHAR *v29; // rdx
  const CHAR *v30; // rdx
  TraceLoggingHProvider v31; // r10
  _BYTE v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v33; // [rsp+32h] [rbp-CEh] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  int *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  int *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int16 *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  const struct FEATURE_LOGGED_TRAITS *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  char *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+F0h] [rbp-10h] BYREF
  char *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+140h] [rbp+40h] BYREF
  char *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+160h] [rbp+60h] BYREF
  char *v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  int v65; // [rsp+1D0h] [rbp+D0h] BYREF

  v65 = (int)this;
  v9 = (int)a4;
  v11 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                       this,
                       lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                   + 8);
  if ( v11 && *v11 )
  {
    v12 = a5;
    if ( a5 )
    {
      v13 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v11,
                          lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v13 > 5u
        && (*(_BYTE *)(v13 + 16) & 2) != 0
        && (*(_QWORD *)(v13 + 24) & 2LL) == *(_QWORD *)(v13 + 24) )
      {
        v39 = 4LL;
        v38 = &v65;
        v14 = -1;
        if ( a2 )
          v15 = *a2;
        else
          v15 = -1;
        v36 = v15;
        v40 = &v36;
        v41 = 4LL;
        if ( a2 )
          v16 = a2[1];
        else
          v16 = -1;
        v34 = v16;
        v42 = &v34;
        v43 = 4LL;
        if ( a2 )
          v14 = *((unsigned __int8 *)a2 + 4);
        v33 = v14;
        v45 = 2LL;
        v44 = &v33;
        v32[0] = v9 != 0;
        v47 = 1LL;
        v46 = (const struct FEATURE_LOGGED_TRAITS *)v32;
        v35 = *v12;
        pDesc.Ptr = (ULONGLONG)&v35;
        v49 = &a8;
        *(_QWORD *)&pDesc.Size = 4LL;
        v50 = 8LL;
        TlgWrite((TraceLoggingHProvider)v13, &unk_1800C7E9C, 0LL, 0LL, 9u, &pData);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v9 )
        {
          v17 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                              v13,
                              lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                          + 8);
          if ( *(_DWORD *)v17 > 5u
            && (*(_BYTE *)(v17 + 16) & 0xA) != 0
            && (*(_QWORD *)(v17 + 24) & 0xALL) == *(_QWORD *)(v17 + 24) )
          {
            v39 = 4LL;
            v38 = &v65;
            v35 = *a2;
            v40 = &v35;
            v34 = a2[1];
            v42 = &v34;
            v33 = *((unsigned __int8 *)a2 + 4);
            v44 = &v33;
            v46 = (const struct FEATURE_LOGGED_TRAITS *)v32;
            v36 = *v12;
            pDesc.Ptr = (ULONGLONG)&v36;
            v49 = &a8;
            v41 = 4LL;
            v43 = 4LL;
            v45 = 2LL;
            v32[0] = 1;
            v47 = 1LL;
            *(_QWORD *)&pDesc.Size = 4LL;
            v50 = 8LL;
            TlgWrite((TraceLoggingHProvider)v17, &unk_1800C7E24, 0LL, 0LL, 9u, &pData);
          }
        }
      }
    }
    else
    {
      v18 = a6;
      if ( a6 )
      {
        v19 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                            v11,
                            lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v19 > 5u
          && (*(_BYTE *)(v19 + 16) & 4) != 0
          && (*(_QWORD *)(v19 + 24) & 4LL) == *(_QWORD *)(v19 + 24) )
        {
          v39 = 4LL;
          v38 = &v65;
          v20 = -1;
          if ( a2 )
            v21 = *a2;
          else
            v21 = -1;
          v35 = v21;
          v40 = &v35;
          v41 = 4LL;
          if ( a2 )
            v22 = a2[1];
          else
            v22 = -1;
          v34 = v22;
          v42 = &v34;
          v43 = 4LL;
          if ( a2 )
            v20 = *((unsigned __int8 *)a2 + 4);
          v33 = v20;
          v45 = 2LL;
          v44 = &v33;
          v32[0] = v9 != 0;
          v47 = 1LL;
          v46 = (const struct FEATURE_LOGGED_TRAITS *)v32;
          v36 = *(_DWORD *)v18;
          pDesc.Ptr = (ULONGLONG)&v36;
          v49 = (char *)&a7;
          v51.Ptr = (ULONGLONG)&a8;
          *(_QWORD *)&pDesc.Size = 4LL;
          v50 = 1LL;
          *(_QWORD *)&v51.Size = 8LL;
          TlgWrite((TraceLoggingHProvider)v19, &unk_1800C7D9C, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( a3 )
      {
        v23 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                            v11,
                            lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v23 > 2u
          && (*(_BYTE *)(v23 + 16) & 1) != 0
          && (*(_QWORD *)(v23 + 24) & 1LL) == *(_QWORD *)(v23 + 24) )
        {
          v39 = 4LL;
          v38 = &v65;
          v24 = -1;
          if ( a2 )
            v25 = *a2;
          else
            v25 = -1;
          v35 = v25;
          v40 = &v35;
          v41 = 4LL;
          if ( a2 )
            v26 = a2[1];
          else
            v26 = -1;
          v34 = v26;
          v42 = &v34;
          v43 = 4LL;
          if ( a2 )
            v24 = *((unsigned __int8 *)a2 + 4);
          v27 = (const CHAR *)*((_QWORD *)a3 + 1);
          v33 = v24;
          v44 = &v33;
          v45 = 2LL;
          v46 = a3;
          v47 = 4LL;
          TlgCreateSz(&pDesc, v27);
          v28 = (const CHAR *)*((_QWORD *)a3 + 3);
          v49 = (char *)a3 + 4;
          v50 = 2LL;
          TlgCreateSz(&v51, v28);
          TlgCreateSz(&v52, *((LPCSTR *)a3 + 2));
          TlgCreateSz(&v53, *((LPCSTR *)a3 + 8));
          v29 = (const CHAR *)*((_QWORD *)a3 + 9);
          v54 = (char *)a3 + 56;
          v55 = 2LL;
          TlgCreateSz(&v56, v29);
          TlgCreateSz(&v57, *((LPCSTR *)a3 + 12));
          TlgCreateSz(&v58, *((LPCSTR *)a3 + 6));
          TlgCreateSz(&v59, *((LPCSTR *)a3 + 5));
          v30 = (const CHAR *)*((_QWORD *)a3 + 11);
          v60 = (char *)a3 + 32;
          v61 = 4LL;
          TlgCreateSz(&v62, v30);
          v64 = 4LL;
          v63 = (char *)a3 + 80;
          TlgWrite(v31, &unk_1800C7C7C, 0LL, 0LL, 0x14u, &pData);
        }
      }
    }
  }
}
