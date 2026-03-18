/*
 * XREFs of ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0295E34
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0295EA4 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore(DXGMONITOR *this)
{
  int MonitorConfigurationFromRegistry; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    MonitorConfigurationFromRegistry = DXGMONITOR::_OpenMonitorDataStore(this, 1, &Handle);
    if ( MonitorConfigurationFromRegistry >= 0 )
      MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, Handle, 0);
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)MonitorConfigurationFromRegistry;
}
