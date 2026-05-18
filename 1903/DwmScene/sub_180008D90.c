/*
 * XREFs of sub_180008D90 @ 0x180008D90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008D90()
{
  memmove(&qword_18025CDF8, "BackgroundUnlit", 0xFuLL);
  byte_18025CE07 = 0;
  return atexit(sub_18013B4B0);
}
