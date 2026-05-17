/*
 * XREFs of sub_18009671A @ 0x18009671A
 * Callers:
 *     sub_1800956E0 @ 0x1800956E0 (sub_1800956E0.c)
 * Callees:
 *     <none>
 */

void sub_18009671A()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
