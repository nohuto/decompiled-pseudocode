/*
 * XREFs of _fclrf @ 0x14019A33A
 * Callers:
 *     _clrfp @ 0x14019A230 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
