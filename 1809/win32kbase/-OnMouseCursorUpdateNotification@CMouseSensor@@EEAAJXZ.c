/*
 * XREFs of ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0032200
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C002EC58 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003223C (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CMouseSensor::OnMouseCursorUpdateNotification(CMouseSensor *this)
{
  __int64 v2; // rcx

  if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    MicrosoftTelemetryAssertTriggeredMsgKM(
      "Since request gets invoked via a Dispatcher object, we expect to be executed on Sensor thread - creator of object");
  v2 = *((_QWORD *)this + 140);
  if ( v2 )
    CMouseProcessor::MoveMouseWindowManagement(v2, 4);
  return 0LL;
}
