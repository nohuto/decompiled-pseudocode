/*
 * XREFs of sub_180008C90 @ 0x180008C90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008C90()
{
  memmove(&qword_18025CE98, "DepthOnly", 9uLL);
  byte_18025CEA1 = 0;
  return atexit(sub_18013B2F0);
}
