/*
 * XREFs of sub_1800096A0 @ 0x1800096A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800096A0()
{
  memmove(&qword_18025D660, "Symbol", 6uLL);
  BYTE6(qword_18025D660) = 0;
  return atexit(sub_18013C630);
}
