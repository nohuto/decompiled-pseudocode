/*
 * XREFs of sub_1800F3844 @ 0x1800F3844
 * Callers:
 *     sub_180093EDC @ 0x180093EDC (sub_180093EDC.c)
 * Callees:
 *     sub_1800F1D24 @ 0x1800F1D24 (sub_1800F1D24.c)
 */

float *__fastcall sub_1800F3844(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_1800F1D24(a1, a2);
  *result = a3;
  return result;
}
