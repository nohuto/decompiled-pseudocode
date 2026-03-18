/*
 * XREFs of ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C002009C
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C0171FC0 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C017205C (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::EdidColorDepthMoreThanSDR(DXGMONITOR *this)
{
  return (*((_DWORD *)this + 150) & 0x3C) != 0
      || (*((_DWORD *)this + 151) & 0x3C) != 0
      || (*((_DWORD *)this + 152) & 0x3C) != 0
      || (*((_DWORD *)this + 153) & 0x3C) != 0;
}
