/*
 * XREFs of sub_180008EE0 @ 0x180008EE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008EE0()
{
  memmove(&qword_18025D248, "Blur16", 6uLL);
  BYTE6(qword_18025D248) = 0;
  return atexit(sub_18013B6E0);
}
