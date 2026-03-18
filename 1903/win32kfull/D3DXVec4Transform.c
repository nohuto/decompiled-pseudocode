/*
 * XREFs of D3DXVec4Transform @ 0x1C01E6350
 * Callers:
 *     BuildVertexList @ 0x1C01E6244 (BuildVertexList.c)
 *     GetInertiaRegionInVirtualizedScreen @ 0x1C02072C8 (GetInertiaRegionInVirtualizedScreen.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall D3DXVec4Transform(_OWORD *a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm6_4
  float v5; // xmm1_4
  _OWORD *result; // rax
  __int128 v7; // [rsp+0h] [rbp-38h]

  v3 = a2[1];
  v4 = a2[3];
  *(float *)&v7 = (float)((float)((float)(v3 * a3[4]) + (float)(*a2 * *a3)) + (float)(a2[2] * a3[8]))
                + (float)(v4 * a3[12]);
  v5 = a2[2];
  *((float *)&v7 + 1) = (float)((float)((float)(*a2 * a3[1]) + (float)(v3 * a3[5])) + (float)(v5 * a3[9]))
                      + (float)(v4 * a3[13]);
  *((float *)&v7 + 2) = (float)((float)((float)(*a2 * a3[2]) + (float)(v3 * a3[6])) + (float)(v5 * a3[10]))
                      + (float)(v4 * a3[14]);
  *((float *)&v7 + 3) = (float)((float)((float)(*a2 * a3[3]) + (float)(v3 * a3[7])) + (float)(v5 * a3[11]))
                      + (float)(v4 * a3[15]);
  result = a1;
  *a1 = v7;
  return result;
}
