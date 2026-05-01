/*
 * XREFs of pow @ 0x180087D40
 * Callers:
 *     ?_ConvertRGBValueToLinearizedValue@@YANN@Z @ 0x1804228D0 (-_ConvertRGBValueToLinearizedValue@@YANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
