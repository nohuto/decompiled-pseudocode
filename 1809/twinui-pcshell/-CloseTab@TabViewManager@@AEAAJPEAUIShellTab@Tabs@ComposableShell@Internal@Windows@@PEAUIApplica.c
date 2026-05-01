/*
 * XREFs of ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801D8B98
 * Callers:
 *     _lambda_6c4b80bdf74632827428df2b58c2a770_::operator() @ 0x1801D692C (_lambda_6c4b80bdf74632827428df2b58c2a770_--operator().c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1801DFAF0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801071F8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18010D4B4 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ??1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ @ 0x1801D5A50 (--1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801D8CF8 (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801DCCA0 (-GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@.c)
 *     ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E3FE0 (-RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 *     ?StartActivity@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXXZ @ 0x1801E52F0 (-StartActivity@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXXZ.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x1801EBF64 (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 */

__int64 __fastcall TabViewManager::CloseTab(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        struct IApplicationView *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int NumTabsInGroupForView; // ebx
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v11[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *)-2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"TabViewManagerCloseTab");
  v12[0] = &TabViewManagerMeasures::TabViewManagerCloseTab::`vftable';
  TabViewManagerMeasures::TabViewManagerCloseTab::StartActivity((TabViewManagerMeasures::TabViewManagerCloseTab *)v12);
  v11[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(*(_QWORD *)a2 + 168LL))(
         a2,
         v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v11[0] )
    {
      NumTabsInGroupForView = TabViewManager::GetNumTabsInGroupForView(this, v11[0], a3);
      TabViewManagerMeasures::TabViewManagerCloseTab::TabViewManagerClosingTab(
        (TabViewManagerMeasures::TabViewManagerCloseTab *)v12,
        a3,
        v11[0],
        a2,
        NumTabsInGroupForView);
      if ( NumTabsInGroupForView <= 1 )
      {
        if ( NumTabsInGroupForView == 1 )
        {
          v6 = TabViewManager::CloseView(this, a3);
          v7 = v6;
          if ( v6 < 0 )
          {
            v8 = 3874LL;
            goto LABEL_7;
          }
        }
      }
      else
      {
        v6 = TabViewManager::RemoveVirtualTab((TabViewManager *)((char *)this + 152), a2);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 3870LL;
          goto LABEL_7;
        }
      }
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12);
    v7 = 0;
    goto LABEL_12;
  }
  v8 = 3858LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v6);
LABEL_12:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v11);
  TabViewManagerMeasures::TabViewManagerCloseTab::~TabViewManagerCloseTab((TabViewManagerMeasures::TabViewManagerCloseTab *)v12);
  return v7;
}
