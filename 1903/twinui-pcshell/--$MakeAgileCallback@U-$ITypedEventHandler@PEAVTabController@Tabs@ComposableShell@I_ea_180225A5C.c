/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVTabController@Tabs@ComposableShell@Internal@Windows@@PEAVTabControllerRectEventArgs@2345@@Foundation@Windows@@PEAVTabViewManager@@P84@EAAJPEAUITabController@Tabs@ComposableShell@Internal@3@PEAUITabControllerRectEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVTabController@Tabs@ComposableShell@Internal@Windows@@PEAVTabControllerRectEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVTabViewManager@@$$QEAP84@EAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerRectEventArgs@6789@@Z@Z @ 0x180225A5C
 * Callers:
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18023D140 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::ITabController____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs____Microsoft::WRL::FtmBase___lambda_3e36403844c4cd02ca640fdfc4fee558___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs____Microsoft::WRL::FtmBase___lambda_3e36403844c4cd02ca640fdfc4fee558___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs___ @ 0x1802292F8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802292F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabController *,Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs *>,TabViewManager *,long (TabViewManager::*)(Windows::Internal::ComposableShell::Tabs::ITabController *,Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs *)>(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = *a2;
  v9 = *a3;
  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::ITabController____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs____Microsoft::WRL::FtmBase___lambda_3e36403844c4cd02ca640fdfc4fee558___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs____Microsoft::WRL::FtmBase___lambda_3e36403844c4cd02ca640fdfc4fee558___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs___(
           v5,
           &v8);
  *a1 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      69LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v6);
    __debugbreak();
  }
  return a1;
}
