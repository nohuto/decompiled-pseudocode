/*
 * XREFs of sub_180008C90 @ 0x180008C90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008C90()
{
  memmove(&qword_18025DE98, "DepthOnly", 9uLL);
  byte_18025DEA1 = 0;
  return atexit(sub_18013B400);
}
