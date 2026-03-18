/*
 * XREFs of ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0050F5C
 * Callers:
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0050B84 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0050BE0 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C00146E4 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C00509AC (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C38E4 (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::RequestCompletedCallback(FxIoQueue *this, FxRequest *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v6; // r8
  unsigned __int16 v7; // r9
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyValidateCompletedRequest(this, m_Globals, Request);
  FxNonPagedObject::Lock(this, &irql, a3);
  FxIoQueue::RemoveFromDriverOwnedList(this, Request);
  FxIoQueue::DispatchInternalEvents(this, irql, v6, v7);
}
