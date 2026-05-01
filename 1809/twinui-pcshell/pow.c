/*
 * XREFs of pow @ 0x1800850B4
 * Callers:
 *     ?_ConvertRGBValueToLinearizedValue@@YANN@Z @ 0x1803BFFB8 (-_ConvertRGBValueToLinearizedValue@@YANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
