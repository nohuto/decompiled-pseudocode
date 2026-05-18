/*
 * XREFs of sub_180009C30 @ 0x180009C30
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180009C30()
{
  memmove(&qword_18025D9B0, "parents", 7uLL);
  HIBYTE(qword_18025D9B0) = 0;
  return atexit(sub_18013CC70);
}
