/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x1C011067C
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C01106B8 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  result = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  return result;
}
