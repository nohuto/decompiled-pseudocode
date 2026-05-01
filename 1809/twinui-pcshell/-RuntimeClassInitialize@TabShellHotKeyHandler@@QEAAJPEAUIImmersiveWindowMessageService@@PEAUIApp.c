/*
 * XREFs of ?RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@6789@PEAUITitleBarController@@@Z @ 0x180203388
 * Callers:
 *     ??$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITitleBarController@@@Details@WRL@Microsoft@@YAJPEAPEAVTabShellHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@89Internal@Windows@@AEAPEAUITitleBarController@@@Z @ 0x180201F34 (--$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     ?RegisterHotKeys@TabShellHotKeyHandler@@AEAAJXZ @ 0x180203154 (-RegisterHotKeys@TabShellHotKeyHandler@@AEAAJXZ.c)
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
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)this + 3, (__int64)a2);
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)this + 4, (__int64)a3);
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)this + 5, (__int64)a4);
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)this + 6, (__int64)a5);
  v10 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = a6;
  if ( a6 )
    (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabController *))(*(_QWORD *)a6 + 8LL))(a6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = a7;
  if ( a7 )
    (*(void (__fastcall **)(struct ITitleBarController *))(*(_QWORD *)a7 + 8LL))(a7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = TabShellHotKeyHandler::RegisterHotKeys(this);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
