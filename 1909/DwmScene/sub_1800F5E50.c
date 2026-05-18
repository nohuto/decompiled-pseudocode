/*
 * XREFs of sub_1800F5E50 @ 0x1800F5E50
 * Callers:
 *     sub_1800F5E1C @ 0x1800F5E1C (sub_1800F5E1C.c)
 * Callees:
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 */

float *__fastcall sub_1800F5E50(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_1800F5A8C(a1, a2, 2);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
