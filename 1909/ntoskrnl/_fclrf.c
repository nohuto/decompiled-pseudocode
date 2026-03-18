/*
 * XREFs of _fclrf @ 0x1401A52CA
 * Callers:
 *     _clrfp @ 0x1401A51BC (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
