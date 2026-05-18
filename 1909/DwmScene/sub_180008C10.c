/*
 * XREFs of sub_180008C10 @ 0x180008C10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008C10()
{
  memmove(&qword_18025DE18, "ColorGrading", 0xCuLL);
  byte_18025DE24 = 0;
  return atexit(sub_18013B320);
}
