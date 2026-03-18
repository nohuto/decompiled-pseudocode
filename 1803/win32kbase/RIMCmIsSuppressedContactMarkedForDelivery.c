/*
 * XREFs of RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C0106D9C
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimFinalizePointerFlags @ 0x1C010248C (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmIsSuppressedContactMarkedForDelivery(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  return (*(_DWORD *)(a1 + 2404) >> 25) & 1;
}
