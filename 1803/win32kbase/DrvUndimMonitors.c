/*
 * XREFs of DrvUndimMonitors @ 0x1C00D64DC
 * Callers:
 *     PowerUnDimMonitor @ 0x1C00A5200 (PowerUnDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     ?SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z @ 0x1C00D2D8C (-SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z.c)
 */

void DrvUndimMonitors()
{
  wchar_t *i; // rbx
  unsigned int j; // edi
  __int64 v2; // rcx
  __int64 v3; // rax

  UpdateMonitorDevices();
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    for ( j = 0; j < *((_DWORD *)i + 54); ++j )
    {
      v2 = *((_QWORD *)i + 28);
      v3 = 32LL * j;
      if ( *(_DWORD *)(v3 + v2 + 28) == 3 )
        SetMonitorBrightness(
          *(struct _LUID *)(i + 124),
          *(_DWORD *)(v3 + v2 + 4),
          *(_DWORD *)(v3 + v2 + 20),
          gUndimTransitionTime,
          0LL);
    }
  }
  gDimmed = 0;
}
