/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800D5F80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x1800D600C (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800D60B4 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
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
  wil::TraceLoggingProvider *v11; // rax
  unsigned __int8 v12; // dl
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  int *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  const struct _TlgProvider_t *v19; // r10
  __int16 v20; // ax
  int v21; // ecx
  int v22; // ecx
  const struct _TlgProvider_t *v23; // rcx
  const struct _TlgProvider_t *v24; // rcx
  const enum wil_ReportingKind *v25; // r14
  const struct _TlgProvider_t *v26; // rcx
  __int64 v27; // rdx
  const struct _TlgProvider_t *v28; // rcx
  __int16 v29; // ax
  int v30; // edx
  int v31; // edx
  __int64 v32; // rax
  __int16 v33; // ax
  int v34; // ecx
  int v35; // ecx
  const CHAR *v36; // rdx
  const CHAR *v37; // rdx
  const CHAR *v38; // rdx
  const CHAR *v39; // rdx
  TraceLoggingHProvider v40; // r10
  _BYTE v41[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v42; // [rsp+32h] [rbp-CEh] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  int *v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  int *v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int16 *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  const struct FEATURE_LOGGED_TRAITS *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  char *v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+F0h] [rbp-10h] BYREF
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+140h] [rbp+40h] BYREF
  char *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+160h] [rbp+60h] BYREF
  char *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  int v74; // [rsp+1D0h] [rbp+D0h] BYREF

  v74 = (int)this;
  v9 = (int)a4;
  v11 = (wil::TraceLoggingProvider *)wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                       this,
                                       lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v11, v12, v13) )
  {
    v15 = a5;
    if ( a5 )
    {
      v16 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
              v14,
              lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v16 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v16 + 8), 2uLL) )
      {
        v48 = 4LL;
        v47 = &v74;
        v20 = -1;
        if ( a2 )
          v21 = *a2;
        else
          v21 = -1;
        v45 = v21;
        v49 = &v45;
        v50 = 4LL;
        if ( a2 )
          v22 = a2[1];
        else
          v22 = -1;
        v43 = v22;
        v51 = &v43;
        v52 = 4LL;
        if ( a2 )
          v20 = *((unsigned __int8 *)a2 + 4);
        v42 = v20;
        v54 = v18;
        v53 = &v42;
        v41[0] = v9 != 0;
        v56 = 1LL;
        v55 = (const struct FEATURE_LOGGED_TRAITS *)v41;
        v44 = *v15;
        pDesc.Ptr = (ULONGLONG)&v44;
        v58 = &a8;
        *(_QWORD *)&pDesc.Size = 4LL;
        v59 = 8LL;
        TlgWrite(v19, &unk_1802E05BB, 0LL, 0LL, 9u, &pData);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v9 )
        {
          v23 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                                    v17,
                                                    lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                                                + 8);
          if ( *(_DWORD *)v23 > 5u )
          {
            if ( TlgKeywordOn(v23, 0xAuLL) )
            {
              v48 = 4LL;
              v47 = &v74;
              v44 = *a2;
              v49 = &v44;
              v43 = a2[1];
              v51 = &v43;
              v42 = *((unsigned __int8 *)a2 + 4);
              v53 = &v42;
              v55 = (const struct FEATURE_LOGGED_TRAITS *)v41;
              v45 = *v15;
              pDesc.Ptr = (ULONGLONG)&v45;
              v58 = &a8;
              v50 = 4LL;
              v52 = 4LL;
              v54 = 2LL;
              v41[0] = 1;
              v56 = 1LL;
              *(_QWORD *)&pDesc.Size = 4LL;
              v59 = 8LL;
              TlgWrite(v24, &unk_1802E074C, 0LL, 0LL, 9u, &pData);
            }
          }
        }
      }
    }
    else
    {
      v25 = a6;
      if ( a6 )
      {
        v26 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                                  v14,
                                                  lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                                              + 8);
        if ( *(_DWORD *)v26 > 5u && TlgKeywordOn(v26, 4uLL) )
        {
          v48 = v27;
          v47 = &v74;
          v29 = -1;
          if ( a2 )
            v30 = *a2;
          else
            v30 = -1;
          v44 = v30;
          v49 = &v44;
          v50 = 4LL;
          if ( a2 )
            v31 = a2[1];
          else
            v31 = -1;
          v43 = v31;
          v51 = &v43;
          v52 = 4LL;
          if ( a2 )
            v29 = *((unsigned __int8 *)a2 + 4);
          v42 = v29;
          v54 = 2LL;
          v53 = &v42;
          v41[0] = v9 != 0;
          v56 = 1LL;
          v55 = (const struct FEATURE_LOGGED_TRAITS *)v41;
          v45 = *(_DWORD *)v25;
          pDesc.Ptr = (ULONGLONG)&v45;
          v58 = (char *)&a7;
          v60.Ptr = (ULONGLONG)&a8;
          *(_QWORD *)&pDesc.Size = 4LL;
          v59 = 1LL;
          *(_QWORD *)&v60.Size = 8LL;
          TlgWrite(v28, &unk_1802E07C4, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( a3 )
      {
        v32 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
                v14,
                lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
        if ( **(_DWORD **)(v32 + 8) > 2u )
        {
          if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v32 + 8), 1uLL) )
          {
            v48 = 4LL;
            v47 = &v74;
            v33 = -1;
            if ( a2 )
              v34 = *a2;
            else
              v34 = -1;
            v44 = v34;
            v49 = &v44;
            v50 = 4LL;
            if ( a2 )
              v35 = a2[1];
            else
              v35 = -1;
            v43 = v35;
            v51 = &v43;
            v52 = 4LL;
            if ( a2 )
              v33 = *((unsigned __int8 *)a2 + 4);
            v36 = (const CHAR *)*((_QWORD *)a3 + 1);
            v42 = v33;
            v53 = &v42;
            v54 = 2LL;
            v55 = a3;
            v56 = 4LL;
            TlgCreateSz(&pDesc, v36);
            v37 = (const CHAR *)*((_QWORD *)a3 + 3);
            v58 = (char *)a3 + 4;
            v59 = 2LL;
            TlgCreateSz(&v60, v37);
            TlgCreateSz(&v61, *((LPCSTR *)a3 + 2));
            TlgCreateSz(&v62, *((LPCSTR *)a3 + 8));
            v38 = (const CHAR *)*((_QWORD *)a3 + 9);
            v63 = (char *)a3 + 56;
            v64 = 2LL;
            TlgCreateSz(&v65, v38);
            TlgCreateSz(&v66, *((LPCSTR *)a3 + 12));
            TlgCreateSz(&v67, *((LPCSTR *)a3 + 6));
            TlgCreateSz(&v68, *((LPCSTR *)a3 + 5));
            v39 = (const CHAR *)*((_QWORD *)a3 + 11);
            v69 = (char *)a3 + 32;
            v70 = 4LL;
            TlgCreateSz(&v71, v39);
            v73 = 4LL;
            v72 = (char *)a3 + 80;
            TlgWrite(v40, &unk_1802E062C, 0LL, 0LL, 0x14u, &pData);
          }
        }
      }
    }
  }
}
