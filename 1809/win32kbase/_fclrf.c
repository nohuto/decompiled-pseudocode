/*
 * XREFs of _fclrf @ 0x1C00AF6CA
 * Callers:
 *     _clrfp @ 0x1C00AF5D0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
