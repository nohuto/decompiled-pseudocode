/*
 * XREFs of RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C012EC40
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimFinalizePointerFlags @ 0x1C012ABF8 (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmIsSuppressedContactMarkedForDelivery(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  return (*(_DWORD *)(a1 + 2420) >> 25) & 1;
}
