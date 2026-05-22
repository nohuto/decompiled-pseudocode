/*
 * XREFs of ??1?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x180053840
 * Callers:
 *     _DWMCursor::SetPosition_::_1_::dtor$2 @ 0x18003ACE0 (_DWMCursor--SetPosition_--_1_--dtor$2.c)
 *     _MPCInputRouter::SupportedInputUpdatedForTarget_::_1_::dtor$0 @ 0x18003B7F8 (_MPCInputRouter--SupportedInputUpdatedForTarget_--_1_--dtor$0.c)
 *     _DWMInputRouter::UpdateFocusedInputTarget_::_1_::dtor$5 @ 0x18003BE90 (_DWMInputRouter--UpdateFocusedInputTarget_--_1_--dtor$5.c)
 *     _WGIRawInputProvider::OnTargetWithFocusChanged_::_1_::dtor$0 @ 0x18003C120 (_WGIRawInputProvider--OnTargetWithFocusChanged_--_1_--dtor$0.c)
 *     _DWMInputRouter::UpdateFocusedInputTarget_::_1_::dtor$2 @ 0x18003C260 (_DWMInputRouter--UpdateFocusedInputTarget_--_1_--dtor$2.c)
 *     _DWMFocusedInputTarget::GetProcessId_::_1_::dtor$0 @ 0x18003C2A0 (_DWMFocusedInputTarget--GetProcessId_--_1_--dtor$0.c)
 *     _ISMTracing::GetDVIDOfTarget_::_1_::dtor$1 @ 0x180053CA4 (_ISMTracing--GetDVIDOfTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::GetFrameworkViewTypeFromFocusTarget_::_1_::dtor$0 @ 0x180053EB3 (_MPCInputRouter--GetFrameworkViewTypeFromFocusTarget_--_1_--dtor$0.c)
 *     _ISMTracing::GetPIDOfTarget_::_1_::dtor$1 @ 0x180054134 (_ISMTracing--GetPIDOfTarget_--_1_--dtor$1.c)
 *     _ISMTracing::GetVIDOfTarget_::_1_::dtor$1 @ 0x180054224 (_ISMTracing--GetVIDOfTarget_--_1_--dtor$1.c)
 *     _ISMTracing::GetWIDOfTarget_::_1_::dtor$1 @ 0x1800542D7 (_ISMTracing--GetWIDOfTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$2 @ 0x18005499C (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$2.c)
 *     _MPCInputRouter::IsTargetHolographic_::_1_::dtor$0 @ 0x180054C4E (_MPCInputRouter--IsTargetHolographic_--_1_--dtor$0.c)
 *     _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$1 @ 0x18005596B (_MPCInputRouter--OnExclusiveModeStateChangedInputThread_--_1_--dtor$1.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$0 @ 0x18005640F (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$0.c)
 *     _DWMInputRouter::TryFireViewHitTest_::_1_::dtor$0 @ 0x1800C573A (_DWMInputRouter--TryFireViewHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetDelegateInputMode_::_1_::dtor$0 @ 0x1800FAA30 (_ContextualProcessorBuffer--GetDelegateInputMode_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetDelegateSourceProcessId_::_1_::dtor$0 @ 0x1800FAAB0 (_ContextualProcessorBuffer--GetDelegateSourceProcessId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetDelegateSourceViewId_::_1_::dtor$0 @ 0x1800FAB30 (_ContextualProcessorBuffer--GetDelegateSourceViewId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetProcessId_::_1_::dtor$0 @ 0x1800FACC0 (_ContextualProcessorBuffer--GetProcessId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetThreadId_::_1_::dtor$0 @ 0x1800FADC0 (_ContextualProcessorBuffer--GetThreadId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetViewId_::_1_::dtor$0 @ 0x1800FAE40 (_ContextualProcessorBuffer--GetViewId_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::GetWindowId_::_1_::dtor$0 @ 0x1800FAEC0 (_ContextualProcessorBuffer--GetWindowId_--_1_--dtor$0.c)
 *     _InputServiceProcessor::OnInput_::_1_::dtor$0 @ 0x18010846C (_InputServiceProcessor--OnInput_--_1_--dtor$0.c)
 *     _MPCMouseProcessor::DownLevelInput_::_1_::dtor$1 @ 0x18013A4B3 (_MPCMouseProcessor--DownLevelInput_--_1_--dtor$1.c)
 *     _MPCMouseProcessor::PopulateTargetingData_::_1_::dtor$2 @ 0x18013BEB2 (_MPCMouseProcessor--PopulateTargetingData_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IFocusInputTarget>::~ComPtr<IFocusInputTarget>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(a1);
}
