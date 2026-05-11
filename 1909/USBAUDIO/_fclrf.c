/*
 * XREFs of _fclrf @ 0x1C001186A
 * Callers:
 *     _clrfp @ 0x1C001176C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
