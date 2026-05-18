/*
 * XREFs of sub_180008D50 @ 0x180008D50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008D50()
{
  memmove(&qword_18025DE78, "Vignette", 8uLL);
  byte_18025DE80 = 0;
  return atexit(sub_18013B550);
}
