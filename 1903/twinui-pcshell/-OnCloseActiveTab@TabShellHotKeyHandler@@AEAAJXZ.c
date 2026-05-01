/*
 * XREFs of ?OnCloseActiveTab@TabShellHotKeyHandler@@AEAAJXZ @ 0x18025AF00
 * Callers:
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x18025B170 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$?4V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@1@$0A@@?$tuple@AEAV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAAAEAV01@$$QEAU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@1@@Z @ 0x18025A670 (--$-4V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@w.c)
 *     ?TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA?AU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@XZ @ 0x18025BE3C (-TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA-AU-$pair@V-$com_ptr_t@UIShellTabGroup@Tabs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabShellHotKeyHandler::OnCloseActiveTab(TabShellHotKeyHandler *this)
{
  __int64 *GroupAndTabInFocus; // rax
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  __int64 *v6[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  try
  {
    GroupAndTabInFocus = (__int64 *)TabShellHotKeyHandler::TryGetGroupAndTabInFocus(this);
    v6[0] = &v10;
    v6[1] = &v11;
    std::tuple<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> &,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> &>::operator=<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,0>(
      v6,
      GroupAndTabInFocus);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
    if ( v10 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 120LL))(*((_QWORD *)this + 7));
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          266LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
          (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v10) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x10E,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
                     v4);
    return (unsigned int)v10;
  }
  return result;
}
