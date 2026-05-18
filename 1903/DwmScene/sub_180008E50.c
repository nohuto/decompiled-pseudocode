/*
 * XREFs of sub_180008E50 @ 0x180008E50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008E50()
{
  memmove(&qword_18025D1C0, "Font/Texture", 0xCuLL);
  byte_18025D1CC = 0;
  return atexit(sub_18013B600);
}
