/*
 * XREFs of ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802EDACC
 * Callers:
 *     ??$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA?AV01@AEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802DF640 (--$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA-AV.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802E7FC0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802F82B0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1802FC080 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180192FB4 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::StartActivity(__int64 a1, int a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  const struct _TlgProvider_t *v6; // rdi
  const GUID *v7; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-25h] BYREF
  int v10; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+17h]
  int v14; // [rsp+80h] [rbp+1Fh]
  int v15; // [rsp+84h] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+94h] [rbp+33h]
  int *v19; // [rsp+98h] [rbp+37h]
  int v20; // [rsp+A0h] [rbp+3Fh]
  int v21; // [rsp+A4h] [rbp+43h]

  Context[1] = (LPVOID)-2LL;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = &unk_1805C2098;
    v5 = operator new(v4, &unk_1805C2098);
    *v5 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
    *v5 = &ImmersiveIconsLogging::`vftable';
    v5[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x400000000000uLL) )
  {
    v13 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v14 = 8;
    v15 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v17 = 4;
    v18 = 0;
    v10 = a2;
    v19 = &v10;
    v20 = 4;
    v21 = 0;
    v7 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v6, &unk_1804FBC1F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v7, 5u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
