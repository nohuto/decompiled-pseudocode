/*
 * XREFs of sub_1800F3954 @ 0x1800F3954
 * Callers:
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 * Callees:
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 */

float *__fastcall sub_1800F3954(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_1800F1E34(a1, a2);
  *result = a3;
  return result;
}
