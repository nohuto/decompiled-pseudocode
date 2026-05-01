/*
 * XREFs of ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x180394950
 * Callers:
 *     ?AddPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180394700 (-AddPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE.c)
 *     ?RemovePositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180395C80 (-RemovePositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180047394 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180048D78 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016FD64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180172720 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x1803941D8 (--1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ.c)
 *     ??4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180394368 (--4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x180395344 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x180395E50 (-StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18040F0A8 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerManager::ChangePositionerForView(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        unsigned int a3,
        char a4)
{
  int PositionerPriorityForView; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // r13d
  int v13; // eax
  struct IApplicationView *v14; // rdx
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  struct IShellPositionerPriority *v20; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v23[40]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v24[40]; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v22[1] = -2LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)a1,
                                a2,
                                &v20);
  v9 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v20 + 24LL))(v20);
    v11 = *(_QWORD *)v20;
    if ( a4 )
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(v11 + 48))(v20, a3);
    else
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(v11 + 40))(v20, a3);
    v12 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v20 + 24LL))(v20);
    if ( v12 != v10 )
    {
      wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
      v21 = 0LL;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 176) + 32LL))(
              *(_QWORD *)(a1 + 176),
              (unsigned int)(*(_DWORD *)(a1 + 144) != 0) + 1,
              &v21);
      if ( v13 >= 0 )
      {
        ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView((ApplicationViewHelpers *)a2, v14);
        v22[0] = (__int64)ApplicationFromView;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
        if ( ApplicationFromView )
        {
          v16 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)ApplicationFromView
                                                                                   + 400LL))(
                  ApplicationFromView,
                  v21);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x3FD,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v16);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3F8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v13);
      }
      v17 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v23,
        (__int64)"ExitCompactOverlayModeForView");
      v23[0] = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
      if ( v10 == 5 )
      {
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v24,
          (__int64)"ExitCompactOverlayModeForView");
        v24[0] = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
        OverlayModeTelemetry::ExitCompactOverlayModeForView::StartActivity(v24, a2, 1LL);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::operator=((__int64)v23, (__int64)v24);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v24);
      }
      v18 = ShellPositionerManager::PerformPositionerHandoff(a1, a2, v10, v12);
      v9 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x409,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v18);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v23);
        goto LABEL_23;
      }
      if ( *(_DWORD *)v23[6] == 1 )
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v23);
      OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v23);
    }
    ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)a1, a2);
    v9 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3DD,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  return v9;
}
