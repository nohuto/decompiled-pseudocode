/*
 * XREFs of ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x1800BA620
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x1800BA6DC (-IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z.c)
 */

char __fastcall CCompositionSpotLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  float g; // xmm3_4
  char v2; // r8
  float v4; // xmm2_4
  float v5; // xmm1_4
  char IsBlackColor; // al

  g = this[24].g;
  v2 = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(g * this[19].r)) & _xmm) < 0.0000011920929 )
  {
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(g * this[19].g)) & _xmm);
    if ( v4 < 0.0000011920929 )
    {
      v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(g * this[19].b)) & _xmm);
      if ( v5 < 0.0000011920929 )
      {
        IsBlackColor = CCompositionLight::IsBlackColor((CCompositionLight *)this, this + 20, this[24].b);
        if ( IsBlackColor != v2 )
          return 1;
      }
    }
  }
  return v2;
}
