/*
 * XREFs of sub_180009C70 @ 0x180009C70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180009C70()
{
  memmove(&qword_18025EA30, "repository", 0xAuLL);
  byte_18025EA3A = 0;
  return atexit(sub_18013CDF0);
}
