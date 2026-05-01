/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs_____ptr64___::_)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_8fa6991b191c0e4b65e539d2639c91cd___1_Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs_____ptr64_::Invoke @ 0x18005B600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs_____ptr64___::___Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_8fa6991b191c0e4b65e539d2639c91cd___1_Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs_____ptr64_::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 72))(*(_QWORD *)(a1 + 64) + *(int *)(a1 + 80));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
