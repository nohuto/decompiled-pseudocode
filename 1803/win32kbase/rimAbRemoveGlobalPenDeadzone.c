/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x1C00E6D9C
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C00E6DD8 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  result = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  return result;
}
