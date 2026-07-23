/*
 * XREFs of PopThermalStandbyNotify @ 0x1402DC5C8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x1402DC574 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopThermalStandbyNotify(char a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    Buffer = 1;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_THERMAL_STANDBY_NOTIFICATION);
  }
  else
  {
    Buffer = 0;
  }
  return ZwUpdateWnfStateData(&WNF_PO_THERMAL_STANDBY, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
