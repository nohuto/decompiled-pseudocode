/*
 * XREFs of sub_180008DE0 @ 0x180008DE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008DE0()
{
  memmove(&qword_18025D180, "Font", 4uLL);
  BYTE4(qword_18025D180) = 0;
  return atexit(sub_18013B520);
}
