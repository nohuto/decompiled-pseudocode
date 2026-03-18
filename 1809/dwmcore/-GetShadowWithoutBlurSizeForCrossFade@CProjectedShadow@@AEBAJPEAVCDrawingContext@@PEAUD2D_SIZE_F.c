/*
 * XREFs of ?GetShadowWithoutBlurSizeForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2D_SIZE_F@@@Z @ 0x1801CB1C4
 * Callers:
 *     ?GetScaleForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVMatrix3x2F@D2D1@@@Z @ 0x1801CAFA4 (-GetScaleForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVMatrix3x2F@D2D1@@@Z.c)
 *     ?GetScaleForSurfaceOfNineGrid@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z @ 0x1801CB058 (-GetScaleForSurfaceOfNineGrid@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C8660 (-CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 */

__int64 __fastcall CProjectedShadow::GetShadowWithoutBlurSizeForCrossFade(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  FLOAT v7; // xmm1_4
  float v9[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = CProjectedShadow::CalculateBounds(this, a2, 0.0, v9);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x792u);
  }
  else
  {
    v7 = v9[3] - v9[1];
    a3->width = v9[2] - v9[0];
    a3->height = v7;
  }
  return v6;
}
