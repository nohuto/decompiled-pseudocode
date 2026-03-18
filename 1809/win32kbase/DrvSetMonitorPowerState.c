/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00A2C54
 * Callers:
 *     PowerOnMonitor @ 0x1C0097530 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00A3990 (PowerOffMonitor.c)
 * Callees:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A2C80 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 DrvSetMonitorPowerState()
{
  if ( gProtocolType )
    return 3221225473LL;
  DrvSetWddmDeviceMonitorPowerState(0LL);
  return 0LL;
}
