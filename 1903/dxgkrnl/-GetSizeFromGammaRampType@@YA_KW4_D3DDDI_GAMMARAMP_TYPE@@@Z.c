/*
 * XREFs of ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000D318
 * Callers:
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000D24C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000D294 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000D888 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C0128998 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetSizeFromGammaRampType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      return 0LL;
    case 2:
      return 1536LL;
    case 3:
      return 12324LL;
    case 4:
      return 49204LL;
  }
  if ( (_DWORD)a1 != 5 )
  {
    v5 = WdLogNewEntry5_WdError(a1, (unsigned int)(a1 - 4), a3);
    *(_QWORD *)(v5 + 24) = v3;
    WdLogEvent5_WdError(v5);
    return 0LL;
  }
  return 98352LL;
}
