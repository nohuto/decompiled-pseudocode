/*
 * XREFs of ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1801EEBE0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

bool __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(struct D2D_RECT_F *a1, float a2, float a3)
{
  FLOAT v3; // xmm3_4
  FLOAT v4; // xmm0_4
  FLOAT v5; // xmm1_4
  bool result; // al
  _QWORD *v7; // rcx

  v3 = a3 + a1->top;
  a1->left = a2 + a1->left;
  v4 = a1->right - a2;
  a1->top = v3;
  v5 = a1->bottom - a3;
  a1->right = v4;
  a1->bottom = v5;
  result = IsEmpty(a1);
  if ( result )
  {
    v7[1] = 0LL;
    *v7 = 0LL;
  }
  return result;
}
