/*
 * XREFs of ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C029DD64
 * Callers:
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02918B0 (MonitorSetDefaultAdvancedColorParams.c)
 *     ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C029BC90 (-_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C029C950 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C029E15C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_SetColorPrimariesToBT709(DXGMONITOR *this)
{
  *((_DWORD *)this + 156) = 655;
  *((_DWORD *)this + 157) = 338;
  *((_DWORD *)this + 158) = 307;
  *((_DWORD *)this + 159) = 614;
  *((_DWORD *)this + 160) = 153;
  *((_DWORD *)this + 161) = 61;
  *((_DWORD *)this + 162) = 320;
  *((_DWORD *)this + 163) = 337;
  *((_DWORD *)this + 164) = 3;
}
