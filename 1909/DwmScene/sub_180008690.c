/*
 * XREFs of sub_180008690 @ 0x180008690
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008690()
{
  memmove(&Buf2, "Post", 4uLL);
  BYTE4(Buf2) = 0;
  return atexit(sub_18013A830);
}
