/*
 * XREFs of ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1803D0684
 * Callers:
 *     ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180077600 (-OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007E0A8 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803CC864 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall TabletModeTraceLogging::ApplicationViewChangedFocus::StartActivity(
        TabletModeTraceLogging::ApplicationViewChangedFocus *this,
        struct IApplicationView *a2)
{
  unsigned __int16 **v4; // r8
  __int64 v5; // rcx
  wil::TraceLoggingProvider *v6; // rax
  _QWORD *v7; // rcx
  const struct _TlgProvider_t *v8; // rbx
  int v9; // edx
  DWORD CurrentThreadId; // eax
  const WCHAR *v11; // rdx
  const GUID *v12; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-39h] BYREF
  DWORD v14; // [rsp+34h] [rbp-35h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-31h] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h]
  __int64 v18; // [rsp+50h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  DWORD *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+37h] BYREF

  pwsz = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
  v17 = -1LL;
  v18 = -1LL;
  ApplicationViewTraceLoggingHelpers::GetViewName(a2, (struct IApplicationView *)&pwsz, v4);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_1805C2098;
    v6 = (wil::TraceLoggingProvider *)operator new(v5, &unk_1805C2098);
    wil::TraceLoggingProvider::TraceLoggingProvider(v6);
    *v7 = &ImmersiveIconsLogging::`vftable';
    v7[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
  {
    v22 &= v9;
    v20 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v21 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v25 = 0;
    v11 = &szAgent;
    v14 = CurrentThreadId;
    v24 = 4;
    v23 = &v14;
    if ( pwsz )
      v11 = pwsz;
    TlgCreateWsz(&pDesc, v11);
    v12 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v8, &unk_18050597E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v12, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTraceLogging::ApplicationViewChangedFocus *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
}
