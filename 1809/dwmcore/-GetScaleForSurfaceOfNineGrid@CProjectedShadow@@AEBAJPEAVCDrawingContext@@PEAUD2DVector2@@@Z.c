/*
 * XREFs of ?GetScaleForSurfaceOfNineGrid@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z @ 0x1801CB058
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801C8358 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCNineGridBrush@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShadowWithoutBlurSizeForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2D_SIZE_F@@@Z @ 0x1801CB1C4 (-GetShadowWithoutBlurSizeForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2D_SIZE_F.c)
 */

__int64 __fastcall CProjectedShadow::GetScaleForSurfaceOfNineGrid(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct D2DVector2 *a3)
{
  int ShadowWithoutBlurSizeForCrossFade; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  float v7; // xmm3_4
  float v8; // xmm4_4
  struct D2D_SIZE_F v10; // [rsp+58h] [rbp+20h] BYREF

  ShadowWithoutBlurSizeForCrossFade = CProjectedShadow::GetShadowWithoutBlurSizeForCrossFade(this, a2, &v10);
  v6 = ShadowWithoutBlurSizeForCrossFade;
  if ( ShadowWithoutBlurSizeForCrossFade < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ShadowWithoutBlurSizeForCrossFade, 0x7BAu);
  }
  else
  {
    v7 = fminf(v10.width, v10.height) / 33.0;
    v8 = (float)((float)((float)(v10.height / v7) - 33.0) + 161.0) / 161.0;
    *(float *)a3 = (float)((float)((float)(v10.width / v7) - 33.0) + 161.0) / 161.0;
    *((float *)a3 + 1) = v8;
  }
  return v6;
}
