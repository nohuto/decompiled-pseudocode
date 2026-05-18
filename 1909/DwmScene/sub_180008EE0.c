/*
 * XREFs of sub_180008EE0 @ 0x180008EE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008EE0()
{
  memmove(&qword_18025E248, "Blur16", 6uLL);
  BYTE6(qword_18025E248) = 0;
  return atexit(sub_18013B7F0);
}
