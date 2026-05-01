/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180045CE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800336F4 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180033774 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1800455CC (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800457B0 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180045E5C (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180046294 (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180046830 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180046830.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged(
        CSingleViewShellExperience *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v5; // ebx
  const WCHAR *StringRawBuffer; // r14
  const WCHAR *v7; // r15
  const struct _TlgProvider_t *v8; // rbx
  int v9; // r8d
  int v10; // ecx
  char v11; // dl
  const GUID *v13; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-C0h] BYREF
  void **v18; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-A8h] BYREF
  int v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+88h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v23; // [rsp+1B8h] [rbp+B0h]
  int v24; // [rsp+1C0h] [rbp+B8h]
  int v25; // [rsp+1C4h] [rbp+BCh]
  DWORD *p_CurrentThreadId; // [rsp+1C8h] [rbp+C0h]
  int v27; // [rsp+1D0h] [rbp+C8h]
  int v28; // [rsp+1D4h] [rbp+CCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v31; // [rsp+1F8h] [rbp+F0h]
  int v32; // [rsp+200h] [rbp+F8h]
  int v33; // [rsp+204h] [rbp+FCh]

  Context[1] = (LPVOID)-2LL;
  v5 = *((_DWORD *)this + 10);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v7 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    &v18,
    "OnClientWindowReadinessProcessed");
  v18 = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  LODWORD(v16) = v5;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)&v18);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x200000000000uLL) )
  {
    v23 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v24 = 8;
    v25 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v27 = 4;
    v28 = 0;
    TlgCreateWsz(&pDesc, v7);
    TlgCreateWsz(&v30, StringRawBuffer);
    v31 = &v16;
    v32 = 4;
    v33 = 0;
    v13 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v18);
    TlgWrite(v8, &unk_1804E4691, (LPCGUID)(v21 + 8), v13, 7u, &pData);
  }
  if ( !v20 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v19);
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( (unsigned int)SHIsSameObject(*((struct IUnknown **)this + 3), a2) && *((_DWORD *)this + 16) == 1 )
  {
    v9 = *((_DWORD *)this + 17);
    LOBYTE(v10) = (v9 & 1) + 2;
    if ( (v9 & 2) == 0 )
      v10 = *((_DWORD *)this + 17) & 1;
    v11 = v10 | 4;
    if ( (v9 & 4) == 0 )
      v11 = v10;
    CSingleViewShellExperience::ShowView((__int64)this, v11);
  }
  SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::Stop(
    (SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)&v18,
    *((_DWORD *)this + 10));
  v18 = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v18);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(&v18);
  return 0LL;
}
