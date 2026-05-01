/*
 * XREFs of ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802EDE44
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802E7FC0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802F82B0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1802FC080 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180370DA0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801931B8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::Stop(__int64 a1, WINBOOL a2)
{
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  TraceLoggingHProvider v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // rax
  const struct _TlgProvider_t *v12; // rdi
  WINBOOL v13; // [rsp+38h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v15[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  WINBOOL *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  DWORD *p_CurrentThreadId; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  WINBOOL *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  _QWORD *v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  int *v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  __int64 v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v41; // [rsp+158h] [rbp+50h]
  __int64 v42; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+168h] [rbp+60h] BYREF
  WINBOOL *v44; // [rsp+178h] [rbp+70h]
  __int64 v45; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+188h] [rbp+80h] BYREF
  DWORD *v47; // [rsp+198h] [rbp+90h]
  __int64 v48; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+1B8h] [rbp+B0h] BYREF
  WINBOOL *v51; // [rsp+1C8h] [rbp+C0h]
  __int64 v52; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1E8h] [rbp+E0h] BYREF
  WINBOOL *v55; // [rsp+1F8h] [rbp+F0h]
  __int64 v56; // [rsp+200h] [rbp+F8h]

  v20[1] = -2LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD *)(v4 + 76);
  if ( v5 < 0 && v5 == *(_DWORD *)(v4 + 84) )
    v6 = v4 + 80;
  else
    v6 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_1805C2098;
      v8 = operator new(v7, &unk_1805C2098);
      *v8 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v8 = &ImmersiveIconsLogging::`vftable';
      v8[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v31 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v32 = 8LL;
      v20[0] = 0x1000000LL;
      v33 = v20;
      v34 = 8LL;
      v18 = *(_DWORD *)(v6 + 4);
      v35 = &v18;
      v36 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v6 + 48));
      v38 = v6 + 56;
      v39 = 4LL;
      TlgCreateSz(&v40, *(LPCSTR *)(v6 + 120));
      LODWORD(v19) = *(_DWORD *)v6;
      v41 = &v19;
      v42 = 4LL;
      TlgCreateWsz(&v43, *(LPCWSTR *)(v6 + 16));
      v13 = *(_DWORD *)(v6 + 24);
      v44 = &v13;
      v45 = 4LL;
      TlgCreateSz(&v46, *(LPCSTR *)(v6 + 64));
      CurrentThreadId = *(_DWORD *)(v6 + 72);
      v47 = &CurrentThreadId;
      v48 = 4LL;
      TlgCreateSz(&v49, *(LPCSTR *)(v6 + 80));
      TlgCreateWsz(&v50, *(LPCWSTR *)(v6 + 88));
      v15[0] = *(_DWORD *)(v6 + 96);
      v51 = v15;
      v52 = 4LL;
      TlgCreateSz(&v53, *(LPCSTR *)(v6 + 104));
      TlgCreateWsz(&v54, *(LPCWSTR *)(v6 + 112));
      v15[1] = a2;
      v55 = &v15[1];
      v56 = 4LL;
      TlgWrite(v9, &unk_1804FBDA3, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v15[1], &Context) && v15[1] )
    {
      Context = &unk_1805C2098;
      v11 = operator new(v10, &unk_1805C2098);
      *v11 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v11 = &ImmersiveIconsLogging::`vftable';
      v11[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v22 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v23 = 8LL;
      v15[0] = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v24 = v15;
      v25 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v27 = 4LL;
      v13 = a2;
      v28 = &v13;
      v29 = 4LL;
      TlgWrite(v12, &unk_1804FBEDC, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 6u, &v21);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
