/*
 * XREFs of ApplyInverseTransformToPoint_0 @ 0x1800FE730
 * Callers:
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FF1F4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplyInverseTransformToPoint_0(float *a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  float v5; // xmm7_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm3_4

  v5 = (float)(a1[3] * (float)a2) - *a1;
  v6 = (float)(a1[3] * (float)a3) - a1[1];
  v7 = (float)((float)a2 * a1[7]) - a1[4];
  v8 = (float)(a1[7] * (float)a3) - a1[5];
  if ( (float)(v5 * v8) == (float)(v6 * v7) )
    return 2147549183LL;
  v10 = (float)(v5 * v8) - (float)(v6 * v7);
  v11 = a1[15];
  v12 = (float)(v11 * (float)a3) - a1[13];
  v13 = (float)(v11 * (float)a2) - a1[12];
  *a4 = (int)(float)((float)((float)(v12 * v7) - (float)(v13 * v8)) / v10);
  *a5 = (int)(float)((float)((float)(v13 * v6) - (float)(v12 * v5)) / v10);
  return 0LL;
}
