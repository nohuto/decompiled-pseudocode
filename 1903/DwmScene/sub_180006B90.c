/*
 * XREFs of sub_180006B90 @ 0x180006B90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180006B90()
{
  memmove(&qword_18025BFF8, "Frame/FrameTime", 0xFuLL);
  byte_18025C007 = 0;
  return atexit(sub_180136EB0);
}
