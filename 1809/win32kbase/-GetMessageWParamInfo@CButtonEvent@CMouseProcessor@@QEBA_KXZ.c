/*
 * XREFs of ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006F518
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

unsigned __int64 __fastcall CMouseProcessor::CButtonEvent::GetMessageWParamInfo(CMouseProcessor::CButtonEvent *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("We should not get here if message cannot be produced for this CButtonEvent");
    v1 = *((_QWORD *)this + 3);
  }
  return *(_QWORD *)(v1 + 16);
}
