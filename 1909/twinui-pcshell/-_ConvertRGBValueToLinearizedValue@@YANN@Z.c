/*
 * XREFs of ?_ConvertRGBValueToLinearizedValue@@YANN@Z @ 0x180441F60
 * Callers:
 *     ?_CalculateLuminosity@@YANK@Z @ 0x180441EE0 (-_CalculateLuminosity@@YANK@Z.c)
 * Callees:
 *     pow @ 0x18008A880 (pow.c)
 */

double __fastcall _ConvertRGBValueToLinearizedValue(double a1)
{
  double v1; // xmm2_8

  v1 = a1 / 255.0;
  if ( a1 / 255.0 > 0.03928 )
    return pow((v1 + 0.055) / 1.055, 2.4);
  else
    return v1 / 12.92;
}
