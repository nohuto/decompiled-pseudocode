/*
 * XREFs of sub_180008D90 @ 0x180008D90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008D90()
{
  memmove(&qword_18025DDF8, "BackgroundUnlit", 0xFuLL);
  byte_18025DE07 = 0;
  return atexit(sub_18013B5C0);
}
