/*
 * XREFs of ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180170A50
 * Callers:
 *     ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1801709A0 (-EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800674C0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180067578 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPosit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016F604 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_84b1643b811106f063aa32e54d395206___ @ 0x18016FB18 (ShellPositionerHelpers--PerformCallbackOnView__lambda_84b1643b811106f063aa32e54d395206___.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016FD64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18017028C (--1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180171F68 (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180172720 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 */

__int64 __fastcall CFullScreenManager::EnterFullScreenForView(
        IUnknown **a1,
        struct IApplicationView *a2,
        __int64 a3,
        unsigned int a4)
{
  int IsViewFullScreen; // ebx
  __int64 v8; // rdx
  struct IApplicationView *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  IUnknown *v15; // rcx
  HRESULT Service; // eax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  __int128 ppvOut; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v22[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  IsViewFullScreen = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v20);
  if ( IsViewFullScreen < 0 )
  {
    v8 = 144LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)IsViewFullScreen);
    return (unsigned int)IsViewFullScreen;
  }
  if ( v20 )
  {
    IsViewFullScreen = CFullScreenManager::IsViewFullScreen(a1, a2, &v21);
    if ( IsViewFullScreen < 0 )
    {
      v8 = 148LL;
      goto LABEL_3;
    }
    if ( !v21 )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v22,
        (__int64)"FSMEnterFullScreenForView");
      v22[0] = &FullScreenManagerTelemetry::FSMEnterFullScreenForView::`vftable';
      FullScreenManagerTelemetry::FSMEnterFullScreenForView::StartActivity(v22, a2, a4);
      if ( FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
             (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
             v10,
             v11) )
      {
        IsViewFullScreen = -2147024891;
LABEL_19:
        FullScreenManagerTelemetry::FSMEnterFullScreenForView::~FSMEnterFullScreenForView((FullScreenManagerTelemetry::FSMEnterFullScreenForView *)v22);
        return (unsigned int)IsViewFullScreen;
      }
      LOBYTE(v18) = 0;
      wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsageToService(
        v13,
        v12,
        v14);
      v15 = *(a1 - 9);
      *((_QWORD *)&ppvOut + 1) = &v18;
      *(_QWORD *)&ppvOut = a2;
      ShellPositionerHelpers::PerformCallbackOnView__lambda_84b1643b811106f063aa32e54d395206___(
        v15,
        (__int64)a2,
        &ppvOut);
      if ( !(_BYTE)v18 )
      {
        *(_QWORD *)&ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        Service = IUnknown_QueryService(
                    *(a1 - 9),
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    (void **)&ppvOut);
        IsViewFullScreen = Service;
        if ( Service < 0 )
        {
          v17 = 176LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
            (const char *)(unsigned int)Service);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_19;
        }
        Service = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(*(_QWORD *)ppvOut + 24LL))(
                    ppvOut,
                    a2,
                    3LL);
        IsViewFullScreen = Service;
        if ( Service < 0 )
        {
          v17 = 177LL;
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
      IsViewFullScreen = 0;
      goto LABEL_19;
    }
  }
  return 2147942487LL;
}
