/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__stdcall_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::_)(IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_8fe8453917231015a81499f07f9fc156___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::Invoke @ 0x10007AB0
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ @ 0x10007B2B (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Wind.c)
 * Callees:
 *     _lambda_8fe8453917231015a81499f07f9fc156_::operator()_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___ @ 0x10007ADF (_lambda_8fe8453917231015a81499f07f9fc156_--operator()_IInspectable___Windows--System--IAppMemory.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SGXJ@Z @ 0x100107BE (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SGXJ@Z.c)
 */

int __stdcall Microsoft::WRL::Details::DelegateArgTraits_long____stdcall_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::___IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_8fe8453917231015a81499f07f9fc156___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::Invoke(
        int a1,
        char a2,
        char a3)
{
  int v3; // eax
  int v4; // esi

  v3 = lambda_8fe8453917231015a81499f07f9fc156_::operator()_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___(
         &a2,
         &a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
