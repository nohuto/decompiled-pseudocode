/*
 * XREFs of sqrt @ 0x180090E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800946BC @ 0x1800946BC (sub_1800946BC.c)
 */

double __cdecl sqrt(double X)
{
  int v1; // edx
  double result; // xmm0_8

  v1 = LODWORD(X);
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
  {
LABEL_7:
    if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 || X >= 0.0 )
      return sqrt(X);
LABEL_6:
    result = 0.0;
    sub_1800946BC((unsigned int)"sqrt", 5, 0, 1, 8, 33, *(__int64 *)&X, 0LL, 1);
    return result;
  }
  if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) == 0 )
  {
    if ( X < 0.0 )
      goto LABEL_6;
    goto LABEL_7;
  }
  result = 0.0;
  sub_1800946BC((unsigned int)"sqrt", 5, v1, 1, 0, 33, *(__int64 *)&X, 0LL, 1);
  return result;
}
