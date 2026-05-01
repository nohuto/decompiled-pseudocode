/*
 * XREFs of ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x18032006C
 * Callers:
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18031EAC0 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18001084C (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
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

void __fastcall MultitaskingViewTelemetry::DragSwitchItem::Stop(
        MultitaskingViewTelemetry::DragSwitchItem *this,
        int a2)
{
  int *v2; // rsi
  int v4; // eax
  int *v5; // rsi
  const struct _TlgProvider_t *v6; // r14
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  enum _TABLETMODESTATE *v13; // rdx
  const struct _TlgProvider_t *v14; // rsi
  WINBOOL v15; // ecx
  DWORD CurrentThreadId; // eax
  enum _TABLETMODESTATE *v17; // rdx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v20; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v21; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL v22; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  DWORD *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+110h] [rbp+10h] BYREF
  int *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+130h] [rbp+30h] BYREF
  int *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+150h] [rbp+50h] BYREF
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+180h] [rbp+80h] BYREF
  DWORD *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  WINBOOL *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  int v61; // [rsp+228h] [rbp+128h] BYREF

  v61 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v5 )
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
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v7 = (const CHAR *)*((_QWORD *)v5 + 6);
      v25 = v5[1];
      v37 = &v25;
      v38 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v5 + 15);
      v40 = v5 + 14;
      v41 = 4LL;
      TlgCreateSz(&v42, v8);
      v9 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v26 = *v5;
      v43 = &v26;
      v44 = 4LL;
      TlgCreateWsz(&v45, v9);
      v10 = (const CHAR *)*((_QWORD *)v5 + 8);
      v18 = v5[6];
      v46 = &v18;
      v47 = 4LL;
      TlgCreateSz(&v48, v10);
      v11 = (const CHAR *)*((_QWORD *)v5 + 10);
      v19 = v5[18];
      v49 = &v19;
      v50 = 4LL;
      TlgCreateSz(&v51, v11);
      TlgCreateWsz(&v52, *((LPCWSTR *)v5 + 11));
      v12 = (const CHAR *)*((_QWORD *)v5 + 13);
      v20 = v5[24];
      v53 = &v20;
      v54 = 4LL;
      TlgCreateSz(&v55, v12);
      TlgCreateWsz(&v56, *((LPCWSTR *)v5 + 14));
      v58 = 4LL;
      v57 = &v61;
      TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v21, v13);
      v22 = v21;
      v60 = 4LL;
      v59 = &v22;
      TlgWrite(v6, &unk_18046525B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v22, &Context) && v22 )
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
    if ( *(_DWORD *)v14 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v15 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v28 = &v21;
      v21 = v15;
      v29 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v31 = 4LL;
      v20 = CurrentThreadId;
      v30 = &v20;
      v32 = &v61;
      v33 = 4LL;
      TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v19, v17);
      v18 = v19;
      v35 = 4LL;
      v34 = &v18;
      TlgWrite(v14, &unk_18046537B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((MultitaskingViewTelemetry::DragSwitchItem *)((char *)this + 8));
}
