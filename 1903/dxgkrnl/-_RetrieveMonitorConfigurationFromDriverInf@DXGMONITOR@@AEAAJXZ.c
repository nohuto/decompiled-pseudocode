/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0173D68
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FB9C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173C00 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C0173E04 (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0173EA0 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(DXGMONITOR *this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v9; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  DeviceRegKey = 0LL;
  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 7);
  if ( v2 && (*((_DWORD *)this + 10) & 0x10) != 0 )
  {
    v3 = IoOpenDeviceRegistryKey(v2, 2u, 0x20019u, &DeviceRegKey);
    v7 = v3;
    if ( v3 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v5, v4, v6);
      *(_QWORD *)(v9 + 24) = v7;
      WdLogEvent5_WdError(v9);
    }
    else
    {
      LODWORD(v7) = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, DeviceRegKey, 1u);
      if ( (int)v7 >= 0 )
        LODWORD(v7) = DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(this);
    }
  }
  else
  {
    LODWORD(v7) = -1073741275;
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v7;
}
