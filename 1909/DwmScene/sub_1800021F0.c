/*
 * XREFs of sub_1800021F0 @ 0x1800021F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_1800021F0()
{
  memmove(&qword_180259688, "GpuStats_", 9uLL);
  byte_180259691 = 0;
  return atexit(sub_180134FF0);
}
