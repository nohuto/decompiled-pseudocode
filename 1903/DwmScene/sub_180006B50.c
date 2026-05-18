/*
 * XREFs of sub_180006B50 @ 0x180006B50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180006B50()
{
  memmove(&qword_18025B538, "/Enabled", 8uLL);
  byte_18025B540 = 0;
  return atexit(sub_180136E40);
}
