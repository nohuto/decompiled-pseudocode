/*
 * XREFs of DrvDimMonitors @ 0x1C00D3F0C
 * Callers:
 *     PowerDimMonitor @ 0x1C00A466C (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     ?SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z @ 0x1C00D2D8C (-SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z.c)
 */

void DrvDimMonitors()
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
          *(_DWORD *)(v3 + v2 + 24),
          gDimTransitionTime,
          0LL);
    }
  }
  gDimmed = 1;
}
