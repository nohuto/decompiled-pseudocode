/*
 * XREFs of sub_1800F5D40 @ 0x1800F5D40
 * Callers:
 *     sub_1800F5D0C @ 0x1800F5D0C (sub_1800F5D0C.c)
 * Callees:
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 */

float *__fastcall sub_1800F5D40(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_1800F597C(a1, a2, 2);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
