/*
 * XREFs of ?_CalculateLuminosity@@YANK@Z @ 0x1803BFF38
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1803A94B0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?_ConvertRGBValueToLinearizedValue@@YANN@Z @ 0x1803BFFB8 (-_ConvertRGBValueToLinearizedValue@@YANN@Z.c)
 */

double __fastcall _CalculateLuminosity(int a1)
{
  double v2; // xmm6_8
  double v3; // xmm6_8

  v2 = _ConvertRGBValueToLinearizedValue((double)BYTE1(a1)) * 0.7151999999999999;
  v3 = v2 + _ConvertRGBValueToLinearizedValue((double)(unsigned __int8)a1) * 0.2126;
  return v3 + _ConvertRGBValueToLinearizedValue((double)BYTE2(a1)) * 0.0722;
}
