/*
 * XREFs of _lambda_243107b6e7951c22bf872808b8683140_::__lambda_243107b6e7951c22bf872808b8683140_ @ 0x1802A5B20
 * Callers:
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x1800C4691 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 * Callees:
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180296360 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_243107b6e7951c22bf872808b8683140_::__lambda_243107b6e7951c22bf872808b8683140_(__int64 a1)
{
  ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)(a1 + 32));
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
