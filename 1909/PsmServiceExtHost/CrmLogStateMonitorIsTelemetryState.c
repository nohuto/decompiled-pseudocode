/*
 * XREFs of CrmLogStateMonitorIsTelemetryState @ 0x1800045D4
 * Callers:
 *     CrmLogStateMonitorStop @ 0x180003758 (CrmLogStateMonitorStop.c)
 *     CrmLogStateMonitorRundown @ 0x180003F58 (CrmLogStateMonitorRundown.c)
 *     CrmLogStateMonitorStateSet @ 0x180004428 (CrmLogStateMonitorStateSet.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmLogStateMonitorIsTelemetryState(int a1)
{
  return (unsigned int)(a1 - 3) <= 0xD || a1 == 32;
}
