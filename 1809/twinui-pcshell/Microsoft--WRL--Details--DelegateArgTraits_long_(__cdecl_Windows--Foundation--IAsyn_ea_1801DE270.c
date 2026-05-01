/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___::_)(Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_41194f1b967ecfdcfc5ed7723d234191___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1801DE270
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_41194f1b967ecfdcfc5ed7723d234191_::operator() @ 0x1801D6650 (_lambda_41194f1b967ecfdcfc5ed7723d234191_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___::___Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_41194f1b967ecfdcfc5ed7723d234191___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_41194f1b967ecfdcfc5ed7723d234191_::operator()(a1 + 64, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
