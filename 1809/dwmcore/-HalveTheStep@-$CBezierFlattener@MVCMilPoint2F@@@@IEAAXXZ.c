/*
 * XREFs of ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x18021E1D8
 * Callers:
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18021E040 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18021E28C (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBezierFlattener<float,CMilPoint2F>::HalveTheStep(__int64 a1)
{
  float v1; // xmm3_4
  float v2; // xmm3_4
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  double v8; // xmm0_8
  __int64 result; // rax

  v1 = *(float *)(a1 + 72) + *(float *)(a1 + 64);
  *(float *)(a1 + 64) = v1;
  v2 = v1 * 0.125;
  v3 = (float)(*(float *)(a1 + 76) + *(float *)(a1 + 68)) * 0.125;
  *(float *)(a1 + 64) = v2;
  *(float *)(a1 + 68) = v3;
  v4 = *(float *)(a1 + 60);
  v5 = *(float *)(a1 + 56) - v2;
  *(float *)(a1 + 56) = v5;
  v6 = (float)(v4 - *(float *)(a1 + 68)) * 0.5;
  *(float *)(a1 + 56) = v5 * 0.5;
  *(float *)(a1 + 60) = v6;
  v7 = *(float *)(a1 + 72) * 0.25;
  *(float *)(a1 + 76) = *(float *)(a1 + 76) * 0.25;
  *(float *)(a1 + 72) = v7;
  v8 = *(float *)(a1 + 88);
  result = (unsigned int)(2 * *(_DWORD *)(a1 + 80));
  *(_DWORD *)(a1 + 80) = result;
  *(float *)(a1 + 88) = v8 * 0.5;
  return result;
}
