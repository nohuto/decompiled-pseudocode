/*
 * XREFs of ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180269BE0
 * Callers:
 *     ??$query@UITabDragHandler@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabDragHandler@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6E30 (--$query@UITabDragHandler@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     ??$query@UITabViewManager@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6E78 (--$query@UITabViewManager@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_0cfb907d4b1fa4e1c73686f042101db7___1_IInspectable___IInspectable___::Invoke @ 0x180268320 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180268320.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_a4a56e5d9a03a904b693306261be71d3___1_IInspectable___IInspectable___::Invoke @ 0x1802683B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1802683B0.c)
 *     ?OnTitleBarsCreated@TitleBarController@@AEAAJXZ @ 0x18026859C (-OnTitleBarsCreated@TitleBarController@@AEAAJXZ.c)
 *     ?OnTitleBarsLost@TitleBarController@@AEAAJXZ @ 0x180268628 (-OnTitleBarsLost@TitleBarController@@AEAAJXZ.c)
 *     _lambda_f167818d7963a6aecc3c3c61dfbcf93a_::operator() @ 0x180270A2C (_lambda_f167818d7963a6aecc3c3c61dfbcf93a_--operator().c)
 *     ?SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180272708 (-SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@Compos.c)
 *     ?UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180272F18 (-UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@In.c)
 *     ?OnApplicationViewChanged@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180324EB0 (-OnApplicationViewChanged@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEA.c)
 *     ?OnShellHookMessage@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJ_K_J@Z @ 0x180325240 (-OnShellHookMessage@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJ_K_J@Z.c)
 *     _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x18041C8F0 (_lambda_0b192ff2ee59a0e56115e85b2e997556_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___::Invoke @ 0x18041CD60 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18041CD60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
