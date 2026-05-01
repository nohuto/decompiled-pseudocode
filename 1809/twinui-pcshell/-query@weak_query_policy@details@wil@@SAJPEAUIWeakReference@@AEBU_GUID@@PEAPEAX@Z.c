/*
 * XREFs of ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F982C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_be49c22beafaa17dca8757bacf025c52___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x1801F7DE0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1801F7DE0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_f8512defb81b80cdd5799a3f81e33f8d___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x1801F7E70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1801F7E70.c)
 *     ?OnTitleBarsCreated@TitleBarController@@AEAAJXZ @ 0x1801F805C (-OnTitleBarsCreated@TitleBarController@@AEAAJXZ.c)
 *     ?OnTitleBarsLost@TitleBarController@@AEAAJXZ @ 0x1801F80E8 (-OnTitleBarsLost@TitleBarController@@AEAAJXZ.c)
 *     _lambda_f167818d7963a6aecc3c3c61dfbcf93a_::operator() @ 0x1801FE26C (_lambda_f167818d7963a6aecc3c3c61dfbcf93a_--operator().c)
 *     ?SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801FFF88 (-SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@Compos.c)
 *     ?UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180200830 (-UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@In.c)
 *     ?OnApplicationViewChanged@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802AD500 (-OnApplicationViewChanged@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEA.c)
 *     ?OnShellHookMessage@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJ_K_J@Z @ 0x1802AD890 (-OnShellHookMessage@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJ_K_J@Z.c)
 *     _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x1803970AC (_lambda_0b192ff2ee59a0e56115e85b2e997556_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64_::Invoke @ 0x180397640 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180397640.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::weak_query_policy::query(struct IWeakReference *a1, const struct _GUID *a2, void **a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IWeakReference *, GUID *, __int64 *))a1->lpVtbl->Resolve)(
         a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v7);
  if ( v5 >= 0 )
  {
    if ( !v7 )
      return 2147943568LL;
    v5 = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v7)(v7, a2, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
