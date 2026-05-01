/*
 * XREFs of ?OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z @ 0x18027ADB4
 * Callers:
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x18027A6E0 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$?4V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@1@$0A@@?$tuple@AEAV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAAAEAV01@$$QEAU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@1@@Z @ 0x180279BD0 (--$-4V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@w.c)
 *     ?LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z @ 0x18027A0AC (-LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z.c)
 *     ?TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA?AU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@XZ @ 0x18027B3B4 (-TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA-AU-$pair@V-$com_ptr_t@UIShellTabGroup@Tabs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabShellHotKeyHandler::OnTryCreateNewTab(TabShellHotKeyHandler *this, struct _GUID *a2)
{
  __int64 *GroupAndTabInFocus; // rax
  int v4; // eax
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11[1] = -2LL;
  v9 = 0LL;
  v8 = 0LL;
  try
  {
    GroupAndTabInFocus = (__int64 *)TabShellHotKeyHandler::TryGetGroupAndTabInFocus(this);
    v12 = &v9;
    v13 = &v8;
    std::tuple<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> &,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> &>::operator=<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,0>(
      &v12,
      GroupAndTabInFocus);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
    if ( v8 )
    {
      v12 = 0LL;
      v13 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v8 + 48LL))(v8, &v12);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          244LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
          (const char *)(unsigned int)v4);
      v5 = LaunchNewTabPage((const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&v12, a2);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          245LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
          (const char *)(unsigned int)v5);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF9,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
                           v6);
  }
  return result;
}
