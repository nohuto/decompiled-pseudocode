/*
 * XREFs of ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x1800114EC
 * Callers:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000E170 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180010630 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Insets::IsEmpty(const struct Insets *a1)
{
  float v1; // xmm1_4
  bool result; // al
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a1) & _xmm);
  result = 0;
  if ( v1 < 0.0000011920929 )
  {
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 1)) & _xmm);
    if ( v3 < 0.0000011920929 )
    {
      v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 2)) & _xmm);
      if ( v4 < 0.0000011920929 )
      {
        v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 3)) & _xmm);
        if ( v5 < 0.0000011920929 )
          return 1;
      }
    }
  }
  return result;
}
