/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18004BD70
 * Callers:
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004BCD4 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x18004C20C (--1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rsi
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  const struct _TlgProvider_t *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // rdx
  DWORD v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v20[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+E8h] [rbp-20h] BYREF
  DWORD *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+108h] [rbp+0h] BYREF
  int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+138h] [rbp+30h] BYREF
  WINBOOL *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+168h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR v49; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v50; // [rsp+198h] [rbp+90h]
  __int64 v51; // [rsp+1A0h] [rbp+98h]
  int *v52; // [rsp+1A8h] [rbp+A0h]
  __int64 v53; // [rsp+1B0h] [rbp+A8h]
  DWORD *v54; // [rsp+1B8h] [rbp+B0h]
  __int64 v55; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1D8h] [rbp+D0h] BYREF

  if ( a2 < 0 )
  {
    v5 = a1[6];
    v6 = *(_DWORD *)(v5 + 76);
    if ( v6 < 0 && v6 == *(_DWORD *)(v5 + 84) )
      v7 = v5 + 80;
    else
      v7 = 0LL;
    Context = 0LL;
    if ( v7 )
    {
      if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_18059A3C8;
        qword_18059A3C8 = &ShellScreenClippingLogging::`vftable';
        qword_18059A3E0 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059A3C8, qword_18059A3E0);
        InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &qword_18059A3C8);
      }
      if ( **((_DWORD **)Context + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
      {
        v8 = *(const CHAR **)(v7 + 48);
        v27 = &v25;
        v23 = *(_DWORD *)(v7 + 4);
        v29 = &v23;
        v25 = 0x1000000LL;
        v28 = 8LL;
        v30 = 4LL;
        TlgCreateSz(&pDesc, v8);
        v9 = *(const CHAR **)(v7 + 120);
        v32 = v7 + 56;
        v33 = 4LL;
        TlgCreateSz(&v34, v9);
        v10 = *(const WCHAR **)(v7 + 16);
        LODWORD(v24) = *(_DWORD *)v7;
        v35 = &v24;
        v36 = 4LL;
        TlgCreateWsz(&v37, v10);
        v11 = *(const CHAR **)(v7 + 64);
        v18 = *(_DWORD *)(v7 + 24);
        v38 = &v18;
        v39 = 4LL;
        TlgCreateSz(&v40, v11);
        v12 = *(const CHAR **)(v7 + 80);
        v19 = *(_DWORD *)(v7 + 72);
        v41 = &v19;
        v42 = 4LL;
        TlgCreateSz(&v43, v12);
        TlgCreateWsz(&v44, *(LPCWSTR *)(v7 + 88));
        v13 = *(const CHAR **)(v7 + 104);
        v20[0] = *(_DWORD *)(v7 + 96);
        v45 = v20;
        v46 = 4LL;
        TlgCreateSz(&v47, v13);
        TlgCreateWsz(&v48, *(LPCWSTR *)(v7 + 112));
        TlgWrite(v14, &unk_1804BB808, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
      }
    }
    else
    {
      if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, v20, &Context) && v20[0] )
      {
        Context = &qword_18059A3C8;
        qword_18059A3C8 = &ShellScreenClippingLogging::`vftable';
        qword_18059A3E0 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059A3C8, qword_18059A3E0);
        InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &qword_18059A3C8);
      }
      v15 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v15 > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
      {
        v25 = 0x1000000LL;
        v50 = &v25;
        v52 = &v19;
        v51 = 8LL;
        v19 = a2;
        v53 = 4LL;
        CurrentThreadId = GetCurrentThreadId();
        v17 = a1[6];
        v18 = CurrentThreadId;
        v54 = &v18;
        v55 = 4LL;
        TlgCreateSz(&v56, *(LPCSTR *)(v17 + 48));
        TlgCreateWsz(&v57, *(LPCWSTR *)(a1[6] + 56LL));
        TlgWrite(v15, &unk_1804BB91F, (LPCGUID)(a1[6] + 8LL), 0LL, 7u, &v49);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
