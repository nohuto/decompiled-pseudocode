/*
 * XREFs of _lambda_decbeb1e589528b2f481f07675c1dd35_::operator() @ 0x1801D72E4
 * Callers:
 *     ??$Adapt@V_lambda_decbeb1e589528b2f481f07675c1dd35_@@@?$CCLambdaAdapter@P6AHPEAUHWND__@@_J@Z$01@@SAHPEAUHWND__@@_J@Z @ 0x1801CE020 (--$Adapt@V_lambda_decbeb1e589528b2f481f07675c1dd35_@@@-$CCLambdaAdapter@P6AHPEAUHWND__@@_J@Z$01@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x180071638 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1801D33E8 (--$_Try_emplace@AEBK$$V@-$map@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U-$less@K.c)
 *     ?TabViewManager_RecoverTabForWindow@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x1801EC9E4 (-TabViewManager_RecoverTabForWindow@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManag.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x1801ECEF0 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1801EDFA4 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall lambda_decbeb1e589528b2f481f07675c1dd35_::operator()(__int64 a1, HWND a2)
{
  __int64 *v5; // rax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  HSTRING_HEADER *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  __int128 v14; // xmm6
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  unsigned int v19; // [rsp+30h] [rbp-88h] BYREF
  struct IApplicationView *v20[3]; // [rsp+38h] [rbp-80h] BYREF
  HSTRING_HEADER v21; // [rsp+50h] [rbp-68h] BYREF
  HSTRING_HEADER v22; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v20[1] = (struct IApplicationView *)-2LL;
  if ( !(unsigned int)GetWindowGroupId(a2, &v19) || !v19 )
    return 1LL;
  TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::TabViewManager_RecoverTabForWindow(
    *(TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups **)a1,
    a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, HWND, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 392LL) + 40LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 392LL),
    0LL,
    a2,
    0LL,
    0);
  ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(*(_QWORD *)(a1 + 8) + 1144LL, v20, a2);
  if ( !v20[0] )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v20);
    return 1LL;
  }
  v5 = *(__int64 **)(a1 + 16);
  v6 = (__int64 *)*v5;
  v7 = *(__int64 **)(*v5 + 8);
  v8 = (__int64 *)*v5;
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_12;
  do
  {
    if ( *((_DWORD *)v7 + 7) >= v19 )
    {
      v8 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v8 == v6 || v19 < *((_DWORD *)v8 + 7) )
LABEL_12:
    v8 = (__int64 *)*v5;
  if ( v8 == v6 )
  {
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, (const WCHAR **)off_180400278);
    *(_OWORD *)&v21.Reserved.Reserved1 = xmmword_180477620;
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
            *(Windows::Internal::ShellHelpers::PropertySetHelper **)(a1 + 24),
            (HSTRING)v9[1].Reserved.Reserved1,
            v10,
            (__int128 *)&v21);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3975LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v11);
    v12 = TabViewManager::TryAssignViewToTabGroup(
            (TabViewManager *)(*(_QWORD *)(a1 + 8) + 136LL),
            v20[0],
            **(struct IUnknown ***)(a1 + 24),
            (struct _GUID *)&v21);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3978LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v12);
    v13 = (char *)v21.Reserved.Reserved1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v21.Reserved.Reserved1 == *(PVOID *)&GUID_NULL.Data1 )
      v13 = (char *)(*(_QWORD *)&v21.Reserved.Reserved2[8] - *(_QWORD *)GUID_NULL.Data4);
    if ( v13 )
    {
      std::map<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>::_Try_emplace<unsigned long const &,>(
        *(__int64 **)(a1 + 16),
        (__int64)&v22,
        &v19);
      *((_OWORD *)v22.Reserved.Reserved1 + 2) = *(_OWORD *)&v21.Reserved.Reserved1;
    }
LABEL_22:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v20);
    return 1LL;
  }
  v14 = *((_OWORD *)v8 + 2);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)off_180400278);
  *(_OWORD *)&v22.Reserved.Reserved1 = v14;
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
          *(Windows::Internal::ShellHelpers::PropertySetHelper **)(a1 + 24),
          (HSTRING)v15[1].Reserved.Reserved1,
          v16,
          (__int128 *)&v22);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3989LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v17);
  v18 = TabViewManager::TryAssignViewToTabGroup(
          (TabViewManager *)(*(_QWORD *)(a1 + 8) + 136LL),
          v20[0],
          **(struct IUnknown ***)(a1 + 24),
          (struct _GUID *)&v22);
  if ( v18 >= 0 )
    goto LABEL_22;
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    3992LL,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v18);
  return 1LL;
}
