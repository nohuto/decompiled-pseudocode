/*
 * XREFs of ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18022CC2C
 * Callers:
 *     _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::operator() @ 0x18022B794 (_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_--operator().c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180232FF0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18012D1D0 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180133E68 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ @ 0x18022A94C (--1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18022CD8C (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x180230254 (-GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@.c)
 *     ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180236CD0 (-RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 *     ?StartActivity@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXXZ @ 0x180237E14 (-StartActivity@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXXZ.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x18023E25C (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 */

__int64 __fastcall TabViewManager::CloseTab(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        struct IApplicationView *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int NumTabsInGroupForView; // ebx
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v12[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *)-2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"TabViewManagerCloseTab");
  v13[0] = &TabViewManagerMeasures::TabViewManagerCloseTab::`vftable';
  TabViewManagerMeasures::TabViewManagerCloseTab::StartActivity((TabViewManagerMeasures::TabViewManagerCloseTab *)v13);
  v6 = *(_QWORD *)a2;
  v12[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(v6 + 168))(
         a2,
         v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v12[0] )
    {
      NumTabsInGroupForView = TabViewManager::GetNumTabsInGroupForView(this, v12[0], a3);
      TabViewManagerMeasures::TabViewManagerCloseTab::TabViewManagerClosingTab(
        (TabViewManagerMeasures::TabViewManagerCloseTab *)v13,
        a3,
        v12[0],
        a2,
        NumTabsInGroupForView);
      if ( NumTabsInGroupForView <= 1 )
      {
        if ( NumTabsInGroupForView == 1 )
        {
          v7 = TabViewManager::CloseView(this, a3);
          v8 = v7;
          if ( v7 < 0 )
          {
            v9 = 3478LL;
            goto LABEL_7;
          }
        }
      }
      else
      {
        v7 = TabViewManager::RemoveVirtualTab((TabViewManager *)((char *)this + 160), a2);
        v8 = v7;
        if ( v7 < 0 )
        {
          v9 = 3474LL;
          goto LABEL_7;
        }
      }
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13);
    v8 = 0;
    goto LABEL_12;
  }
  v9 = 3462LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v7);
LABEL_12:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v12);
  TabViewManagerMeasures::TabViewManagerCloseTab::~TabViewManagerCloseTab((TabViewManagerMeasures::TabViewManagerCloseTab *)v13);
  return v8;
}
