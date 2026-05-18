/*
 * XREFs of sub_1800022E0 @ 0x1800022E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_1800022E0()
{
  memmove(&qword_180259700, "Unknown", 7uLL);
  HIBYTE(qword_180259700) = 0;
  return atexit(sub_180135060);
}
