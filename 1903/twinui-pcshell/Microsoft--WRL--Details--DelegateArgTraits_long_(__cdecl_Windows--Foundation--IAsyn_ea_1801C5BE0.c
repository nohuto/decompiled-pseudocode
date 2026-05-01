/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_____::_)(Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_::_scalar_deleting_destructor_ @ 0x1801C5BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4E88 (--1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_____::___Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::~CortanaUndocking_InstallAppFromStore((CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x148);
  return a1;
}
