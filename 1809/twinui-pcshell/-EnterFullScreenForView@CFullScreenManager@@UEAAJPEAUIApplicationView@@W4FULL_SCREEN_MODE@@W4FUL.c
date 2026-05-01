/*
 * XREFs of ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180144FE0
 * Callers:
 *     ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180144F30 (-EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800651B0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180065268 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPosit.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180143B3C (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_b3c10f1c4affe29344baa37c5e9467b3___ @ 0x180143F80 (ShellPositionerHelpers--PerformCallbackOnView__lambda_b3c10f1c4affe29344baa37c5e9467b3___.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18014482C (--1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180146478 (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180146BCC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  IUnknown *v14; // rcx
  HRESULT Service; // eax
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  __int128 ppvOut; // [rsp+28h] [rbp-D8h] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v21[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  IsViewFullScreen = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v19);
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
  if ( v19 )
  {
    IsViewFullScreen = CFullScreenManager::IsViewFullScreen(a1, a2, &v20);
    if ( IsViewFullScreen < 0 )
    {
      v8 = 148LL;
      goto LABEL_3;
    }
    if ( !v20 )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v21,
        (__int64)"FSMEnterFullScreenForView");
      v21[0] = &FullScreenManagerTelemetry::FSMEnterFullScreenForView::`vftable';
      FullScreenManagerTelemetry::FSMEnterFullScreenForView::StartActivity(v21, a2, a4);
      if ( FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
             (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
             v10) )
      {
        IsViewFullScreen = -2147024891;
LABEL_19:
        FullScreenManagerTelemetry::FSMEnterFullScreenForView::~FSMEnterFullScreenForView((FullScreenManagerTelemetry::FSMEnterFullScreenForView *)v21);
        return (unsigned int)IsViewFullScreen;
      }
      LOBYTE(v17) = 0;
      wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsageToService(
        v12,
        v11,
        v13);
      v14 = *(a1 - 9);
      *((_QWORD *)&ppvOut + 1) = &v17;
      *(_QWORD *)&ppvOut = a2;
      ShellPositionerHelpers::PerformCallbackOnView__lambda_b3c10f1c4affe29344baa37c5e9467b3___(
        v14,
        (__int64)a2,
        &ppvOut);
      if ( !(_BYTE)v17 )
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
          v16 = 176LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
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
          v16 = 177LL;
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
      IsViewFullScreen = 0;
      goto LABEL_19;
    }
  }
  return 2147942487LL;
}
