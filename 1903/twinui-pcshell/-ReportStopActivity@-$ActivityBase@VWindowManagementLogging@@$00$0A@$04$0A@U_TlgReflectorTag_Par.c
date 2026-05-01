/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1803AF474
 * Callers:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803ABD64 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803B202C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rcx
  wil::TraceLoggingProvider *v8; // rax
  _QWORD *v9; // rcx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  TraceLoggingHProvider v16; // r10
  __int64 v17; // rcx
  wil::TraceLoggingProvider *v18; // rax
  _QWORD *v19; // rcx
  const struct _TlgProvider_t *v20; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v22; // rdx
  DWORD v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v26[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  int *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+E8h] [rbp-20h] BYREF
  DWORD *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+108h] [rbp+0h] BYREF
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+138h] [rbp+30h] BYREF
  WINBOOL *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+168h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR v55; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v56; // [rsp+198h] [rbp+90h]
  __int64 v57; // [rsp+1A0h] [rbp+98h]
  int *v58; // [rsp+1A8h] [rbp+A0h]
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  DWORD *v60; // [rsp+1B8h] [rbp+B0h]
  __int64 v61; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1D8h] [rbp+D0h] BYREF

  if ( a2 < 0 )
  {
    v4 = a1[6];
    v5 = *(_DWORD *)(v4 + 76);
    if ( v5 < 0 && v5 == *(_DWORD *)(v4 + 84) )
      v6 = v4 + 80;
    else
      v6 = 0LL;
    Context = 0LL;
    if ( v6 )
    {
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &unk_180599C78;
        v8 = (wil::TraceLoggingProvider *)operator new(v7, &unk_180599C78);
        wil::TraceLoggingProvider::TraceLoggingProvider(v8);
        *v9 = &ImmersiveIconsLogging::`vftable';
        v9[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
      }
      if ( **((_DWORD **)Context + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
      {
        v10 = *(const CHAR **)(v6 + 48);
        v33 = &v31;
        v29 = *(_DWORD *)(v6 + 4);
        v35 = &v29;
        v31 = 0x1000000LL;
        v34 = 8LL;
        v36 = 4LL;
        TlgCreateSz(&pDesc, v10);
        v11 = *(const CHAR **)(v6 + 120);
        v38 = v6 + 56;
        v39 = 4LL;
        TlgCreateSz(&v40, v11);
        v12 = *(const WCHAR **)(v6 + 16);
        LODWORD(v30) = *(_DWORD *)v6;
        v41 = &v30;
        v42 = 4LL;
        TlgCreateWsz(&v43, v12);
        v13 = *(const CHAR **)(v6 + 64);
        v24 = *(_DWORD *)(v6 + 24);
        v44 = &v24;
        v45 = 4LL;
        TlgCreateSz(&v46, v13);
        v14 = *(const CHAR **)(v6 + 80);
        v25 = *(_DWORD *)(v6 + 72);
        v47 = &v25;
        v48 = 4LL;
        TlgCreateSz(&v49, v14);
        TlgCreateWsz(&v50, *(LPCWSTR *)(v6 + 88));
        v15 = *(const CHAR **)(v6 + 104);
        v26[0] = *(_DWORD *)(v6 + 96);
        v51 = v26;
        v52 = 4LL;
        TlgCreateSz(&v53, v15);
        TlgCreateWsz(&v54, *(LPCWSTR *)(v6 + 112));
        TlgWrite(v16, &unk_1804BB808, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
      }
    }
    else
    {
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v26, &Context) && v26[0] )
      {
        Context = &unk_180599C78;
        v18 = (wil::TraceLoggingProvider *)operator new(v17, &unk_180599C78);
        wil::TraceLoggingProvider::TraceLoggingProvider(v18);
        *v19 = &ImmersiveIconsLogging::`vftable';
        v19[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
      }
      v20 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v20 > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
      {
        v31 = 0x1000000LL;
        v56 = &v31;
        v58 = &v25;
        v57 = 8LL;
        v25 = a2;
        v59 = 4LL;
        CurrentThreadId = GetCurrentThreadId();
        v22 = a1[6];
        v24 = CurrentThreadId;
        v60 = &v24;
        v61 = 4LL;
        TlgCreateSz(&v62, *(LPCSTR *)(v22 + 48));
        TlgCreateWsz(&v63, *(LPCWSTR *)(a1[6] + 56LL));
        TlgWrite(v20, &unk_1804BB91F, (LPCGUID)(a1[6] + 8LL), 0LL, 7u, &v55);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
