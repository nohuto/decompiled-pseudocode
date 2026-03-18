/*
 * XREFs of ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0295918
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02959C8 (-_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageOverridesFromPnpRegistry(
        DXGMONITOR *this,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a2)
{
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  DXGMONITOR *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  DeviceRegKey = 0LL;
  *(_DWORD *)a2 = 0;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
    return 3221225635LL;
  v5 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 7), 2u, 0x20019u, &DeviceRegKey);
  v10 = v5;
  if ( v5 >= 0 )
  {
    if ( g_OSTestSigningEnabled )
      LODWORD(v10) = DXGMONITOR::_ReadUsageOverridesFromRegistry(v7, DeviceRegKey, a2);
  }
  else
  {
    v11 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = v10;
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v10;
}
