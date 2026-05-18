/*
 * XREFs of sub_1800077B0 @ 0x1800077B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800077B0()
{
  memmove(&qword_18025C618, "Diagnostics", 0xBuLL);
  byte_18025C623 = 0;
  return atexit(sub_1801389D0);
}
