/*
 * XREFs of ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0002728
 * Callers:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000202C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000265C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00026A4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C00CD548 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetSizeFromGammaRampType(enum _D3DDDI_GAMMARAMP_TYPE a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = a1;
  switch ( a1 )
  {
    case D3DDDI_GAMMARAMP_DEFAULT:
      return 0LL;
    case D3DDDI_GAMMARAMP_RGB256x3x16:
      return 1536LL;
    case D3DDDI_GAMMARAMP_DXGI_1:
      return 12324LL;
    case D3DDDI_GAMMARAMP_MATRIX_3x4:
      return 49204LL;
  }
  if ( a1 != (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
  {
    v3 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v3 + 24) = v1;
    WdLogEvent5_WdError(v3);
    return 0LL;
  }
  return 98352LL;
}
