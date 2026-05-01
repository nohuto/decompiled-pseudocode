/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@XZ @ 0x1800ABDD4
 * Callers:
 *     _Win32AppStateManager::TerminateApp_::_1_::dtor$3 @ 0x1800AD3E9 (_Win32AppStateManager--TerminateApp_--_1_--dtor$3.c)
 *     _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x180115FF6 (_AgileRegistrationList--Register_--_1_--dtor$0.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e____::_1_::dtor$1 @ 0x1801ED654 (_Windows--Internal--COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__ea_1801ED654.c)
 *     _TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync_::_1_::dtor$1 @ 0x1801F2627 (_TaskFlowImmersiveShellBroker--GetCurrentActivityForAllViewsAsync_--_1_--dtor$1.c)
 *     _HolographicViewHostItemLedger::GetLastActiveItem_::_1_::dtor$3 @ 0x180208232 (_HolographicViewHostItemLedger--GetLastActiveItem_--_1_--dtor$3.c)
 *     _HolographicViewHostItemLedger::GetLastActiveItem_::_1_::dtor$4 @ 0x18020823E (_HolographicViewHostItemLedger--GetLastActiveItem_--_1_--dtor$4.c)
 *     _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$3 @ 0x18024881D (_TitleBarController--EnsureTitleBarFactoryStatics_--_1_--dtor$3.c)
 *     _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$7 @ 0x180248841 (_TitleBarController--EnsureTitleBarFactoryStatics_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::~Iterator(
        __int64 a1)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
