/*
 * XREFs of ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00342D0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C002F178 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     CitBackgroundMouseInput @ 0x1C0034310 (CitBackgroundMouseInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::Telemetry::OnBackgroundMouseInput(const struct CInputDest *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct tagTHREADINFO *ThreadInfo; // rax

  if ( CInputDest::DoesBelongToForeground((__int64)this, 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  ThreadInfo = CInputDest::GetThreadInfo(this);
  if ( ThreadInfo )
    CitBackgroundMouseInput(*((_QWORD *)ThreadInfo + 53));
}
