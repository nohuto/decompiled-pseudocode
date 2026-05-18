/*
 * XREFs of sub_180102A40 @ 0x180102A40
 * Callers:
 *     sub_180102AC0 @ 0x180102AC0 (sub_180102AC0.c)
 * Callees:
 *     cosf @ 0x1801272F0 (cosf.c)
 *     sinf @ 0x1801272FC (sinf.c)
 */

__int64 __fastcall sub_180102A40(__int64 a1, __int64 a2, float a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 result; // rax

  v5 = cosf(a3);
  v6 = sinf(a3);
  v7 = *(float *)a2;
  v8 = *(float *)(a2 + 8);
  v9 = *(float *)a2 * v5;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  result = a1;
  *(float *)a1 = v9 - (float)(v8 * v6);
  *(float *)(a1 + 8) = (float)(v8 * v5) + (float)(v7 * v6);
  return result;
}
