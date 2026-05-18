/*
 * XREFs of sub_1800069C0 @ 0x1800069C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_1800069C0()
{
  memmove(&qword_18025CE58, "Debug/ShowGrid", 0xEuLL);
  byte_18025CE66 = 0;
  return atexit(sub_180136BD0);
}
