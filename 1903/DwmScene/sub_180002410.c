/*
 * XREFs of sub_180002410 @ 0x180002410
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180002410()
{
  memmove(&qword_180258830, "Root", 4uLL);
  BYTE4(qword_180258830) = 0;
  return atexit(sub_1801350A0);
}
