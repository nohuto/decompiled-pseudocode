/*
 * XREFs of ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0159920
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C002EFF8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     IsShellProcess @ 0x1C00339DC (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall CMouseProcessor::ShouldDeliverWheelEventToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3)
{
  char v3; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v7; // rax

  v3 = 0;
  if ( !*(_DWORD *)a3 )
    return 0;
  if ( *((_DWORD *)a2 + 2) == 2 || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    return 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Should not get here is mouse event had RawMouseProcessingOptions::RouteWheelToHitTestResult specified");
  if ( CInputDest::IsCompositionInput(a3) )
    return 1;
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( !ThreadInfo || (*(_DWORD *)(*((_QWORD *)ThreadInfo + 53) + 820LL) & 0x30) != 0 )
  {
    v7 = CInputDest::GetThreadInfo(a3);
    if ( !v7 || !(unsigned int)IsShellProcess(*((_QWORD *)v7 + 53)) )
      return 1;
  }
  return v3;
}
