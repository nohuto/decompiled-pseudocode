/*
 * XREFs of sub_180008D10 @ 0x180008D10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008D10()
{
  memmove(&qword_18025DE58, "ToneMapping", 0xBuLL);
  byte_18025DE63 = 0;
  return atexit(sub_18013B4E0);
}
