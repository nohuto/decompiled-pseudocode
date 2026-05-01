/*
 * XREFs of ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803C3DFC
 * Callers:
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803C13D4 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x1803C1744 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173DB8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall TabletModeTelemetry::TMAppArrange::Stop(__int64 a1, WINBOOL a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
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
  int v21; // ecx
  DWORD CurrentThreadId; // eax
  WINBOOL v23; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v26; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  int *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  DWORD *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  WINBOOL *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+130h] [rbp+30h] BYREF
  int *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+150h] [rbp+50h] BYREF
  WINBOOL *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+170h] [rbp+70h] BYREF
  DWORD *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1D0h] [rbp+D0h] BYREF
  WINBOOL *v66; // [rsp+1E0h] [rbp+E0h]
  __int64 v67; // [rsp+1E8h] [rbp+E8h]

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
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
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v10 = (const CHAR *)*((_QWORD *)v6 + 6);
      v42 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v43 = 8LL;
      v44 = &v31;
      v29 = v6[1];
      v46 = &v29;
      v31 = 0x1000000LL;
      v45 = 8LL;
      v47 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 15);
      v49 = v6 + 14;
      v50 = 4LL;
      TlgCreateSz(&v51, v11);
      v12 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v30 = *v6;
      v52 = &v30;
      v53 = 4LL;
      TlgCreateWsz(&v54, v12);
      v13 = (const CHAR *)*((_QWORD *)v6 + 8);
      v23 = v6[6];
      v55 = &v23;
      v56 = 4LL;
      TlgCreateSz(&v57, v13);
      v14 = (const CHAR *)*((_QWORD *)v6 + 10);
      v24 = v6[18];
      v58 = &v24;
      v59 = 4LL;
      TlgCreateSz(&v60, v14);
      TlgCreateWsz(&v61, *((LPCWSTR *)v6 + 11));
      v15 = (const CHAR *)*((_QWORD *)v6 + 13);
      v25 = v6[24];
      v62 = &v25;
      v63 = 4LL;
      TlgCreateSz(&v64, v15);
      TlgCreateWsz(&v65, *((LPCWSTR *)v6 + 14));
      v26 = a2;
      v66 = &v26;
      v67 = 4LL;
      TlgWrite(v16, &unk_1804E0697, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v26, &Context) && v26 )
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
    if ( *(_DWORD *)v20 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v34 = 8LL;
      v33 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v35 = &v25;
      v25 = v21;
      v36 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v38 = 4LL;
      v24 = CurrentThreadId;
      v23 = a2;
      v37 = &v24;
      v39 = &v23;
      v40 = 4LL;
      TlgWrite(v20, &unk_1804E07C9, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 6u, &v32);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
