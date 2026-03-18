/*
 * XREFs of ?TransformPoint@@YA?AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C011CAE0
 * Callers:
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C011C914 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C011C9D0 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall TransformPoint(float *a1, float *a2)
{
  __m128 v2; // xmm4
  __m128 v3; // xmm1
  float v4; // xmm0_4
  float v5; // xmm3_4

  v2 = (__m128)*(unsigned int *)a1;
  v3 = (__m128)*((unsigned int *)a1 + 1);
  v4 = v2.m128_f32[0];
  v5 = (float)((float)(*a1 * a2[3]) + (float)(a1[1] * a2[7])) + a2[15];
  v2.m128_f32[0] = (float)((float)((float)(v2.m128_f32[0] * a2[1]) + (float)(a1[1] * a2[5])) + a2[13]) / v5;
  v3.m128_f32[0] = (float)((float)((float)(v3.m128_f32[0] * a2[4]) + (float)(v4 * *a2)) + a2[12]) / v5;
  return _mm_unpacklo_ps(v3, v2).m128_u64[0];
}
