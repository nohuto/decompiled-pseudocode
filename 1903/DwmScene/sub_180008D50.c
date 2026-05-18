/*
 * XREFs of sub_180008D50 @ 0x180008D50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008D50()
{
  memmove(&qword_18025CE78, "Vignette", 8uLL);
  byte_18025CE80 = 0;
  return atexit(sub_18013B440);
}
