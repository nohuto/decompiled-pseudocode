/*
 * XREFs of pow @ 0x18008A880
 * Callers:
 *     ?_ConvertRGBValueToLinearizedValue@@YANN@Z @ 0x180441F60 (-_ConvertRGBValueToLinearizedValue@@YANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
