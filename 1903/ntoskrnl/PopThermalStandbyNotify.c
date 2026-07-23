/*
 * XREFs of PopThermalStandbyNotify @ 0x1402F7FCC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140195F40 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x1402F7F68 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x1408A8FB0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
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
