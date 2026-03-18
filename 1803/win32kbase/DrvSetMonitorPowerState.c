/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00D5C04
 * Callers:
 *     PowerOffMonitor @ 0x1C00A48E0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 * Callees:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6068 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 __fastcall DrvSetMonitorPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( gProtocolType )
    return 3221225473LL;
  DrvSetWddmDeviceMonitorPowerState(0LL, a2, a3, a4);
  return 0LL;
}
