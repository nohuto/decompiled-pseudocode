/*
 * XREFs of ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802520A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18024844C (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18024A124 (--1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802549C0 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180254DDC (-OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180254F6C (-OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?OnViewNeedinessChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180255184 (-OnViewNeedinessChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180257CE8 (-StartActivity@TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApp.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180258718 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18025FC70 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabViewManager::OnApplicationViewChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3,
        struct IUnknown *a4)
{
  __int64 WindowForView; // rbx
  bool v9; // r8
  int CanTabChanged; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  _QWORD v16[40]; // [rsp+30h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"TabViewManager_OnApplicationViewChanged");
  v16[0] = &TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged::`vftable';
  TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged::StartActivity(
    v16,
    a2,
    WindowForView,
    (unsigned int)a3,
    -2LL);
  if ( !*(_DWORD *)(a1 + 432) )
    goto LABEL_25;
  switch ( a3 )
  {
    case 1:
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(**(_QWORD **)(a1 + 1264) + 80LL))(
              *(_QWORD *)(a1 + 1264),
              a2);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x38A,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v13);
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(**(_QWORD **)(a1 + 1288) + 40LL))(
              *(_QWORD *)(a1 + 1288),
              a2);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x38B,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v14);
LABEL_23:
      CanTabChanged = TabViewManager::TryRemoveViewFromTabGroup(
                        (TabViewManager *)(a1 + 16),
                        (struct IApplicationView *)a2);
      v11 = CanTabChanged;
      if ( CanTabChanged < 0 )
      {
        v12 = 911LL;
        goto LABEL_16;
      }
      goto LABEL_25;
    case 2:
      goto LABEL_23;
    case 6:
      CanTabChanged = TabViewManager::OnViewNeedinessChanged(
                        (TabViewManager *)(a1 - 120),
                        (struct IApplicationView *)a2);
      v11 = CanTabChanged;
      if ( CanTabChanged < 0 )
      {
        v12 = 893LL;
        goto LABEL_16;
      }
      goto LABEL_25;
  }
  if ( a3 <= 6 )
    goto LABEL_25;
  if ( a3 <= 8 )
  {
    CanTabChanged = TabViewManager::OnViewFocusChanged((TabViewManager *)(a1 - 120), (struct IApplicationView *)a2, v9);
    v11 = CanTabChanged;
    if ( CanTabChanged < 0 )
    {
      v12 = 898LL;
      goto LABEL_16;
    }
    goto LABEL_25;
  }
  if ( a3 == 9 )
  {
    CanTabChanged = TabViewManager::OnViewLostFocus((TabViewManager *)(a1 - 120), (struct IApplicationView *)a2, a4);
    v11 = CanTabChanged;
    if ( CanTabChanged < 0 )
    {
      v12 = 902LL;
      goto LABEL_16;
    }
LABEL_25:
    wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    v11 = 0;
    goto LABEL_26;
  }
  if ( a3 == 11 )
    goto LABEL_23;
  if ( a3 != 20 )
    goto LABEL_25;
  CanTabChanged = TabViewManager::OnViewCanTabChanged((TabViewManager *)(a1 - 120), (struct IApplicationView *)a2);
  v11 = CanTabChanged;
  if ( CanTabChanged >= 0 )
    goto LABEL_25;
  v12 = 915LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)CanTabChanged);
LABEL_26:
  TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged::~TabViewManager_OnApplicationViewChanged((TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged *)v16);
  return v11;
}
