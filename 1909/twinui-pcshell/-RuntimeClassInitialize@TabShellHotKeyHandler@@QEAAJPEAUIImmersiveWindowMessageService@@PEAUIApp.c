/*
 * XREFs of ?RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@6789@PEAUITitleBarController@@@Z @ 0x18027B1D8
 * Callers:
 *     ??$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITitleBarController@@@Details@WRL@Microsoft@@YAJPEAPEAVTabShellHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@89Internal@Windows@@AEAPEAUITitleBarController@@@Z @ 0x180279D14 (--$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180140724 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?RegisterHotKeys@TabShellHotKeyHandler@@AEAAJXZ @ 0x18027AFA4 (-RegisterHotKeys@TabShellHotKeyHandler@@AEAAJXZ.c)
 */

__int64 __fastcall TabShellHotKeyHandler::RuntimeClassInitialize(
        TabShellHotKeyHandler *this,
        struct IImmersiveWindowMessageService *a2,
        struct IApplicationViewCollection *a3,
        struct ITabViewManager *a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a6,
        struct ITitleBarController *a7)
{
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 3, (__int64)a2);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 4, (__int64)a3);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 5, (__int64)a4);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 6, (__int64)a5);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 7, (__int64)a6);
  v10 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = a7;
  if ( a7 )
    (*(void (__fastcall **)(struct ITitleBarController *))(*(_QWORD *)a7 + 8LL))(a7);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = TabShellHotKeyHandler::RegisterHotKeys(this);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
