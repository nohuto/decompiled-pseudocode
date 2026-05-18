/*
 * XREFs of sub_180009CB0 @ 0x180009CB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180009CB0()
{
  memmove(&qword_18025E9F0, "scene", 5uLL);
  BYTE5(qword_18025E9F0) = 0;
  return atexit(sub_18013CE60);
}
