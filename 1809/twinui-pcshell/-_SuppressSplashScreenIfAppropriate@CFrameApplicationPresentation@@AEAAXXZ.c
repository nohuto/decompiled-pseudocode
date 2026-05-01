/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x180040B04
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x18007A830 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18000DEE0 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040E48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180040E90 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x180043E1C (-StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004AD20 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180069E40 (--4-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800760A8 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800760A8.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180106E24 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180127BD0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllAp.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180127C2C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenW.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180128194 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(
        CFrameApplicationPresentation *this,
        __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r15d
  int v5; // eax
  unsigned int v6; // ebx
  HWND v7; // r8
  const unsigned __int16 *v8; // rdx
  bool v9; // zf
  __int64 v10; // r8
  HANDLE ProcessHeap; // rax
  HANDLE v12; // rax
  HANDLE v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  void **v17; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+60h] [rbp-A0h]
  int *v20; // [rsp+68h] [rbp-98h]
  int *v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h] BYREF
  char v23; // [rsp+7Ch] [rbp-84h]
  _BYTE v24[32]; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+A0h] [rbp-60h] BYREF
  const char *v26; // [rsp+A8h] [rbp-58h]
  LPVOID v27; // [rsp+B0h] [rbp-50h]
  char v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  _BYTE v30[144]; // [rsp+C8h] [rbp-38h] BYREF
  LPVOID v31[3]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v32; // [rsp+170h] [rbp+70h] BYREF
  void **v33; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v34[24]; // [rsp+188h] [rbp+88h] BYREF
  int v35; // [rsp+1A0h] [rbp+A0h]
  int v36; // [rsp+1B8h] [rbp+B8h]
  _BYTE v37[48]; // [rsp+1C0h] [rbp+C0h] BYREF
  LPVOID v38; // [rsp+1F0h] [rbp+F0h]
  char v39; // [rsp+1F8h] [rbp+F8h]
  LPVOID v40; // [rsp+298h] [rbp+198h] BYREF
  _BYTE v41[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  void **v42; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v43[24]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int v44; // [rsp+2E0h] [rbp+1E0h]
  int v45; // [rsp+2F8h] [rbp+1F8h]
  _BYTE v46[48]; // [rsp+300h] [rbp+200h] BYREF
  LPVOID lpMem; // [rsp+330h] [rbp+230h]
  char v48; // [rsp+338h] [rbp+238h]
  LPVOID v49; // [rsp+3D8h] [rbp+2D8h] BYREF
  _BYTE v50[16]; // [rsp+3F0h] [rbp+2F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+338h]

  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(this, a2);
  if ( *((_DWORD *)this + 54) != 1 || !*((_BYTE *)this + 548) || *((_DWORD *)this + 55) )
    return;
  if ( !*((_BYTE *)this + 549) )
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsageToService();
  v3 = **((_QWORD **)this + 13);
  if ( v3 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) )
  {
    v4 = 2;
  }
  else
  {
    if ( !*((_BYTE *)this + 549) )
    {
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::ReportUsageToService();
      goto LABEL_42;
    }
    v4 = 3;
  }
  v5 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6EB,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v5,
      v14);
LABEL_42:
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 216, 0LL);
    return;
  }
  v6 = dword_18050E7A4;
  v18[1] = &v17;
  *((_DWORD *)this + 55) = 1;
  v20 = &v25;
  v29 = 1LL;
  v21 = &v22;
  v18[0] = 0LL;
  v26 = "SplashScreenSuppressed";
  v18[2] = 0LL;
  v19 = 0;
  v22 = 0;
  v23 = 0;
  v28 = 0;
  v25 = 0;
  v27 = 0LL;
  v31[0] = 0LL;
  memset_0(v30, 0, sizeof(v30));
  v7 = (HWND)*((_QWORD *)this + 16);
  v8 = (const unsigned __int16 *)*((_QWORD *)this + 70);
  v31[1] = 0LL;
  v31[2] = 0LL;
  v17 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  v32 = 0LL;
  CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
    (CFramePresentationTelemetry::SplashScreenSuppressed *)&v17,
    v8,
    v7,
    v4,
    v6);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    &v33,
    &v17,
    0LL);
  v9 = *((_DWORD *)this + 64) == 0;
  v33 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  LOBYTE(v10) = !v9;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    &v42,
    (char *)this + 224,
    v10);
  v42 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (char *)this + 224,
    &v33);
  v42 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v42);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v50);
  wil::details::shared_buffer::reset(&v49);
  if ( v48 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v48 = 0;
  }
  lpMem = 0LL;
  if ( v45 == 1 )
  {
    v45 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v46);
  }
  v45 = 3;
  if ( v44 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v43);
  v33 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v33);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v41);
  wil::details::shared_buffer::reset(&v40);
  if ( v39 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v38);
    v39 = 0;
  }
  v38 = 0LL;
  if ( v36 == 1 )
  {
    v36 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v37);
  }
  v36 = 3;
  if ( v35 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v34);
  v17 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v17);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v32);
  wil::details::shared_buffer::reset(v31);
  if ( v28 )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v27);
    v28 = 0;
  }
  v27 = 0LL;
  if ( v22 == 1 )
  {
    v22 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v24);
  }
  v22 = 3;
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
}
