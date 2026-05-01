/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180076350
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007641C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
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
  unsigned __int64 v11; // r8
  WINBOOL *v12; // r14
  __int64 v13; // rdx
  const struct _TlgProvider_t *v14; // r10
  __int16 v15; // ax
  int v16; // ecx
  int v17; // ecx
  const struct _TlgProvider_t *v18; // rcx
  const struct _TlgProvider_t *v19; // rcx
  WINBOOL *v20; // r14
  const struct _TlgProvider_t *v21; // rcx
  __int64 v22; // rdx
  const struct _TlgProvider_t *v23; // rcx
  __int16 v24; // ax
  int v25; // edx
  int v26; // edx
  __int16 v27; // ax
  int v28; // ecx
  int v29; // ecx
  const CHAR *v30; // rdx
  const CHAR *v31; // rdx
  const CHAR *v32; // rdx
  const CHAR *v33; // rdx
  TraceLoggingHProvider v34; // r10
  _BYTE v35[4]; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID v39; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v40; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  int *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  int *v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  WINBOOL *p_fPending; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  const struct FEATURE_LOGGED_TRAITS *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  char *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+110h] [rbp+10h] BYREF
  char *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+160h] [rbp+60h] BYREF
  char *v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+180h] [rbp+80h] BYREF
  char *v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  int v70; // [rsp+1F0h] [rbp+F0h] BYREF

  v70 = (int)this;
  v8 = (int)a4;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_1805C1E58;
    qword_1805C1E58[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C1E70 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C1E58, qword_1805C1E70);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805C1E58);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context[0], 0, v11) )
  {
    v12 = a5;
    if ( a5 )
    {
      v39 = 0LL;
      if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v40, &v39) && v40 )
      {
        v39 = qword_1805C1E58;
        qword_1805C1E58[0] = &ShellScreenClippingLogging::`vftable';
        qword_1805C1E70 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C1E58, qword_1805C1E70);
        InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805C1E58);
      }
      if ( **((_DWORD **)v39 + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v39 + 1), 2uLL) )
      {
        v44 = 4LL;
        v43 = &v70;
        v15 = -1;
        if ( a2 )
          v16 = *a2;
        else
          v16 = -1;
        v37 = v16;
        v45 = &v37;
        v46 = 4LL;
        if ( a2 )
          v17 = a2[1];
        else
          v17 = -1;
        v38 = v17;
        v47 = &v38;
        v48 = 4LL;
        if ( a2 )
          v15 = *((unsigned __int8 *)a2 + 4);
        LOWORD(fPending) = v15;
        v50 = v13;
        p_fPending = &fPending;
        v35[0] = v8 != 0;
        v52 = 1LL;
        v51 = (const struct FEATURE_LOGGED_TRAITS *)v35;
        LODWORD(Context[0]) = *v12;
        pDesc.Ptr = (ULONGLONG)Context;
        v54 = &a8;
        *(_QWORD *)&pDesc.Size = 4LL;
        v55 = 8LL;
        TlgWrite(v14, &unk_1804DB8D4, 0LL, 0LL, 9u, &pData);
      }
      if ( *((_BYTE *)a2 + 4) == 1 && v8 )
      {
        v39 = 0LL;
        if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, (PBOOL)Context, &v39)
          && LODWORD(Context[0]) )
        {
          v39 = qword_1805C1E58;
          qword_1805C1E58[0] = &ShellScreenClippingLogging::`vftable';
          qword_1805C1E70 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C1E58, qword_1805C1E70);
          InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805C1E58);
        }
        v18 = (const struct _TlgProvider_t *)*((_QWORD *)v39 + 1);
        if ( *(_DWORD *)v18 > 5u )
        {
          if ( TlgKeywordOn(v18, 0xAuLL) )
          {
            v44 = 4LL;
            v43 = &v70;
            v38 = *a2;
            v45 = &v38;
            v37 = a2[1];
            v47 = &v37;
            LOWORD(fPending) = *((unsigned __int8 *)a2 + 4);
            p_fPending = &fPending;
            v51 = (const struct FEATURE_LOGGED_TRAITS *)v35;
            v40 = *v12;
            pDesc.Ptr = (ULONGLONG)&v40;
            v54 = &a8;
            v46 = 4LL;
            v48 = 4LL;
            v50 = 2LL;
            v35[0] = 1;
            v52 = 1LL;
            *(_QWORD *)&pDesc.Size = 4LL;
            v55 = 8LL;
            TlgWrite(v19, &unk_1804DBC6F, 0LL, 0LL, 9u, &pData);
          }
        }
      }
    }
    else
    {
      v20 = a6;
      if ( a6 )
      {
        v39 = 0LL;
        if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, (PBOOL)Context, &v39)
          && LODWORD(Context[0]) )
        {
          v39 = qword_1805C1E58;
          qword_1805C1E58[0] = &ShellScreenClippingLogging::`vftable';
          qword_1805C1E70 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C1E58, qword_1805C1E70);
          InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805C1E58);
        }
        v21 = (const struct _TlgProvider_t *)*((_QWORD *)v39 + 1);
        if ( *(_DWORD *)v21 > 5u && TlgKeywordOn(v21, 4uLL) )
        {
          v44 = v22;
          v43 = &v70;
          v24 = -1;
          if ( a2 )
            v25 = *a2;
          else
            v25 = -1;
          v38 = v25;
          v45 = &v38;
          v46 = 4LL;
          if ( a2 )
            v26 = a2[1];
          else
            v26 = -1;
          v37 = v26;
          v47 = &v37;
          v48 = 4LL;
          if ( a2 )
            v24 = *((unsigned __int8 *)a2 + 4);
          LOWORD(fPending) = v24;
          v50 = 2LL;
          p_fPending = &fPending;
          v35[0] = v8 != 0;
          v52 = 1LL;
          v51 = (const struct FEATURE_LOGGED_TRAITS *)v35;
          v40 = *v20;
          pDesc.Ptr = (ULONGLONG)&v40;
          v54 = (char *)&a7;
          v56.Ptr = (ULONGLONG)&a8;
          *(_QWORD *)&pDesc.Size = 4LL;
          v55 = 1LL;
          *(_QWORD *)&v56.Size = 8LL;
          TlgWrite(v23, &unk_1804DBBE7, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( a3 )
      {
        v39 = 0LL;
        if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, (PBOOL)Context, &v39)
          && LODWORD(Context[0]) )
        {
          v39 = qword_1805C1E58;
          qword_1805C1E58[0] = &ShellScreenClippingLogging::`vftable';
          qword_1805C1E70 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C1E58, qword_1805C1E70);
          InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805C1E58);
        }
        if ( **((_DWORD **)v39 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v39 + 1), 1uLL) )
        {
          v44 = 4LL;
          v43 = &v70;
          v27 = -1;
          if ( a2 )
            v28 = *a2;
          else
            v28 = -1;
          v38 = v28;
          v45 = &v38;
          v46 = 4LL;
          if ( a2 )
            v29 = a2[1];
          else
            v29 = -1;
          v37 = v29;
          v47 = &v37;
          v48 = 4LL;
          if ( a2 )
            v27 = *((unsigned __int8 *)a2 + 4);
          v30 = (const CHAR *)*((_QWORD *)a3 + 1);
          LOWORD(fPending) = v27;
          p_fPending = &fPending;
          v50 = 2LL;
          v51 = a3;
          v52 = 4LL;
          TlgCreateSz(&pDesc, v30);
          v31 = (const CHAR *)*((_QWORD *)a3 + 3);
          v54 = (char *)a3 + 4;
          v55 = 2LL;
          TlgCreateSz(&v56, v31);
          TlgCreateSz(&v57, *((LPCSTR *)a3 + 2));
          TlgCreateSz(&v58, *((LPCSTR *)a3 + 8));
          v32 = (const CHAR *)*((_QWORD *)a3 + 9);
          v59 = (char *)a3 + 56;
          v60 = 2LL;
          TlgCreateSz(&v61, v32);
          TlgCreateSz(&v62, *((LPCSTR *)a3 + 12));
          TlgCreateSz(&v63, *((LPCSTR *)a3 + 6));
          TlgCreateSz(&v64, *((LPCSTR *)a3 + 5));
          v33 = (const CHAR *)*((_QWORD *)a3 + 11);
          v65 = (char *)a3 + 32;
          v66 = 4LL;
          TlgCreateSz(&v67, v33);
          v69 = 4LL;
          v68 = (char *)a3 + 80;
          TlgWrite(v34, &unk_1804DB945, 0LL, 0LL, 0x14u, &pData);
        }
      }
    }
  }
}
