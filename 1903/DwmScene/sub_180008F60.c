/*
 * XREFs of sub_180008F60 @ 0x180008F60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_180008F60()
{
  memmove(&qword_18025D228, "Blur8", 5uLL);
  BYTE5(qword_18025D228) = 0;
  return atexit(sub_18013B7C0);
}
