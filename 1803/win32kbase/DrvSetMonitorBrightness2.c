/*
 * XREFs of DrvSetMonitorBrightness2 @ 0x1C00D5B80
 * Callers:
 *     NtUserSetMonitorBrightness @ 0x1C00B99C0 (NtUserSetMonitorBrightness.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     ?GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z @ 0x1C0052D90 (-GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z.c)
 *     ?SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z @ 0x1C00D2D8C (-SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z.c)
 */

__int64 __fastcall DrvSetMonitorBrightness2(
        struct _LUID a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct BRIGHTNESS_SENSOR_DATA *a6)
{
  struct tagPER_MONITOR_DATA *PerMonitorData; // rax
  bool v12; // zf

  UpdateMonitorDevices();
  PerMonitorData = GetPerMonitorData(a1);
  if ( !PerMonitorData )
    return 3221226021LL;
  v12 = gDimmed == 0;
  *((_DWORD *)PerMonitorData + 5) = a3;
  if ( !v12 )
    a3 = a4;
  *((_DWORD *)PerMonitorData + 6) = a4;
  return SetMonitorBrightness(a1, a2, a3, a5, a6);
}
