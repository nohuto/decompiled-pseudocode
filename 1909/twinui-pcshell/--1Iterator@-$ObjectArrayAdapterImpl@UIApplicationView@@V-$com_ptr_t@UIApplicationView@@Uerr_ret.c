/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@XZ @ 0x1800BA6B4
 * Callers:
 *     _Win32AppStateManager::TerminateApp_::_1_::dtor$3 @ 0x1800BBCE9 (_Win32AppStateManager--TerminateApp_--_1_--dtor$3.c)
 *     _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x180135466 (_AgileRegistrationList--Register_--_1_--dtor$0.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e____::_1_::dtor$1 @ 0x18020C764 (_Windows--Internal--COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__ea_18020C764.c)
 *     _TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync_::_1_::dtor$1 @ 0x180211707 (_TaskFlowImmersiveShellBroker--GetCurrentActivityForAllViewsAsync_--_1_--dtor$1.c)
 *     _HolographicViewHostItemLedger::GetLastActiveItem_::_1_::dtor$3 @ 0x180227472 (_HolographicViewHostItemLedger--GetLastActiveItem_--_1_--dtor$3.c)
 *     _HolographicViewHostItemLedger::GetLastActiveItem_::_1_::dtor$4 @ 0x18022747E (_HolographicViewHostItemLedger--GetLastActiveItem_--_1_--dtor$4.c)
 *     _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$3 @ 0x180267E1D (_TitleBarController--EnsureTitleBarFactoryStatics_--_1_--dtor$3.c)
 *     _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$7 @ 0x180267E41 (_TitleBarController--EnsureTitleBarFactoryStatics_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::~Iterator(
        __int64 a1)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
