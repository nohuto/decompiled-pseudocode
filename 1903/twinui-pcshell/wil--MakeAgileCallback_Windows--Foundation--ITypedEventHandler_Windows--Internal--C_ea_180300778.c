/*
 * XREFs of wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_c986d26c92642d3a69330169dfef2fa8___ @ 0x180300778
 * Callers:
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@4PEAUITabViewManager@@@Z @ 0x180304CF8 (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs____Microsoft::WRL::FtmBase___lambda_c986d26c92642d3a69330169dfef2fa8___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs____Microsoft::WRL::FtmBase___lambda_c986d26c92642d3a69330169dfef2fa8___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___ @ 0x180301D7C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180301D7C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_c986d26c92642d3a69330169dfef2fa8___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs____Microsoft::WRL::FtmBase___lambda_c986d26c92642d3a69330169dfef2fa8___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs____Microsoft::WRL::FtmBase___lambda_c986d26c92642d3a69330169dfef2fa8___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___(
           v5,
           a2);
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
