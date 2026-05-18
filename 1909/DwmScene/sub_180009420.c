/*
 * XREFs of sub_180009420 @ 0x180009420
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180009420()
{
  memmove(&qword_18025E368, "Texture", 7uLL);
  HIBYTE(qword_18025E368) = 0;
  return atexit(sub_18013C270);
}
