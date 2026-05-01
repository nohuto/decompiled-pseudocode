/*
 * XREFs of ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1803905D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180333C48 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag__ea_180333C48.c)
 *     ??$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@wil@@YA?AV?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@AEAUtagSIZE@@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18038D7F0 (--$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInt.c)
 *     ??1VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18038DDE4 (--1VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??4VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x18038DE10 (--4VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV01.c)
 *     ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x18038E338 (--_GVirtualDesktopGestureContext@@QEAAPEAXI@Z.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x18038E5C0 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ.c)
 *     ?DismissContextMenuIfPresent@VirtualDesktopGestureHandler@@AEAAXXZ @ 0x18038F150 (-DismissContextMenuIfPresent@VirtualDesktopGestureHandler@@AEAAXXZ.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJXZ @ 0x18038F4C8 (-Initialize@VirtualDesktopGestureContext@@QEAAJXZ.c)
 *     ?StartActivity@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180390464 (-StartActivity@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopGestureHandler::StartSwipe(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int LastError; // edi
  VirtualDesktopGestureHandler *v7; // rcx
  const char *v8; // r9
  __int64 v9; // rdx
  VirtualDesktopGestureContext *v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  VirtualDesktopGestureContext **v14; // rdi
  VirtualDesktopGestureContext *v15; // r14
  VirtualDesktopGestureContext *v16; // rcx
  VirtualDesktopGestureContext *v18; // [rsp+48h] [rbp-C0h] BYREF
  struct IImmersiveMonitorManager *v19; // [rsp+50h] [rbp-B8h] BYREF
  struct IImmersiveSettingsCache *v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct ISwitchThumbnailDeviceManager *v22; // [rsp+68h] [rbp-A0h] BYREF
  struct IVirtualDesktopManagerInternal *v23; // [rsp+70h] [rbp-98h] BYREF
  struct tagSIZE v24[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v25[16]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h]
  __int128 v27; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v28[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v29[40]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v30[40]; // [rsp+248h] [rbp+140h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3C0h] [rbp+2B8h]

  v24[1] = (struct tagSIZE)-2LL;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"VirtualDesktopPTPGestureActivity");
  v29[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *)v29);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    LastError = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_21;
  }
  VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)(a1 + 8));
  VirtualDesktopGestureHandler::DismissContextMenuIfPresent(v7);
  if ( !(unsigned int)GetPointerInfo(a4, v25) )
  {
    v9 = 728LL;
LABEL_7:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v9,
                  (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                  v8);
    goto LABEL_21;
  }
  v28[0] = 0LL;
  v28[1] = 0LL;
  v27 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v26, &v27, v28) )
  {
    v9 = 734LL;
    goto LABEL_7;
  }
  LODWORD(v18) = DWORD2(v27) - v27;
  HIDWORD(v18) = HIDWORD(v27) - DWORD1(v27);
  v24[0] = (struct tagSIZE)v18;
  v19 = *(struct IImmersiveMonitorManager **)(a1 + 56);
  v20 = *(struct IImmersiveSettingsCache **)(a1 + 48);
  *(_QWORD *)v21 = *(_QWORD *)(a1 + 40);
  v22 = *(struct ISwitchThumbnailDeviceManager **)(a1 + 32);
  v23 = *(struct IVirtualDesktopManagerInternal **)(a1 + 24);
  wil::make_unique_nothrow<VirtualDesktopGestureContext,tagSIZE &,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,IImmersiveMonitorManager *>(
    &v18,
    v24,
    &v23,
    &v22,
    (struct IApplicationViewCollection **)v21,
    &v20,
    &v19);
  v10 = v18;
  if ( v18 )
  {
    v13 = VirtualDesktopGestureContext::Initialize(v18);
    LastError = v13;
    if ( v13 >= 0 )
    {
      v14 = (VirtualDesktopGestureContext **)(a1 + 64);
      if ( (VirtualDesktopGestureContext **)(a1 + 64) != &v18 )
      {
        v15 = v10;
        v10 = 0LL;
        v18 = 0LL;
        v16 = *v14;
        if ( v15 != *v14 )
        {
          if ( v16 )
            VirtualDesktopGestureContext::`scalar deleting destructor'(v16);
          *v14 = v15;
        }
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v30,
        (__int64)v29,
        0);
      v30[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::`vftable';
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::operator=(a1 + 72, (__int64)v30);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::~VirtualDesktopPTPGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *)v30);
      LastError = 0;
      goto LABEL_19;
    }
    v11 = (unsigned int)v13;
    v12 = 739LL;
  }
  else
  {
    LastError = -2147024882;
    v11 = 2147942414LL;
    v12 = 738LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v11);
LABEL_19:
  if ( v10 )
    VirtualDesktopGestureContext::`scalar deleting destructor'(v10);
LABEL_21:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::~VirtualDesktopPTPGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *)v29);
  return LastError;
}
