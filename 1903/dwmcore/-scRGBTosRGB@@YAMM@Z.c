/*
 * XREFs of ?scRGBTosRGB@@YAMM@Z @ 0x1802272F0
 * Callers:
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180161780 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 * Callees:
 *     powf @ 0x1800E7F78 (powf.c)
 */

float __fastcall scRGBTosRGB(float a1)
{
  float result; // xmm0_4

  if ( a1 <= 0.0 )
    return 0.0;
  if ( a1 <= 0.0031308001 )
    return a1 * 12.92;
  result = *(float *)&FLOAT_1_0;
  if ( a1 < 1.0 )
    return (float)(powf(a1, 0.41666666) * 1.0549999) - 0.055;
  return result;
}
