/*
 * XREFs of ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C004F11C
 * Callers:
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C029A430 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C029E15C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::EdidColorDepthMoreThanSDR(DXGMONITOR *this)
{
  return (*((_DWORD *)this + 149) & 0x3C) != 0
      || (*((_DWORD *)this + 150) & 0x3C) != 0
      || (*((_DWORD *)this + 151) & 0x3C) != 0
      || (*((_DWORD *)this + 152) & 0x3C) != 0;
}
