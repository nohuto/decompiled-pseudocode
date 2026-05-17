/*
 * XREFs of _fclrf @ 0x180096DBA
 * Callers:
 *     _clrfp @ 0x180095D80 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
