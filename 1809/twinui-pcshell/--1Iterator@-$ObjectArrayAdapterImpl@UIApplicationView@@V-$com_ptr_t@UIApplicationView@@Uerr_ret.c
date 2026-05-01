/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@XZ @ 0x1800EBB38
 * Callers:
 *     _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x1800F1657 (_AgileRegistrationList--Register_--_1_--dtor$0.c)
 *     _HolographicViewHostItemLedger::GetLastActiveItem_::_1_::dtor$3 @ 0x1801BA6C4 (_HolographicViewHostItemLedger--GetLastActiveItem_--_1_--dtor$3.c)
 *     _HolographicViewHostItemLedger::GetLastActiveItem_::_1_::dtor$4 @ 0x1801BA6D0 (_HolographicViewHostItemLedger--GetLastActiveItem_--_1_--dtor$4.c)
 *     _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$3 @ 0x1801F786C (_TitleBarController--EnsureTitleBarFactoryStatics_--_1_--dtor$3.c)
 *     _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$7 @ 0x1801F7890 (_TitleBarController--EnsureTitleBarFactoryStatics_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::~Iterator(
        __int64 a1)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
