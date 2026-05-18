/*
 * XREFs of sub_180008CD0 @ 0x180008CD0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008CD0()
{
  memmove(&qword_18025CEB8, "GroundPlane", 0xBuLL);
  byte_18025CEC3 = 0;
  return atexit(sub_18013B360);
}
