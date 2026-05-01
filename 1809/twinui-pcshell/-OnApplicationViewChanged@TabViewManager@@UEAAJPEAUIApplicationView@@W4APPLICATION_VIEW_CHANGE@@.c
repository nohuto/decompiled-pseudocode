/*
 * XREFs of ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801DF630
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3AFC (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5C6C (--1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?CleanupPendingWindowOperations@TabViewManager@@AEAAXPEAUIApplicationView@@@Z @ 0x1801D8AA0 (-CleanupPendingWindowOperations@TabViewManager@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801E2494 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1801E28C8 (-OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801E2A58 (-OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?OnViewNeedinessChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801E2C70 (-OnViewNeedinessChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1801E5BDC (-StartActivity@TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApp.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E67D0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801EE0F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
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
  _QWORD v15[40]; // [rsp+30h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"TabViewManager_OnApplicationViewChanged");
  v15[0] = &TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged::`vftable';
  TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged::StartActivity(
    v15,
    a2,
    WindowForView,
    (unsigned int)a3,
    -2LL);
  if ( !*(_DWORD *)(a1 + 416) )
    goto LABEL_23;
  switch ( a3 )
  {
    case 1:
      TabViewManager::CleanupPendingWindowOperations((TabViewManager *)(a1 - 120), a2);
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(**(_QWORD **)(a1 + 1280) + 40LL))(
              *(_QWORD *)(a1 + 1280),
              a2);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          960LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v13);
LABEL_21:
      CanTabChanged = TabViewManager::TryRemoveViewFromTabGroup(
                        (TabViewManager *)(a1 + 16),
                        (struct IApplicationView *)a2);
      v11 = CanTabChanged;
      if ( CanTabChanged < 0 )
      {
        v12 = 964LL;
        goto LABEL_16;
      }
      goto LABEL_23;
    case 2:
      goto LABEL_21;
    case 6:
      CanTabChanged = TabViewManager::OnViewNeedinessChanged(
                        (TabViewManager *)(a1 - 120),
                        (struct IApplicationView *)a2);
      v11 = CanTabChanged;
      if ( CanTabChanged < 0 )
      {
        v12 = 946LL;
        goto LABEL_16;
      }
      goto LABEL_23;
  }
  if ( a3 <= 6 )
    goto LABEL_23;
  if ( a3 <= 8 )
  {
    CanTabChanged = TabViewManager::OnViewFocusChanged((TabViewManager *)(a1 - 120), (struct IApplicationView *)a2, v9);
    v11 = CanTabChanged;
    if ( CanTabChanged < 0 )
    {
      v12 = 951LL;
      goto LABEL_16;
    }
    goto LABEL_23;
  }
  if ( a3 == 9 )
  {
    CanTabChanged = TabViewManager::OnViewLostFocus((TabViewManager *)(a1 - 120), (struct IApplicationView *)a2, a4);
    v11 = CanTabChanged;
    if ( CanTabChanged < 0 )
    {
      v12 = 955LL;
      goto LABEL_16;
    }
LABEL_23:
    wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
    v11 = 0;
    goto LABEL_24;
  }
  if ( a3 == 11 )
    goto LABEL_21;
  if ( a3 != 20 )
    goto LABEL_23;
  CanTabChanged = TabViewManager::OnViewCanTabChanged((TabViewManager *)(a1 - 120), (struct IApplicationView *)a2);
  v11 = CanTabChanged;
  if ( CanTabChanged >= 0 )
    goto LABEL_23;
  v12 = 968LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)CanTabChanged);
LABEL_24:
  TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged::~TabViewManager_OnApplicationViewChanged((TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged *)v15);
  return v11;
}
