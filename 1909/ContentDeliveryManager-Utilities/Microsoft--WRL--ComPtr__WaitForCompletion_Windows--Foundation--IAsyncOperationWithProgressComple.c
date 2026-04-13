/*
 * XREFs of Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_::_ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_ @ 0x180016F4C
 * Callers:
 *     _WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_1_::dtor$1 @ 0x1800CC997 (_WaitForCompletion_Windows--Foundation--IAsyncActionCompletedHandler_Windows--Found_ea_1800CC997.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_________::_1_::dtor$1 @ 0x1800CCB3A (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CCB3A.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Core::AppListEntry_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Core::AppListEntry_________::_1_::dtor$1 @ 0x1800CCBCE (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CCBCE.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_bool__Windows::Foundation::IAsyncOperation_bool____::_1_::dtor$1 @ 0x1800CCBF2 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_bool__Windo_ea_1800CCBF2.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Security::WebAuthentication::UserHostIdentity____Windows::Foundation::IAsyncOperation_Windows::Internal::Security::WebAuthentication::UserHostIdentity______::_1_::dtor$1 @ 0x1800CCC16 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--In_ea_1800CCC16.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::AppService::AppServiceResponse____Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::AppService::AppServiceResponse______::_1_::dtor$1 @ 0x1800CDC01 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Ap_ea_1800CDC01.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_1_::dtor$1 @ 0x1800CDC25 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_enum_Window_ea_1800CDC25.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_________::_1_::dtor$1 @ 0x1800CF926 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CF926.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_1_::dtor$1 @ 0x1800CF94A (_WaitForCompletion_Windows--Foundation--IAsyncOperationWithProgressCompletedHandler_ea_1800CF94A.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_________::_1_::dtor$1 @ 0x1800CF96E (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CF96E.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult____Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult______::_1_::dtor$1 @ 0x1800CF992 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Ap_ea_1800CF992.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
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
