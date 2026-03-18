/*
 * XREFs of ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C029B0A4
 * Callers:
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C029C950 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(DXGMONITOR *this, int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
  {
    if ( a3 )
      return (unsigned int)(int)((float)((float)(a2 * a2) * 0.000015379001) * (double)(a3 / 0x2710) / 100.0 * 10000.0);
  }
  return result;
}
