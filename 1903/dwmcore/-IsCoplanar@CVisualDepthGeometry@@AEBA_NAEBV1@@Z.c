/*
 * XREFs of ?IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x18020D92C
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008ADC (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisualDepthGeometry::IsCoplanar(CVisualDepthGeometry *this, const struct CVisualDepthGeometry *a2)
{
  float v2; // xmm2_4
  float v3; // xmm2_4
  float v4; // xmm2_4
  bool result; // al

  result = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 40) - *((float *)a2 + 40))) & _xmm) <= 0.000039999999 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 41) - *((float *)a2 + 41))) & _xmm);
    if ( v2 <= 0.000039999999 )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 42) - *((float *)a2 + 42))) & _xmm);
      if ( v3 <= 0.000039999999 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 43) - *((float *)a2 + 43))) & _xmm);
        if ( v4 <= 0.000039999999 )
          return 1;
      }
    }
  }
  return result;
}
