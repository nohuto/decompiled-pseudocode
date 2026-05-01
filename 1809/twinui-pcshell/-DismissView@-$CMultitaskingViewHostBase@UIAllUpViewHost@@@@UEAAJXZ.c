/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18026F810
 * Callers:
 *     wil::details::ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___::_ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___ @ 0x18026AEE4 (wil--details--ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___--_ScopeExitFn__lambda_1641.c)
 *     wil::details::ScopeExitFn__lambda_c23c10aab4e8d83c8d2f1a5eb32cf8d0___::_ScopeExitFn__lambda_c23c10aab4e8d83c8d2f1a5eb32cf8d0___ @ 0x18026AFE4 (wil--details--ScopeExitFn__lambda_c23c10aab4e8d83c8d2f1a5eb32cf8d0___--_ScopeExitFn__lambda_c23c.c)
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x18026D69C (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 *     ?DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18026FAB0 (-DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLA.c)
 *     ?MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180272F90 (-MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnMonitorFrameDismissAnimationCompleted@XamlAllUpViewHost@@UEAAJXZ @ 0x180273640 (-OnMonitorFrameDismissAnimationCompleted@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180274CE0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?TabletModeChanged@XamlAllUpViewHost@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180276200 (-TabletModeChanged@XamlAllUpViewHost@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180276930 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??$As@UIMultitaskingViewDismissCallback@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDismissCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x180265A24 (--$As@UIMultitaskingViewDismissCallback@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___ @ 0x180267090 (Windows--Internal--ComTaskPool--QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18026B0F8 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180275204 (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18027545C (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister @ 0x180276574 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+58h] [rbp-B0h]
  _QWORD v13[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v11[1] = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v11[2] = (__int64)v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v12 = v3;
  *(_BYTE *)(a1 + 112) = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"DismissMultitaskingView");
  v13[0] = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  MultitaskingViewTelemetry::DismissMultitaskingView::StartActivity(v13, *(unsigned int *)(a1 + 72));
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister(a1 + 96);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  v8 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IMultitaskingViewManager>::As<IMultitaskingViewDismissCallback>((_QWORD *)(a1 + 80), &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v10 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v11[0] = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    Windows::Internal::ComTaskPool::QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___(v6, &v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(
      *(_QWORD *)(a1 + 88),
      *(unsigned int *)(a1 + 72));
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop(v13, *(unsigned int *)(a1 + 72));
    v5 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\MultitaskingView\\inc\\baseviewhost.h",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView((MultitaskingViewTelemetry::DismissMultitaskingView *)v13);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
