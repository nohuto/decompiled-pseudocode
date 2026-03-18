/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C003DF9C
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000B820 (HUBFDO_EvtDeviceD0Entry.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C003D9FC (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, a2, a3, a2);
}
