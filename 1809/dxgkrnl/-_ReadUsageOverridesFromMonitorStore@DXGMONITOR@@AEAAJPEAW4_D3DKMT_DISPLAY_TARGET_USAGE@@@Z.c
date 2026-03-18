/*
 * XREFs of ?_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02958C8
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02959C8 (-_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageOverridesFromMonitorStore(
        DXGMONITOR *this,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a2)
{
  __int64 result; // rax
  DXGMONITOR *v4; // rcx
  unsigned int UsageOverridesFromRegistry; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  Handle = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1, &Handle);
  if ( (int)result >= 0 )
  {
    UsageOverridesFromRegistry = DXGMONITOR::_ReadUsageOverridesFromRegistry(v4, Handle, a2);
    ZwClose(Handle);
    return UsageOverridesFromRegistry;
  }
  return result;
}
