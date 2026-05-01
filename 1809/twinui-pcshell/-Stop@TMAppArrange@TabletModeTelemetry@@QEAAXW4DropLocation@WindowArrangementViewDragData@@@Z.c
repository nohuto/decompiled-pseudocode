/*
 * XREFs of ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035DFC0
 * Callers:
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035B5C4 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18035B920 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180148140 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall TabletModeTelemetry::TMAppArrange::Stop(__int64 a1, WINBOOL a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  TraceLoggingHProvider v13; // r10
  const struct _TlgProvider_t *v14; // rdi
  int v15; // ecx
  DWORD CurrentThreadId; // eax
  WINBOOL v17; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v20; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  DWORD *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  WINBOOL *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+100h] [rbp+0h] BYREF
  int *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+120h] [rbp+20h] BYREF
  WINBOOL *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+140h] [rbp+40h] BYREF
  DWORD *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+170h] [rbp+70h] BYREF
  int *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+1A0h] [rbp+A0h] BYREF
  WINBOOL *v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18050F8E8;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v7 = (const CHAR *)*((_QWORD *)v6 + 6);
      v23 = v6[1];
      v33 = &v23;
      v34 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v6 + 15);
      v36 = v6 + 14;
      v37 = 4LL;
      TlgCreateSz(&v38, v8);
      v9 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v24 = *v6;
      v39 = &v24;
      v40 = 4LL;
      TlgCreateWsz(&v41, v9);
      v10 = (const CHAR *)*((_QWORD *)v6 + 8);
      v17 = v6[6];
      v42 = &v17;
      v43 = 4LL;
      TlgCreateSz(&v44, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 10);
      v18 = v6[18];
      v45 = &v18;
      v46 = 4LL;
      TlgCreateSz(&v47, v11);
      TlgCreateWsz(&v48, *((LPCWSTR *)v6 + 11));
      v12 = (const CHAR *)*((_QWORD *)v6 + 13);
      v19 = v6[24];
      v49 = &v19;
      v50 = 4LL;
      TlgCreateSz(&v51, v12);
      TlgCreateWsz(&v52, *((LPCWSTR *)v6 + 14));
      v20 = a2;
      v53 = &v20;
      v54 = 4LL;
      TlgWrite(v13, &unk_1804676ED, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v20, &Context) && v20 )
    {
      Context = &qword_18050F8E8;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v14 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v26 = &v19;
      v19 = v15;
      v27 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v29 = 4LL;
      v18 = CurrentThreadId;
      v17 = a2;
      v28 = &v18;
      v30 = &v17;
      v31 = 4LL;
      TlgWrite(v14, &unk_1804677FF, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &v25);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
