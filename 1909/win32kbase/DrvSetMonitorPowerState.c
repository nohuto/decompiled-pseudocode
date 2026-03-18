/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00B7990
 * Callers:
 *     PowerOnMonitor @ 0x1C00669D0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00B0FB0 (PowerOffMonitor.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00AB1F4 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 __fastcall DrvSetMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return 3221225473LL;
  DrvSetWddmDeviceMonitorPowerState(0LL, a2, a3, a4);
  return 0LL;
}
