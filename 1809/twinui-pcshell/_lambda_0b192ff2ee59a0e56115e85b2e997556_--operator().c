/*
 * XREFs of _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x1803970AC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___::type__lambda_0b192ff2ee59a0e56115e85b2e997556___::Invoke @ 0x1803976B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Co.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F982C (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ?AddedTab@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITabDataModelTabsChangedEventArgs@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUShellTab@Tabs@ComposableShell@Internal@Windows@3@XZ @ 0x1803972BC (-AddedTab@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITa.c)
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x180398034 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_0b192ff2ee59a0e56115e85b2e997556_::operator()(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  char v6; // r14
  char v7; // al
  _QWORD *v8; // rcx
  __int64 result; // rax
  const char *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+10h]
  __int64 *v17; // [rsp+70h] [rbp+18h]
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  v13[1] = (void *)-2LL;
  try
  {
    v3 = a3;
    v4 = a2;
    LODWORD(v15) = 0;
    wil::details::weak_query_policy::query(
      *(struct IWeakReference **)a1,
      &GUID_00000000_0000_0000_c000_000000000046,
      v13);
    v6 = 1;
    v7 = 1;
    LODWORD(v15) = 1;
    if ( !v13[0]
      || (v8 = (_QWORD *)winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs>::AddedTab(
                           v3,
                           &v18),
          v7 = 3,
          !*v8) )
    {
      v6 = 0;
    }
    if ( (v7 & 2) != 0 && v18 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v18);
    result = wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v13);
    if ( v6 )
    {
      v11 = *v3;
      v15 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v12 = *v4;
      v18 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      result = VirtualDesktopGroupedViewsEventListener::TabAdded(*(_QWORD *)(a1 + 8), &v18, &v15);
    }
  }
  catch ( ... )
  {
    result = wil::details::in1diag3::Log_CaughtException(
               retaddr,
               (void *)0x60,
               (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
               v10);
    v3 = v17;
    v4 = v16;
  }
  if ( *v4 )
    result = winrt::com_ptr<IInspectable>::unconditional_release_ref(v4);
  if ( *v3 )
    return winrt::com_ptr<IInspectable>::unconditional_release_ref(v3);
  return result;
}
