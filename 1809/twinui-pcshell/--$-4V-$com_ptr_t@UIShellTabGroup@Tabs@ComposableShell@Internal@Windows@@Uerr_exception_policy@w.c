/*
 * XREFs of ??$?4V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@1@@?$tuple@AEAV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAAAEAV01@$$QEAU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@1@@Z @ 0x180201DFC
 * Callers:
 *     ?OnCloseActiveTab@TabShellHotKeyHandler@@AEAAJXZ @ 0x180202630 (-OnCloseActiveTab@TabShellHotKeyHandler@@AEAAJXZ.c)
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x1802028A0 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 *     ?OnSelectRelativeTab@TabShellHotKeyHandler@@AEAAJW4RelativeTabPosition@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180202C38 (-OnSelectRelativeTab@TabShellHotKeyHandler@@AEAAJW4RelativeTabPosition@Tabs@ComposableShell@Inte.c)
 *     ?OnSelectTabByIndex@TabShellHotKeyHandler@@AEAAJI@Z @ 0x180202DA4 (-OnSelectTabByIndex@TabShellHotKeyHandler@@AEAAJI@Z.c)
 *     ?OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z @ 0x180202F64 (-OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::tuple<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> &,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> &>::operator=<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = a1[1];
  v4 = *a2;
  *a2 = 0LL;
  v6 = *v2;
  *v2 = v4;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *a1;
  v8 = a2[1];
  a2[1] = 0LL;
  v9 = *v7;
  *v7 = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return a1;
}
