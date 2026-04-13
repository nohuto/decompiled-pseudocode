/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64___::_)(Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_d4e16ff8e34da2edeeacc718f45dd8b6__&___ptr64__1_Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64_::Invoke @ 0x1800386B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x18002B594 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64___::___Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_d4e16ff8e34da2edeeacc718f45dd8b6______ptr64__1_Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        PVOID a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *(RTL_SRWLOCK **)(a1 + 64);
  if ( a2 == v2[16].Ptr )
    ContentManagement::ContentManagementService::CloseConnection(v2);
  return 0LL;
}
