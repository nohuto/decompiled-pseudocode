/*
 * XREFs of sub_180008FE0 @ 0x180008FE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008FE0()
{
  memmove(&qword_18025E2A8, "ColorGrading", 0xCuLL);
  byte_18025E2B4 = 0;
  return atexit(sub_18013B9B0);
}
