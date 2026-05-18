/*
 * XREFs of sub_1800078D0 @ 0x1800078D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_1800078D0()
{
  memmove(&qword_18025D6B8, "VolumeOctex", 0xBuLL);
  byte_18025D6C3 = 0;
  return atexit(sub_180138D10);
}
