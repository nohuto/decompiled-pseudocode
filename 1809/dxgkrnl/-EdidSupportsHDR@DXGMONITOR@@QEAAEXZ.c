/*
 * XREFs of ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C029A430
 * Callers:
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C02919D8 (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C0291ABC (MonitorSetSDRWhiteLevel.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C029E15C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C004F11C (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall DXGMONITOR::EdidSupportsHDR(DXGMONITOR *this)
{
  char v1; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 696)
    && (*((_BYTE *)this + 623) || *((_BYTE *)this + 622))
    && DXGMONITOR::EdidColorDepthMoreThanSDR(this) )
  {
    return 1;
  }
  return v1;
}
