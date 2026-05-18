/*
 * XREFs of sub_1800069C0 @ 0x1800069C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800069C0()
{
  memmove(&qword_18025BE58, "Debug/ShowGrid", 0xEuLL);
  byte_18025BE66 = 0;
  return atexit(sub_180136AC0);
}
