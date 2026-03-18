/*
 * XREFs of _fclrf @ 0x1C0079AEA
 * Callers:
 *     _clrfp @ 0x1C00799F0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
