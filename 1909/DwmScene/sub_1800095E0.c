/*
 * XREFs of sub_1800095E0 @ 0x1800095E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_1800095E0()
{
  memmove(&qword_18025E618, "UnlitShader", 0xBuLL);
  byte_18025E623 = 0;
  return atexit(sub_18013C5F0);
}
