/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_20dbc4d6acc0852c34b2762e9d23547f___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64_::Invoke @ 0x1801DE2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800186D8 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64___::___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_20dbc4d6acc0852c34b2762e9d23547f___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  signed int v5; // ebx
  struct IInspectable *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::WeakRef::InternalResolve(
         (Microsoft::WRL::WeakRef *)(a1 + 64),
         &GUID_d8cbe793_a33e_53f4_b9c8_e39b9cb953ee,
         &v7);
  if ( v5 >= 0 )
    v5 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, __int64))v7->lpVtbl->GetIids)(v7, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return (unsigned int)v5;
}
