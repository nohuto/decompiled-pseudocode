/*
 * XREFs of sub_1800075D0 @ 0x1800075D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_1800075D0()
{
  memmove(&qword_18025C878, "Object/HasUV", 0xCuLL);
  byte_18025C884 = 0;
  return atexit(sub_180138760);
}
