/*
 * XREFs of ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1802254B4
 * Callers:
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x1802083E8 (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x1802084D0 (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 * Callees:
 *     floor @ 0x1800E8DF8 (floor.c)
 */

struct _D3DCOLORVALUE *__fastcall Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  int v4; // ecx
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // al
  float g; // xmm1_4
  int v8; // ecx
  unsigned __int8 v9; // al
  float b; // xmm1_4
  int v11; // eax
  float v12; // xmm0_4
  struct _D3DCOLORVALUE *result; // rax

  v4 = (int)floor((float)(a2->r * 255.0) + 0.5);
  v5 = -1;
  if ( v4 <= 255 )
  {
    v6 = 0;
    if ( v4 >= 0 )
      v6 = v4;
  }
  else
  {
    v6 = -1;
  }
  g = a2->g;
  retstr->r = GammaLUT_sRGB_to_scRGB[v6] / 255.0;
  v8 = (int)floor((float)(g * 255.0) + 0.5);
  if ( v8 <= 255 )
  {
    v9 = 0;
    if ( v8 >= 0 )
      v9 = v8;
  }
  else
  {
    v9 = -1;
  }
  b = a2->b;
  retstr->g = GammaLUT_sRGB_to_scRGB[v9] / 255.0;
  v11 = (int)floor((float)(b * 255.0) + 0.5);
  if ( v11 <= 255 )
  {
    v5 = 0;
    if ( v11 >= 0 )
      v5 = v11;
  }
  v12 = GammaLUT_sRGB_to_scRGB[v5];
  retstr->a = a2->a;
  result = retstr;
  retstr->b = v12 / 255.0;
  return result;
}
