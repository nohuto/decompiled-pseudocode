/*
 * XREFs of ??1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4E88
 * Callers:
 *     _lambda_f8fc68a596a1d4698bf0d7673b0f23f8_::__lambda_f8fc68a596a1d4698bf0d7673b0f23f8_ @ 0x1801C4AA4 (_lambda_f8fc68a596a1d4698bf0d7673b0f23f8_--__lambda_f8fc68a596a1d4698bf0d7673b0f23f8_.c)
 *     _lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator() @ 0x1801C5328 (_lambda_6beee81bb2061f57cf9eaca4a4fea397_--operator().c)
 *     __lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator()_::_1_::dtor$0 @ 0x1801C55FA (__lambda_6beee81bb2061f57cf9eaca4a4fea397_--operator()_--_1_--dtor$0.c)
 *     _lambda_f8fc68a596a1d4698bf0d7673b0f23f8_::operator() @ 0x1801C5AB8 (_lambda_f8fc68a596a1d4698bf0d7673b0f23f8_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_____::_)(Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_::_scalar_deleting_destructor_ @ 0x1801C5BE0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1801C5BE0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801C6918 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::~CortanaUndocking_InstallAppFromStore(
        CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
