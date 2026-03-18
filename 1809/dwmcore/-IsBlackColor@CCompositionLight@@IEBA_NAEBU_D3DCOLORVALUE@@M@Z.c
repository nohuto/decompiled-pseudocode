/*
 * XREFs of ?IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x180038070
 * Callers:
 *     ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x180015D60 (-IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x180036C80 (-IsBlackLight@CCompositionSpotLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionDistantLight@@UEBA_NXZ @ 0x18006D270 (-IsBlackLight@CCompositionDistantLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionPointLight@@UEBA_NXZ @ 0x180190250 (-IsBlackLight@CCompositionPointLight@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionLight::IsBlackColor(CCompositionLight *this, const struct _D3DCOLORVALUE *a2, float a3)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  bool result; // al

  result = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 * a2->r)) & _xmm) < 0.0000011920929 )
  {
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 * a2->g)) & _xmm);
    if ( v4 < 0.0000011920929 )
    {
      v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 * a2->b)) & _xmm);
      if ( v5 < 0.0000011920929 )
        return 1;
    }
  }
  return result;
}
