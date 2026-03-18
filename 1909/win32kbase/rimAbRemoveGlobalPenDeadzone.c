/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x1C0138F4C
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0138F88 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013983C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !gDeviceArbitrationType )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 496) = 0LL;
  return result;
}
