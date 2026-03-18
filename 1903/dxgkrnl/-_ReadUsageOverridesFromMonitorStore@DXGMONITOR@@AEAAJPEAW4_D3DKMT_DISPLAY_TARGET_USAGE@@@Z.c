/*
 * XREFs of ?_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB53C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C016FA74 (-_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01752C0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageOverridesFromMonitorStore(
        DXGMONITOR *this,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a2)
{
  enum _D3DKMT_DISPLAY_TARGET_USAGE *v2; // rdi
  __int64 result; // rax
  DXGMONITOR *v4; // rcx
  unsigned int UsageOverridesFromRegistry; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  Handle = 0LL;
  v2 = a2;
  LOBYTE(a2) = 1;
  result = DXGMONITOR::_OpenMonitorDataStore(this, (__int64)a2, &Handle);
  UsageOverridesFromRegistry = result;
  if ( (int)result >= 0 )
  {
    if ( g_OSTestSigningEnabled )
      UsageOverridesFromRegistry = DXGMONITOR::_ReadUsageOverridesFromRegistry(v4, Handle, v2);
    ZwClose(Handle);
    return UsageOverridesFromRegistry;
  }
  return result;
}
