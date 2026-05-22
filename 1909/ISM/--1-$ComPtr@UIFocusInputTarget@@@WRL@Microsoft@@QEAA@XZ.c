/*
 * XREFs of ??1?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x1800535A0
 * Callers:
 *     _DWMCursor::SetPosition_::_1_::dtor$2 @ 0x18003A7B0 (_DWMCursor--SetPosition_--_1_--dtor$2.c)
 *     _MPCInputRouter::SupportedInputUpdatedForTarget_::_1_::dtor$0 @ 0x18003B2C8 (_MPCInputRouter--SupportedInputUpdatedForTarget_--_1_--dtor$0.c)
 *     _DWMFocusedInputTarget::GetProcessId_::_1_::dtor$0 @ 0x18003B960 (_DWMFocusedInputTarget--GetProcessId_--_1_--dtor$0.c)
 *     _DWMInputRouter::UpdateFocusedInputTarget_::_1_::dtor$5 @ 0x18003B980 (_DWMInputRouter--UpdateFocusedInputTarget_--_1_--dtor$5.c)
 *     _WGIRawInputProvider::OnTargetWithFocusChanged_::_1_::dtor$0 @ 0x18003BC10 (_WGIRawInputProvider--OnTargetWithFocusChanged_--_1_--dtor$0.c)
 *     _DWMInputRouter::UpdateFocusedInputTarget_::_1_::dtor$2 @ 0x18003BD50 (_DWMInputRouter--UpdateFocusedInputTarget_--_1_--dtor$2.c)
 *     _ISMTracing::GetDVIDOfTarget_::_1_::dtor$1 @ 0x180053A04 (_ISMTracing--GetDVIDOfTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::GetFrameworkViewTypeFromFocusTarget_::_1_::dtor$0 @ 0x180053C13 (_MPCInputRouter--GetFrameworkViewTypeFromFocusTarget_--_1_--dtor$0.c)
 *     _ISMTracing::GetPIDOfTarget_::_1_::dtor$1 @ 0x180053E94 (_ISMTracing--GetPIDOfTarget_--_1_--dtor$1.c)
 *     _ISMTracing::GetVIDOfTarget_::_1_::dtor$1 @ 0x180053F84 (_ISMTracing--GetVIDOfTarget_--_1_--dtor$1.c)
 *     _ISMTracing::GetWIDOfTarget_::_1_::dtor$1 @ 0x180054037 (_ISMTracing--GetWIDOfTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$2 @ 0x1800546FC (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$2.c)
 *     _MPCInputRouter::IsTargetHolographic_::_1_::dtor$0 @ 0x1800549AE (_MPCInputRouter--IsTargetHolographic_--_1_--dtor$0.c)
 *     _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$1 @ 0x1800556CB (_MPCInputRouter--OnExclusiveModeStateChangedInputThread_--_1_--dtor$1.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$0 @ 0x18005616F (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$0.c)
 *     _DWMInputRouter::TryFireViewHitTest_::_1_::dtor$0 @ 0x1800C554A (_DWMInputRouter--TryFireViewHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetDelegateInputMode_::_1_::dtor$0 @ 0x1800FA800 (_ContextualProcessorBuffer--GetDelegateInputMode_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetDelegateSourceProcessId_::_1_::dtor$0 @ 0x1800FA880 (_ContextualProcessorBuffer--GetDelegateSourceProcessId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetDelegateSourceViewId_::_1_::dtor$0 @ 0x1800FA900 (_ContextualProcessorBuffer--GetDelegateSourceViewId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetProcessId_::_1_::dtor$0 @ 0x1800FAA90 (_ContextualProcessorBuffer--GetProcessId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetThreadId_::_1_::dtor$0 @ 0x1800FAB90 (_ContextualProcessorBuffer--GetThreadId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetViewId_::_1_::dtor$0 @ 0x1800FAC10 (_ContextualProcessorBuffer--GetViewId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetWindowId_::_1_::dtor$0 @ 0x1800FAC90 (_ContextualProcessorBuffer--GetWindowId_--_1_--dtor$0.c)
 *     _InputServiceProcessor::OnInput_::_1_::dtor$0 @ 0x18010823C (_InputServiceProcessor--OnInput_--_1_--dtor$0.c)
 *     _MPCMouseProcessor::DownLevelInput_::_1_::dtor$1 @ 0x18013A4E7 (_MPCMouseProcessor--DownLevelInput_--_1_--dtor$1.c)
 *     _MPCMouseProcessor::PopulateTargetingData_::_1_::dtor$2 @ 0x18013BEF2 (_MPCMouseProcessor--PopulateTargetingData_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IFocusInputTarget>::~ComPtr<IFocusInputTarget>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(a1);
}
