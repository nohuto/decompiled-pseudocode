/*
 * XREFs of _lambda_7776713b7958a1ab94e34a9b72bfa77e_::operator() @ 0x18024A808
 * Callers:
 *     ??$Adapt@V_lambda_7776713b7958a1ab94e34a9b72bfa77e_@@@?$CCLambdaAdapter@P6AHPEAUHWND__@@_J@Z$01@@SAHPEAUHWND__@@_J@Z @ 0x1802442B0 (--$Adapt@V_lambda_7776713b7958a1ab94e34a9b72bfa77e_@@@-$CCLambdaAdapter@P6AHPEAUHWND__@@_J@Z$01@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x180062184 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180247DC8 (--$_Try_emplace@AEBK$$V@-$map@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U-$less@K.c)
 *     ?TabViewManager_RecoverTabForWindow@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18025E25C (-TabViewManager_RecoverTabForWindow@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManag.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18025E770 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18025FB14 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall lambda_7776713b7958a1ab94e34a9b72bfa77e_::operator()(__int64 a1, HWND a2)
{
  __int64 *v5; // rax
  __int64 *v6; // r8
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  Windows::Internal::ShellHelpers::PropertySetHelper *v9; // rbx
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  char *v14; // rax
  __int128 v15; // xmm6
  HSTRING_HEADER *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  unsigned int v20; // [rsp+30h] [rbp-88h] BYREF
  struct IApplicationView *v21[3]; // [rsp+38h] [rbp-80h] BYREF
  HSTRING_HEADER v22; // [rsp+50h] [rbp-68h] BYREF
  HSTRING_HEADER v23; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v21[1] = (struct IApplicationView *)-2LL;
  if ( !(unsigned int)GetWindowGroupId(a2, &v20) || !v20 )
    return 1LL;
  TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::TabViewManager_RecoverTabForWindow(
    *(TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups **)a1,
    a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, HWND, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 400LL) + 40LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 400LL),
    0LL,
    a2,
    0LL,
    0);
  ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(*(_QWORD *)(a1 + 8) + 1200LL, v21, a2);
  if ( !v21[0] )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v21);
    return 1LL;
  }
  v5 = *(__int64 **)(a1 + 16);
  v6 = (__int64 *)*v5;
  v7 = (__int64 *)*v5;
  v8 = *(__int64 **)(*v5 + 8);
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_12;
  do
  {
    if ( *((_DWORD *)v8 + 7) >= v20 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v7 == v6 || v20 < *((_DWORD *)v7 + 7) )
LABEL_12:
    v7 = (__int64 *)*v5;
  v9 = *(Windows::Internal::ShellHelpers::PropertySetHelper **)(a1 + 24);
  if ( v7 == v6 )
  {
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)off_180487E38);
    *(_OWORD *)&v22.Reserved.Reserved1 = xmmword_180519638;
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
            v9,
            (HSTRING)v10[1].Reserved.Reserved1,
            v11,
            (__int128 *)&v22);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3584LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v12);
    v13 = TabViewManager::TryAssignViewToTabGroup(
            (TabViewManager *)(*(_QWORD *)(a1 + 8) + 136LL),
            v21[0],
            **(struct IUnknown ***)(a1 + 24),
            (struct _GUID *)&v22);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3587LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v13);
    v14 = (char *)v22.Reserved.Reserved1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v22.Reserved.Reserved1 == *(PVOID *)&GUID_NULL.Data1 )
      v14 = (char *)(*(_QWORD *)&v22.Reserved.Reserved2[8] - *(_QWORD *)GUID_NULL.Data4);
    if ( v14 )
    {
      std::map<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>::_Try_emplace<unsigned long const &,>(
        *(__int64 **)(a1 + 16),
        (__int64)&v23,
        &v20);
      *((_OWORD *)v23.Reserved.Reserved1 + 2) = *(_OWORD *)&v22.Reserved.Reserved1;
    }
LABEL_22:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v21);
    return 1LL;
  }
  v15 = *((_OWORD *)v7 + 2);
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, (const WCHAR **)off_180487E38);
  *(_OWORD *)&v23.Reserved.Reserved1 = v15;
  v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
          v9,
          (HSTRING)v16[1].Reserved.Reserved1,
          v17,
          (__int128 *)&v23);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3598LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v18);
  v19 = TabViewManager::TryAssignViewToTabGroup(
          (TabViewManager *)(*(_QWORD *)(a1 + 8) + 136LL),
          v21[0],
          **(struct IUnknown ***)(a1 + 24),
          (struct _GUID *)&v23);
  if ( v19 >= 0 )
    goto LABEL_22;
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    3601LL,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v19);
  return 1LL;
}
