/*
 * XREFs of ?Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18021AE30
 * Callers:
 *     InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x1801D8700 (InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___.c)
 *     InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x1801D87E8 (InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x18007303C (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 */

struct _D3DCOLORVALUE *__fastcall Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  __m128i v4; // xmm0
  struct _D3DCOLORVALUE *result; // rax

  retstr->r = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->r) / 255.0;
  retstr->g = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->g) / 255.0;
  v4 = _mm_cvtsi32_si128(Convert_scRGB_Channel_To_sRGB_Byte(a2->b));
  retstr->a = a2->a;
  result = retstr;
  retstr->b = _mm_cvtepi32_ps(v4).m128_f32[0] / 255.0;
  return result;
}
