/*
 * XREFs of sub_180008C50 @ 0x180008C50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008C50()
{
  memmove(&qword_18025DE38, "ContrastCurve", 0xDuLL);
  byte_18025DE45 = 0;
  return atexit(sub_18013B390);
}
