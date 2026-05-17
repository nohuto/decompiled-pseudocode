/*
 * XREFs of _fclrf @ 0x180099E6A
 * Callers:
 *     _clrfp @ 0x180098E3C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
