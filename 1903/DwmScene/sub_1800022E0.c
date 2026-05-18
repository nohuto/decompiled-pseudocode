/*
 * XREFs of sub_1800022E0 @ 0x1800022E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800022E0()
{
  memmove(&qword_180258700, "Unknown", 7uLL);
  HIBYTE(qword_180258700) = 0;
  return atexit(sub_180134F50);
}
