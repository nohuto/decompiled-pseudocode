/*
 * XREFs of sub_180008C50 @ 0x180008C50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008C50()
{
  memmove(&qword_18025CE38, "ContrastCurve", 0xDuLL);
  byte_18025CE45 = 0;
  return atexit(sub_18013B280);
}
