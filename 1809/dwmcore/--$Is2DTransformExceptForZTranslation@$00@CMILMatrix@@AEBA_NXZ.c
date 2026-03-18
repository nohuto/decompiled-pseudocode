/*
 * XREFs of ??$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ @ 0x1801E21E8
 * Callers:
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180162D30 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180162EF0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Is2DTransformExceptForZTranslation<1>(float *a1)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm2_4

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[2] - 0.0)) & _xmm);
  if ( v1 >= 0.000081380211 )
    return 0;
  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[3] - 0.0)) & _xmm);
  if ( v2 >= 0.000081380211 )
    return 0;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[6] - 0.0)) & _xmm);
  if ( v3 >= 0.000081380211 )
    return 0;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[7] - 0.0)) & _xmm);
  if ( v4 >= 0.000081380211 )
    return 0;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[8] - 0.0)) & _xmm);
  if ( v5 >= 0.000081380211 )
    return 0;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[9] - 0.0)) & _xmm);
  if ( v6 >= 0.000081380211 )
    return 0;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[10] - 0.0)) & _xmm);
  if ( v7 >= 0.000081380211 )
  {
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[10] - 1.0)) & _xmm);
    if ( v8 >= 0.000081380211 )
      return 0;
  }
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[11] - 0.0)) & _xmm);
  if ( v9 >= 0.000081380211 )
    return 0;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[15] - 1.0)) & _xmm);
  return v10 < 0.000081380211;
}
