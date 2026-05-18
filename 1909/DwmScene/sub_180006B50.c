/*
 * XREFs of sub_180006B50 @ 0x180006B50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180006B50()
{
  memmove(&qword_18025C538, "/Enabled", 8uLL);
  byte_18025C540 = 0;
  return atexit(sub_180136F50);
}
