/*
 * XREFs of sub_1800099C0 @ 0x1800099C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800099C0()
{
  memmove(&qword_18025D848, "cube", 4uLL);
  BYTE4(qword_18025D848) = 0;
  return atexit(sub_18013CA90);
}
