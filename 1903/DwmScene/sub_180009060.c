/*
 * XREFs of sub_180009060 @ 0x180009060
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180009060()
{
  memmove(&qword_18025D2E8, "Diagnostics", 0xBuLL);
  byte_18025D2F3 = 0;
  return atexit(sub_18013B980);
}
