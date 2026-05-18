/*
 * XREFs of sub_180002410 @ 0x180002410
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180002410()
{
  memmove(&qword_180259830, "Root", 4uLL);
  BYTE4(qword_180259830) = 0;
  return atexit(sub_1801351B0);
}
