/*
 * XREFs of sub_180009A00 @ 0x180009A00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180009A00()
{
  memmove(&qword_18025E868, "look", 4uLL);
  BYTE4(qword_18025E868) = 0;
  return atexit(sub_18013CC10);
}
