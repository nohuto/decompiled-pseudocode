/*
 * XREFs of ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180085CF0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180085DFC (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CAccent::_GetSolidFillOpacity(CAccent *this)
{
  float result; // xmm0_4

  result = FLOAT_1_0;
  if ( (unsigned int)(*((_DWORD *)this + 70) - 2) <= 1 )
    return (float)*((unsigned __int8 *)this + 379) / 255.0;
  return result;
}
