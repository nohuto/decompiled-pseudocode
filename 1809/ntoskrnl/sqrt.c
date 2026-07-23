/*
 * XREFs of sqrt @ 0x140196CA0
 * Callers:
 *     <none>
 * Callees:
 *     _handle_error @ 0x140199B38 (_handle_error.c)
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
    handle_error((unsigned int)"sqrt", 5, 0, 1, 8, 33, *(__int64 *)&X, 0LL, 1);
    return result;
  }
  if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) == 0 )
  {
    if ( X < 0.0 )
      goto LABEL_6;
    goto LABEL_7;
  }
  result = 0.0;
  handle_error((unsigned int)"sqrt", 5, v1, 1, 0, 33, *(__int64 *)&X, 0LL, 1);
  return result;
}
