/*
 * XREFs of ?_GetColorPrimariesType@DXGMONITOR@@AEAA?AW4ColorPrimaryType@1@XZ @ 0x1C029AC98
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C029E15C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     ?_GetColorGamutTriangleArea@DXGMONITOR@@AEAANNNNNNN@Z @ 0x1C029AC24 (-_GetColorGamutTriangleArea@DXGMONITOR@@AEAANNNNNNN@Z.c)
 *     ?_GetDeltaBetweenPoints@DXGMONITOR@@AEAANNNNN@Z @ 0x1C029AFB4 (-_GetDeltaBetweenPoints@DXGMONITOR@@AEAANNNNN@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetColorPrimariesType(_DWORD *a1)
{
  int v1; // eax
  int v2; // r8d
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  DXGMONITOR *v6; // rcx
  double v7; // xmm11_8
  double v8; // xmm6_8
  double v9; // xmm12_8
  double v10; // xmm9_8
  double v11; // xmm8_8
  double v12; // xmm10_8
  unsigned int v13; // edx
  DXGMONITOR *v14; // rcx
  DXGMONITOR *v15; // rcx
  DXGMONITOR *v16; // rcx
  double ColorGamutTriangleArea; // xmm6_8
  DXGMONITOR *v18; // rcx
  double v19; // xmm0_8

  v1 = a1[156];
  if ( !v1 )
    return 0LL;
  v2 = a1[157];
  if ( !v2 )
    return 0LL;
  v3 = a1[158];
  if ( !v3 )
    return 0LL;
  v4 = a1[159];
  if ( !v4 )
    return 0LL;
  v5 = a1[160];
  if ( !v5 )
    return 0LL;
  v6 = (DXGMONITOR *)(unsigned int)a1[161];
  if ( !(_DWORD)v6 )
    return 0LL;
  v7 = (float)((float)((float)v1 * 0.0009765625) + 0.00050000002);
  v8 = (float)((float)((float)v3 * 0.0009765625) + 0.00050000002);
  v9 = (float)((float)((float)v2 * 0.0009765625) + 0.00050000002);
  v10 = (float)((float)((float)v5 * 0.0009765625) + 0.00050000002);
  v11 = (float)((float)((float)v4 * 0.0009765625) + 0.00050000002);
  v12 = (float)((float)((float)(int)v6 * 0.0009765625) + 0.00050000002);
  if ( DXGMONITOR::_GetDeltaBetweenPoints(v6, v7, v9, 0.6399999856948853, 0.3300000131130219) <= 0.09000000357627869
    && DXGMONITOR::_GetDeltaBetweenPoints(v14, v8, v11, 0.239999994635582, 0.6499999761581421) <= 0.1749999970197678
    && DXGMONITOR::_GetDeltaBetweenPoints(v15, v10, v12, 0.1500000059604645, 0.07500000298023224) <= 0.07000000029802322 )
  {
    ColorGamutTriangleArea = DXGMONITOR::_GetColorGamutTriangleArea(v16, v7, v9, v8, v11, v10, v12);
    v19 = DXGMONITOR::_GetColorGamutTriangleArea(
            v18,
            0.6399999856948853,
            0.3300000131130219,
            0.300000011920929,
            0.6000000238418579,
            0.1500000059604645,
            0.05999999865889549);
    if ( v19 * 0.5 <= ColorGamutTriangleArea )
    {
      if ( v19 * 1.019999980926514 < ColorGamutTriangleArea )
        return 2;
      else
        return 1;
    }
  }
  return v13;
}
