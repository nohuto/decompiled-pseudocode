/*
 * XREFs of sub_180008F20 @ 0x180008F20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008F20()
{
  memmove(&qword_18025E268, "Blur32", 6uLL);
  BYTE6(qword_18025E268) = 0;
  return atexit(sub_18013B860);
}
