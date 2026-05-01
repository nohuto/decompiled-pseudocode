/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800378D4
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800802D0 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x180010C9C (-StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180016B4C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800248E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180037C18 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180037C60 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18004B2A0 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800704B0 (--4-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18007CBA0 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18007CBA0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18014C2A4 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801702D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllAp.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18017032C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenW.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180170A24 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(CFrameApplicationPresentation *this)
{
  __int64 v2; // rcx
  int v3; // r15d
  int v4; // eax
  unsigned int v5; // ebx
  HWND v6; // r8
  const unsigned __int16 *v7; // rdx
  bool v8; // zf
  __int64 v9; // r8
  HANDLE ProcessHeap; // rax
  HANDLE v11; // rax
  HANDLE v12; // rax
  unsigned int v13; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  void **v16; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h]
  int *v19; // [rsp+68h] [rbp-98h]
  int *v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h] BYREF
  char v22; // [rsp+7Ch] [rbp-84h]
  _BYTE v23[32]; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+A0h] [rbp-60h] BYREF
  const char *v25; // [rsp+A8h] [rbp-58h]
  LPVOID v26; // [rsp+B0h] [rbp-50h]
  char v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  _BYTE v29[144]; // [rsp+C8h] [rbp-38h] BYREF
  LPVOID v30[3]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v31; // [rsp+170h] [rbp+70h] BYREF
  void **v32; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v33[24]; // [rsp+188h] [rbp+88h] BYREF
  int v34; // [rsp+1A0h] [rbp+A0h]
  int v35; // [rsp+1B8h] [rbp+B8h]
  _BYTE v36[48]; // [rsp+1C0h] [rbp+C0h] BYREF
  LPVOID v37; // [rsp+1F0h] [rbp+F0h]
  char v38; // [rsp+1F8h] [rbp+F8h]
  LPVOID v39; // [rsp+298h] [rbp+198h] BYREF
  _BYTE v40[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  void **v41; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v42[24]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int v43; // [rsp+2E0h] [rbp+1E0h]
  int v44; // [rsp+2F8h] [rbp+1F8h]
  _BYTE v45[48]; // [rsp+300h] [rbp+200h] BYREF
  LPVOID lpMem; // [rsp+330h] [rbp+230h]
  char v47; // [rsp+338h] [rbp+238h]
  LPVOID v48; // [rsp+3D8h] [rbp+2D8h] BYREF
  _BYTE v49[16]; // [rsp+3F0h] [rbp+2F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+338h]

  wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService((__int64)this, 3u);
  if ( *((_DWORD *)this + 56) != 1 || !*((_BYTE *)this + 556) || *((_DWORD *)this + 57) )
    return;
  if ( !*((_BYTE *)this + 557) )
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsageToService();
  v2 = **((_QWORD **)this + 13);
  if ( v2 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2) )
  {
    v3 = 2;
  }
  else
  {
    if ( !*((_BYTE *)this + 557) )
    {
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::ReportUsageToService();
      goto LABEL_42;
    }
    v3 = 3;
  }
  v4 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7B1,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v4,
      v13);
LABEL_42:
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 224, 0LL);
    return;
  }
  v5 = dword_1805C0A84;
  v17[1] = &v16;
  *((_DWORD *)this + 57) = 1;
  v19 = &v24;
  v28 = 1LL;
  v20 = &v21;
  v17[0] = 0LL;
  v25 = "SplashScreenSuppressed";
  v17[2] = 0LL;
  v18 = 0;
  v21 = 0;
  v22 = 0;
  v27 = 0;
  v24 = 0;
  v26 = 0LL;
  v30[0] = 0LL;
  memset_0(v29, 0, sizeof(v29));
  v6 = (HWND)*((_QWORD *)this + 16);
  v7 = (const unsigned __int16 *)*((_QWORD *)this + 83);
  v30[1] = 0LL;
  v30[2] = 0LL;
  v16 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  v31 = 0LL;
  CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
    (CFramePresentationTelemetry::SplashScreenSuppressed *)&v16,
    v7,
    v6,
    v3,
    v5);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    &v32,
    &v16,
    0LL);
  v8 = *((_DWORD *)this + 66) == 0;
  v32 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  LOBYTE(v9) = !v8;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    &v41,
    (char *)this + 232,
    v9);
  v41 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (char *)this + 232,
    &v32);
  v41 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v41);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v49);
  wil::details::shared_buffer::reset(&v48);
  if ( v47 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v47 = 0;
  }
  lpMem = 0LL;
  if ( v44 == 1 )
  {
    v44 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v45);
  }
  v44 = 3;
  if ( v43 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v42);
  v32 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v32);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v40);
  wil::details::shared_buffer::reset(&v39);
  if ( v38 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v37);
    v38 = 0;
  }
  v37 = 0LL;
  if ( v35 == 1 )
  {
    v35 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v36);
  }
  v35 = 3;
  if ( v34 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v33);
  v16 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v16);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v31);
  wil::details::shared_buffer::reset(v30);
  if ( v27 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v26);
    v27 = 0;
  }
  v26 = 0LL;
  if ( v21 == 1 )
  {
    v21 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v23);
  }
  v21 = 3;
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
}
