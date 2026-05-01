/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_____::_)(Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1801E3500
 * Callers:
 *     _lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator() @ 0x1801E4348 (_lambda_6beee81bb2061f57cf9eaca4a4fea397_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1801E32C4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Par.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_____::___Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = &CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::`vftable';
  *(_QWORD *)a1 = off_18045DAA0;
  return a1;
}
