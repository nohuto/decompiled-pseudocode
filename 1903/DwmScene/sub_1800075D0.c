/*
 * XREFs of sub_1800075D0 @ 0x1800075D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800075D0()
{
  memmove(&qword_18025B878, "Object/HasUV", 0xCuLL);
  byte_18025B884 = 0;
  return atexit(sub_180138650);
}
