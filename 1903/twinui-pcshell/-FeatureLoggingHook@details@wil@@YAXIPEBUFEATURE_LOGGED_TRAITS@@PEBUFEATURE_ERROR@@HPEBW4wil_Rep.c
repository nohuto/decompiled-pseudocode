/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180049BE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        WINBOOL *a5,
        WINBOOL *a6,
        const enum wil_VariantReportingKind *a7,
        char a8)
{
  int v8; // r15d
  WINBOOL *v11; // r14
  __int64 v12; // rdx
  const struct _TlgProvider_t *v13; // r10
  __int16 v14; // ax
  int v15; // ecx
  int v16; // ecx
  const struct _TlgProvider_t *v17; // rcx
  const struct _TlgProvider_t *v18; // rcx
  WINBOOL *v19; // r14
  const struct _TlgProvider_t *v20; // rcx
  __int64 v21; // rdx
  const struct _TlgProvider_t *v22; // rcx
  __int16 v23; // ax
  int v24; // edx
  int v25; // edx
  __int16 v26; // ax
  int v27; // ecx
  int v28; // ecx
  const CHAR *v29; // rdx
  const CHAR *v30; // rdx
  const CHAR *v31; // rdx
  const CHAR *v32; // rdx
  TraceLoggingHProvider v33; // r10
  _BYTE v34[4]; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  int v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID v38; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v39; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  int *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  int *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  WINBOOL *p_fPending; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  const struct FEATURE_LOGGED_TRAITS *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  char *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+110h] [rbp+10h] BYREF
  char *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+160h] [rbp+60h] BYREF
  char *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+180h] [rbp+80h] BYREF
  char *v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  int v69; // [rsp+1F0h] [rbp+F0h] BYREF

  v69 = (int)this;
  v8 = (int)a4;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_180599A38;
    qword_180599A38[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599A50 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599A38, qword_180599A50);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_180599A38);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context[0], 0) )
  {
    v11 = a5;
    if ( a5 )
    {
      v38 = 0LL;
      if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v39, &v38) && v39 )
      {
        v38 = qword_180599A38;
        qword_180599A38[0] = &ShellScreenClippingLogging::`vftable';
        qword_180599A50 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599A38, qword_180599A50);
        InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_180599A38);
      }
      if ( **((_DWORD **)v38 + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v38 + 1), 2uLL) )
      {
        v43 = 4LL;
        v42 = &v69;
        v14 = -1;
        if ( a2 )
          v15 = *a2;
        else
          v15 = -1;
        v36 = v15;
        v44 = &v36;
        v45 = 4LL;
        if ( a2 )
          v16 = a2[1];
        else
          v16 = -1;
        v37 = v16;
        v46 = &v37;
        v47 = 4LL;
        if ( a2 )
          v14 = *((unsigned __int8 *)a2 + 4);
        LOWORD(fPending) = v14;
        v49 = v12;
        p_fPending = &fPending;
        v34[0] = v8 != 0;
        v51 = 1LL;
        v50 = (const struct FEATURE_LOGGED_TRAITS *)v34;
        LODWORD(Context[0]) = *v11;
        pDesc.Ptr = (ULONGLONG)Context;
        v53 = &a8;
        *(_QWORD *)&pDesc.Size = 4LL;
        v54 = 8LL;
        TlgWrite(v13, &unk_1804B62D4, 0LL, 0LL, 9u, &pData);
      }
      if ( *((_BYTE *)a2 + 4) == 1 && v8 )
      {
        v38 = 0LL;
        if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, (PBOOL)Context, &v38)
          && LODWORD(Context[0]) )
        {
          v38 = qword_180599A38;
          qword_180599A38[0] = &ShellScreenClippingLogging::`vftable';
          qword_180599A50 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599A38, qword_180599A50);
          InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_180599A38);
        }
        v17 = (const struct _TlgProvider_t *)*((_QWORD *)v38 + 1);
        if ( *(_DWORD *)v17 > 5u )
        {
          if ( TlgKeywordOn(v17, 0xAuLL) )
          {
            v43 = 4LL;
            v42 = &v69;
            v37 = *a2;
            v44 = &v37;
            v36 = a2[1];
            v46 = &v36;
            LOWORD(fPending) = *((unsigned __int8 *)a2 + 4);
            p_fPending = &fPending;
            v50 = (const struct FEATURE_LOGGED_TRAITS *)v34;
            v39 = *v11;
            pDesc.Ptr = (ULONGLONG)&v39;
            v53 = &a8;
            v45 = 4LL;
            v47 = 4LL;
            v49 = 2LL;
            v34[0] = 1;
            v51 = 1LL;
            *(_QWORD *)&pDesc.Size = 4LL;
            v54 = 8LL;
            TlgWrite(v18, &unk_1804B666F, 0LL, 0LL, 9u, &pData);
          }
        }
      }
    }
    else
    {
      v19 = a6;
      if ( a6 )
      {
        v38 = 0LL;
        if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, (PBOOL)Context, &v38)
          && LODWORD(Context[0]) )
        {
          v38 = qword_180599A38;
          qword_180599A38[0] = &ShellScreenClippingLogging::`vftable';
          qword_180599A50 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599A38, qword_180599A50);
          InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_180599A38);
        }
        v20 = (const struct _TlgProvider_t *)*((_QWORD *)v38 + 1);
        if ( *(_DWORD *)v20 > 5u && TlgKeywordOn(v20, 4uLL) )
        {
          v43 = v21;
          v42 = &v69;
          v23 = -1;
          if ( a2 )
            v24 = *a2;
          else
            v24 = -1;
          v37 = v24;
          v44 = &v37;
          v45 = 4LL;
          if ( a2 )
            v25 = a2[1];
          else
            v25 = -1;
          v36 = v25;
          v46 = &v36;
          v47 = 4LL;
          if ( a2 )
            v23 = *((unsigned __int8 *)a2 + 4);
          LOWORD(fPending) = v23;
          v49 = 2LL;
          p_fPending = &fPending;
          v34[0] = v8 != 0;
          v51 = 1LL;
          v50 = (const struct FEATURE_LOGGED_TRAITS *)v34;
          v39 = *v19;
          pDesc.Ptr = (ULONGLONG)&v39;
          v53 = (char *)&a7;
          v55.Ptr = (ULONGLONG)&a8;
          *(_QWORD *)&pDesc.Size = 4LL;
          v54 = 1LL;
          *(_QWORD *)&v55.Size = 8LL;
          TlgWrite(v22, &unk_1804B65E7, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( a3 )
      {
        v38 = 0LL;
        if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, (PBOOL)Context, &v38)
          && LODWORD(Context[0]) )
        {
          v38 = qword_180599A38;
          qword_180599A38[0] = &ShellScreenClippingLogging::`vftable';
          qword_180599A50 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599A38, qword_180599A50);
          InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_180599A38);
        }
        if ( **((_DWORD **)v38 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v38 + 1), 1uLL) )
        {
          v43 = 4LL;
          v42 = &v69;
          v26 = -1;
          if ( a2 )
            v27 = *a2;
          else
            v27 = -1;
          v37 = v27;
          v44 = &v37;
          v45 = 4LL;
          if ( a2 )
            v28 = a2[1];
          else
            v28 = -1;
          v36 = v28;
          v46 = &v36;
          v47 = 4LL;
          if ( a2 )
            v26 = *((unsigned __int8 *)a2 + 4);
          v29 = (const CHAR *)*((_QWORD *)a3 + 1);
          LOWORD(fPending) = v26;
          p_fPending = &fPending;
          v49 = 2LL;
          v50 = a3;
          v51 = 4LL;
          TlgCreateSz(&pDesc, v29);
          v30 = (const CHAR *)*((_QWORD *)a3 + 3);
          v53 = (char *)a3 + 4;
          v54 = 2LL;
          TlgCreateSz(&v55, v30);
          TlgCreateSz(&v56, *((LPCSTR *)a3 + 2));
          TlgCreateSz(&v57, *((LPCSTR *)a3 + 8));
          v31 = (const CHAR *)*((_QWORD *)a3 + 9);
          v58 = (char *)a3 + 56;
          v59 = 2LL;
          TlgCreateSz(&v60, v31);
          TlgCreateSz(&v61, *((LPCSTR *)a3 + 12));
          TlgCreateSz(&v62, *((LPCSTR *)a3 + 6));
          TlgCreateSz(&v63, *((LPCSTR *)a3 + 5));
          v32 = (const CHAR *)*((_QWORD *)a3 + 11);
          v64 = (char *)a3 + 32;
          v65 = 4LL;
          TlgCreateSz(&v66, v32);
          v68 = 4LL;
          v67 = (char *)a3 + 80;
          TlgWrite(v33, &unk_1804B6345, 0LL, 0LL, 0x14u, &pData);
        }
      }
    }
  }
}
