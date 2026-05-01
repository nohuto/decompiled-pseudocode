/*
 * XREFs of ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x180380528
 * Callers:
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18037EFB4 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x180054534 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173DB8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall MultitaskingViewTelemetry::DragSwitchItem::Stop(
        MultitaskingViewTelemetry::DragSwitchItem *this,
        int a2)
{
  int *v2; // rsi
  int v4; // eax
  int *v5; // rsi
  __int64 v6; // rcx
  wil::TraceLoggingProvider *v7; // rax
  _QWORD *v8; // rcx
  const struct _TlgProvider_t *v9; // r14
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  enum _TABLETMODESTATE *v16; // rdx
  __int64 v17; // rcx
  wil::TraceLoggingProvider *v18; // rax
  _QWORD *v19; // rcx
  const struct _TlgProvider_t *v20; // rsi
  WINBOOL v21; // ecx
  DWORD CurrentThreadId; // eax
  enum _TABLETMODESTATE *v23; // rdx
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v26; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v27; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL v28; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  WINBOOL *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  DWORD *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int64 *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  int *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+150h] [rbp+50h] BYREF
  int *v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+170h] [rbp+70h] BYREF
  int *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+190h] [rbp+90h] BYREF
  int *v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1C0h] [rbp+C0h] BYREF
  DWORD *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+208h] [rbp+108h]
  WINBOOL *v72; // [rsp+210h] [rbp+110h]
  __int64 v73; // [rsp+218h] [rbp+118h]
  int v74; // [rsp+268h] [rbp+168h] BYREF

  v74 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v5 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_180599C78;
      v7 = (wil::TraceLoggingProvider *)operator new(v6, &unk_180599C78);
      wil::TraceLoggingProvider::TraceLoggingProvider(v7);
      *v8 = &ImmersiveIconsLogging::`vftable';
      v8[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v10 = (const CHAR *)*((_QWORD *)v5 + 6);
      v46 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v47 = 8LL;
      v48 = &v33;
      v31 = v5[1];
      v50 = &v31;
      v33 = 0x1000000LL;
      v49 = 8LL;
      v51 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v5 + 15);
      v53 = v5 + 14;
      v54 = 4LL;
      TlgCreateSz(&v55, v11);
      v12 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v32 = *v5;
      v56 = &v32;
      v57 = 4LL;
      TlgCreateWsz(&v58, v12);
      v13 = (const CHAR *)*((_QWORD *)v5 + 8);
      v24 = v5[6];
      v59 = &v24;
      v60 = 4LL;
      TlgCreateSz(&v61, v13);
      v14 = (const CHAR *)*((_QWORD *)v5 + 10);
      v25 = v5[18];
      v62 = &v25;
      v63 = 4LL;
      TlgCreateSz(&v64, v14);
      TlgCreateWsz(&v65, *((LPCWSTR *)v5 + 11));
      v15 = (const CHAR *)*((_QWORD *)v5 + 13);
      v26 = v5[24];
      v66 = &v26;
      v67 = 4LL;
      TlgCreateSz(&v68, v15);
      TlgCreateWsz(&v69, *((LPCWSTR *)v5 + 14));
      v71 = 4LL;
      v70 = &v74;
      TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v27, v16);
      v28 = v27;
      v73 = 4LL;
      v72 = &v28;
      TlgWrite(v9, &unk_1804DDC73, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v28, &Context) && v28 )
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
    if ( *(_DWORD *)v20 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v36 = 8LL;
      v35 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v21 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v37 = &v27;
      v27 = v21;
      v38 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v40 = 4LL;
      v26 = CurrentThreadId;
      v39 = &v26;
      v41 = &v74;
      v42 = 4LL;
      TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v25, v23);
      v24 = v25;
      v44 = 4LL;
      v43 = &v24;
      TlgWrite(v20, &unk_1804DDC0A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v34);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((MultitaskingViewTelemetry::DragSwitchItem *)((char *)this + 8));
}
