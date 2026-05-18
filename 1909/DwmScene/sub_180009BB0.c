/*
 * XREFs of sub_180009BB0 @ 0x180009BB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180009BB0()
{
  memmove(&qword_18025EA10, "asset", 5uLL);
  BYTE5(qword_18025EA10) = 0;
  return atexit(sub_18013CCA0);
}
