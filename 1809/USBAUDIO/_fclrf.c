/*
 * XREFs of _fclrf @ 0x1C001040A
 * Callers:
 *     _clrfp @ 0x1C0010300 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
