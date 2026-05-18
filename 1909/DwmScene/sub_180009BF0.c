/*
 * XREFs of sub_180009BF0 @ 0x180009BF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180009BF0()
{
  memmove(&qword_18025E9D0, "node", 4uLL);
  BYTE4(qword_18025E9D0) = 0;
  return atexit(sub_18013CD10);
}
