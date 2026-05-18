/*
 * XREFs of sub_180008D10 @ 0x180008D10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008D10()
{
  memmove(&qword_18025CE58, "ToneMapping", 0xBuLL);
  byte_18025CE63 = 0;
  return atexit(sub_18013B3D0);
}
