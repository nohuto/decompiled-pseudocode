/*
 * XREFs of ?GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1801DC640
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18005EDB8 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x1801DCED0 (-GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::GetDisplayNameForShellTab(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        HSTRING *a3)
{
  TabViewManager *v4; // rcx
  int ShellItemForView; // eax
  struct IShellItem *v6; // rbx
  int v7; // eax
  HSTRING_HEADER *v8; // rax
  HRESULT v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  LPVOID pv; // [rsp+20h] [rbp-58h] BYREF
  struct IShellItem *v13; // [rsp+28h] [rbp-50h] BYREF
  struct IApplicationView *v14; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v15[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v16; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15[1] = (const WCHAR *)-2LL;
  *a3 = 0LL;
  TabViewManager::TryGetViewForTab((char *)this - 152, &v14, a2);
  try
  {
    if ( v14 )
    {
      v13 = 0LL;
      ShellItemForView = TabViewManager::GetShellItemForView(v4, v14, &v13);
      if ( ShellItemForView < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2377LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)ShellItemForView);
      pv = 0LL;
      v6 = v13;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      v7 = ((__int64 (__fastcall *)(struct IShellItem *, _QWORD, LPVOID *))v6->lpVtbl->GetDisplayName)(v6, 0LL, &pv);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2380LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v7);
      v15[0] = (const WCHAR *)pv;
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, v15);
      v9 = WindowsDuplicateString((HSTRING)v8[1].Reserved.Reserved1, a3);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2382LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      if ( pv )
        CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x952,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v10);
  }
  return result;
}
