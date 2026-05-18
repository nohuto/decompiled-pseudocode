/*
 * XREFs of sub_180006B90 @ 0x180006B90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180006B90()
{
  memmove(&qword_18025CFF8, "Frame/FrameTime", 0xFuLL);
  byte_18025D007 = 0;
  return atexit(sub_180136FC0);
}
