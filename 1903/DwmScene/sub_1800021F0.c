/*
 * XREFs of sub_1800021F0 @ 0x1800021F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800021F0()
{
  memmove(&qword_180258688, "GpuStats_", 9uLL);
  byte_180258691 = 0;
  return atexit(sub_180134EE0);
}
