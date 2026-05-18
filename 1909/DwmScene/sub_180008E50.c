/*
 * XREFs of sub_180008E50 @ 0x180008E50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008E50()
{
  memmove(&qword_18025E1C0, "Font/Texture", 0xCuLL);
  byte_18025E1CC = 0;
  return atexit(sub_18013B710);
}
