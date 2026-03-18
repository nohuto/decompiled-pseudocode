/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00B8DA0
 * Callers:
 *     PowerOnMonitor @ 0x1C005B3B0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00B8460 (PowerOffMonitor.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00ADCA4 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 __fastcall DrvSetMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return 3221225473LL;
  DrvSetWddmDeviceMonitorPowerState(0LL, a2, a3, a4);
  return 0LL;
}
