/*
 * XREFs of _sptype @ 0x180095D04
 * Callers:
 *     fabs @ 0x1800904D0 (fabs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sptype(double a1)
{
  if ( HIDWORD(a1) == 2146435072 && !LODWORD(a1) )
    return 1LL;
  if ( HIDWORD(a1) == -1048576 && !LODWORD(a1) )
    return 2LL;
  if ( (HIWORD(a1) & 0x7FF8) == 0x7FF8 )
    return 3LL;
  if ( (HIWORD(a1) & 0x7FF8) == 0x7FF0 && ((HIDWORD(a1) & 0x7FFFF) != 0 || LODWORD(a1)) )
    return 4LL;
  return 0LL;
}
