/*
 * XREFs of ?DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801DAEC0
 * Callers:
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x1801E14B0 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::ActivateFromShellItem @ 0x1801D7C18 (_anonymous_namespace_--ActivateFromShellItem.c)
 *     ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x1801DCED0 (-GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::DuplicateTab(
        TabViewManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3)
{
  int ShellItemForView; // eax
  __int64 v5; // rdx
  const char *v6; // r9
  __int64 result; // rax
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IShellItem *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  ShellItemForView = TabViewManager::GetShellItemForView(this, a2, &v10);
  try
  {
    if ( ShellItemForView < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3569LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)ShellItemForView);
    v8 = (__int128)*a3;
    anonymous_namespace_::ActivateFromShellItem((__int64)v10, v5, &v8);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v10) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xDF7,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v6);
    return (unsigned int)v10;
  }
  return result;
}
