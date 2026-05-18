/*
 * XREFs of sub_1800077B0 @ 0x1800077B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_1800077B0()
{
  memmove(&qword_18025D618, "Diagnostics", 0xBuLL);
  byte_18025D623 = 0;
  return atexit(sub_180138AE0);
}
