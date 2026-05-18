/*
 * XREFs of sub_180008F60 @ 0x180008F60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008F60()
{
  memmove(&qword_18025E228, "Blur8", 5uLL);
  BYTE5(qword_18025E228) = 0;
  return atexit(sub_18013B8D0);
}
