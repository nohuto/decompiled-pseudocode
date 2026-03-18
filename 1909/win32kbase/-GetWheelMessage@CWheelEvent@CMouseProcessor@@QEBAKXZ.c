/*
 * XREFs of ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C018F6DC
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z @ 0x1C004A4AC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CWheelEvent::GetWheelMessage(
        CMouseProcessor::CWheelEvent *this,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 7);
  if ( !v3 )
    return 522LL;
  if ( v3 != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  return 526LL;
}
