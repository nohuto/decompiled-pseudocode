/*
 * XREFs of Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_::_ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_ @ 0x180016B7C
 * Callers:
 *     _WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_1_::dtor$1 @ 0x1800CC807 (_WaitForCompletion_Windows--Foundation--IAsyncActionCompletedHandler_Windows--Found_ea_1800CC807.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_________::_1_::dtor$1 @ 0x1800CC9AA (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CC9AA.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Core::AppListEntry_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Core::AppListEntry_________::_1_::dtor$1 @ 0x1800CCA3E (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CCA3E.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_bool__Windows::Foundation::IAsyncOperation_bool____::_1_::dtor$1 @ 0x1800CCA62 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_bool__Windo_ea_1800CCA62.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Security::WebAuthentication::UserHostIdentity____Windows::Foundation::IAsyncOperation_Windows::Internal::Security::WebAuthentication::UserHostIdentity______::_1_::dtor$1 @ 0x1800CCA86 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--In_ea_1800CCA86.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::AppService::AppServiceResponse____Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::AppService::AppServiceResponse______::_1_::dtor$1 @ 0x1800CDA5F (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Ap_ea_1800CDA5F.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_1_::dtor$1 @ 0x1800CDA83 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_enum_Window_ea_1800CDA83.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_________::_1_::dtor$1 @ 0x1800CF784 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CF784.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_1_::dtor$1 @ 0x1800CF7A8 (_WaitForCompletion_Windows--Foundation--IAsyncOperationWithProgressCompletedHandler_ea_1800CF7A8.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_________::_1_::dtor$1 @ 0x1800CF7CC (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CF7CC.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult____Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult______::_1_::dtor$1 @ 0x1800CF7F0 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Ap_ea_1800CF7F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_::_ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
