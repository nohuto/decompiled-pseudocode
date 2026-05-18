/*
 * XREFs of sub_180009900 @ 0x180009900
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180009900()
{
  memmove(&qword_18025E828, &unk_18020D220, 3uLL);
  BYTE3(qword_18025E828) = 0;
  return atexit(sub_18013CA50);
}
