/*
 * XREFs of sub_180009C70 @ 0x180009C70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180009C70()
{
  memmove(&qword_18025DA30, "repository", 0xAuLL);
  byte_18025DA3A = 0;
  return atexit(sub_18013CCE0);
}
