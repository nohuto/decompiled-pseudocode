/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0295D7C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029878C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0295EA4 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C02994F4 (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(DXGMONITOR *this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  DeviceRegKey = 0LL;
  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 7);
  if ( v2 && (*((_DWORD *)this + 10) & 0x10) != 0 )
  {
    v3 = IoOpenDeviceRegistryKey(v2, 2u, 0x20019u, &DeviceRegKey);
    v5 = v3;
    if ( v3 >= 0 )
    {
      LODWORD(v5) = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, DeviceRegKey, 1u);
      if ( (int)v5 >= 0 )
        LODWORD(v5) = DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(this);
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = v5;
      WdLogEvent5_WdError(v6);
    }
  }
  else
  {
    LODWORD(v5) = -1073741275;
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v5;
}
