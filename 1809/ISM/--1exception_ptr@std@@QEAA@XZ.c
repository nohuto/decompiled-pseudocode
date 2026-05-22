/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x18003C700
 * Callers:
 *     _MPCClickerProcessor::InitializeConstants_::_1_::dtor$0 @ 0x18012F67A (_MPCClickerProcessor--InitializeConstants_--_1_--dtor$0.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x18012F94F (_std--rethrow_exception_--_1_--dtor$0.c)
 *     __lambda_3bf0c1641773c9cead522fb3b6204044_::operator()_::_1_::dtor$4 @ 0x18012F9BA (__lambda_3bf0c1641773c9cead522fb3b6204044_--operator()_--_1_--dtor$4.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$16 @ 0x18012FCA2 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$16.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$2 @ 0x180131757 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
