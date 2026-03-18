/*
 * XREFs of ?_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ @ 0x1C00C3DF0
 * Callers:
 *     ?_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C014BAAC (-_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ @ 0x1C0174B0C (-_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C012939C (-_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 */

bool __fastcall DXGMONITOR::_IsTargetMatrix_3x4Supported(DXGMONITOR *this)
{
  int MostCapableColorSpaceTransform; // eax
  char v2; // cl
  _D3DDDI_GAMMARAMP_TYPE v4; // [rsp+38h] [rbp+10h] BYREF

  MostCapableColorSpaceTransform = DXGMONITOR::_GetMostCapableColorSpaceTransform(this, &v4);
  v2 = 0;
  if ( MostCapableColorSpaceTransform >= 0 )
    return v4 == D3DDDI_GAMMARAMP_MATRIX_3x4;
  return v2;
}
