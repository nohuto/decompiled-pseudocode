/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180027E30
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180027EC4 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
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
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  const struct _TlgProvider_t *v16; // r10
  __int16 v17; // ax
  int v18; // ecx
  int v19; // ecx
  const struct _TlgProvider_t *v20; // rcx
  const struct _TlgProvider_t *v21; // rcx
  const enum wil_ReportingKind *v22; // r14
  const struct _TlgProvider_t *v23; // rcx
  __int64 v24; // rdx
  const struct _TlgProvider_t *v25; // rcx
  __int16 v26; // ax
  int v27; // edx
  int v28; // edx
  __int64 v29; // rax
  __int16 v30; // ax
  int v31; // ecx
  int v32; // ecx
  const CHAR *v33; // rdx
  const CHAR *v34; // rdx
  const CHAR *v35; // rdx
  const CHAR *v36; // rdx
  TraceLoggingHProvider v37; // r10
  _BYTE v38[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v39; // [rsp+32h] [rbp-CEh] BYREF
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  int v42; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  int *v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  int *v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int16 *v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  const struct FEATURE_LOGGED_TRAITS *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  char *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+F0h] [rbp-10h] BYREF
  char *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+140h] [rbp+40h] BYREF
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+160h] [rbp+60h] BYREF
  char *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  int v71; // [rsp+1D0h] [rbp+D0h] BYREF

  v71 = (int)this;
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
      v13 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
              v11,
              lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v13 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v13 + 8), 2uLL) )
      {
        v45 = 4LL;
        v44 = &v71;
        v17 = -1;
        if ( a2 )
          v18 = *a2;
        else
          v18 = -1;
        v42 = v18;
        v46 = &v42;
        v47 = 4LL;
        if ( a2 )
          v19 = a2[1];
        else
          v19 = -1;
        v40 = v19;
        v48 = &v40;
        v49 = 4LL;
        if ( a2 )
          v17 = *((unsigned __int8 *)a2 + 4);
        v39 = v17;
        v51 = v15;
        v50 = &v39;
        v38[0] = v9 != 0;
        v53 = 1LL;
        v52 = (const struct FEATURE_LOGGED_TRAITS *)v38;
        v41 = *v12;
        pDesc.Ptr = (ULONGLONG)&v41;
        v55 = &a8;
        *(_QWORD *)&pDesc.Size = 4LL;
        v56 = 8LL;
        TlgWrite(v16, &unk_18019A1CC, 0LL, 0LL, 9u, &pData);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v9 )
        {
          v20 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                                    v14,
                                                    lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                                                + 8);
          if ( *(_DWORD *)v20 > 5u )
          {
            if ( TlgKeywordOn(v20, 0xAuLL) )
            {
              v45 = 4LL;
              v44 = &v71;
              v41 = *a2;
              v46 = &v41;
              v40 = a2[1];
              v48 = &v40;
              v39 = *((unsigned __int8 *)a2 + 4);
              v50 = &v39;
              v52 = (const struct FEATURE_LOGGED_TRAITS *)v38;
              v42 = *v12;
              pDesc.Ptr = (ULONGLONG)&v42;
              v55 = &a8;
              v47 = 4LL;
              v49 = 4LL;
              v51 = 2LL;
              v38[0] = 1;
              v53 = 1LL;
              *(_QWORD *)&pDesc.Size = 4LL;
              v56 = 8LL;
              TlgWrite(v21, &unk_18019A51B, 0LL, 0LL, 9u, &pData);
            }
          }
        }
      }
    }
    else
    {
      v22 = a6;
      if ( a6 )
      {
        v23 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                                  v11,
                                                  lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                                              + 8);
        if ( *(_DWORD *)v23 > 5u && TlgKeywordOn(v23, 4uLL) )
        {
          v45 = v24;
          v44 = &v71;
          v26 = -1;
          if ( a2 )
            v27 = *a2;
          else
            v27 = -1;
          v41 = v27;
          v46 = &v41;
          v47 = 4LL;
          if ( a2 )
            v28 = a2[1];
          else
            v28 = -1;
          v40 = v28;
          v48 = &v40;
          v49 = 4LL;
          if ( a2 )
            v26 = *((unsigned __int8 *)a2 + 4);
          v39 = v26;
          v51 = 2LL;
          v50 = &v39;
          v38[0] = v9 != 0;
          v53 = 1LL;
          v52 = (const struct FEATURE_LOGGED_TRAITS *)v38;
          v42 = *(_DWORD *)v22;
          pDesc.Ptr = (ULONGLONG)&v42;
          v55 = (char *)&a7;
          v57.Ptr = (ULONGLONG)&a8;
          *(_QWORD *)&pDesc.Size = 4LL;
          v56 = 1LL;
          *(_QWORD *)&v57.Size = 8LL;
          TlgWrite(v25, &unk_18019A493, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( a3 )
      {
        v29 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
                v11,
                lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
        if ( **(_DWORD **)(v29 + 8) > 2u )
        {
          if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v29 + 8), 1uLL) )
          {
            v45 = 4LL;
            v44 = &v71;
            v30 = -1;
            if ( a2 )
              v31 = *a2;
            else
              v31 = -1;
            v41 = v31;
            v46 = &v41;
            v47 = 4LL;
            if ( a2 )
              v32 = a2[1];
            else
              v32 = -1;
            v40 = v32;
            v48 = &v40;
            v49 = 4LL;
            if ( a2 )
              v30 = *((unsigned __int8 *)a2 + 4);
            v33 = (const CHAR *)*((_QWORD *)a3 + 1);
            v39 = v30;
            v50 = &v39;
            v51 = 2LL;
            v52 = a3;
            v53 = 4LL;
            TlgCreateSz(&pDesc, v33);
            v34 = (const CHAR *)*((_QWORD *)a3 + 3);
            v55 = (char *)a3 + 4;
            v56 = 2LL;
            TlgCreateSz(&v57, v34);
            TlgCreateSz(&v58, *((LPCSTR *)a3 + 2));
            TlgCreateSz(&v59, *((LPCSTR *)a3 + 8));
            v35 = (const CHAR *)*((_QWORD *)a3 + 9);
            v60 = (char *)a3 + 56;
            v61 = 2LL;
            TlgCreateSz(&v62, v35);
            TlgCreateSz(&v63, *((LPCSTR *)a3 + 12));
            TlgCreateSz(&v64, *((LPCSTR *)a3 + 6));
            TlgCreateSz(&v65, *((LPCSTR *)a3 + 5));
            v36 = (const CHAR *)*((_QWORD *)a3 + 11);
            v66 = (char *)a3 + 32;
            v67 = 4LL;
            TlgCreateSz(&v68, v36);
            v70 = 4LL;
            v69 = (char *)a3 + 80;
            TlgWrite(v37, &unk_18019A23D, 0LL, 0LL, 0x14u, &pData);
          }
        }
      }
    }
  }
}
