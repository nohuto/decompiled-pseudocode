/*
 * XREFs of ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x1802197A4
 * Callers:
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1801D0EE4 (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DMatrixScaling(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  __int64 result; // rax

  v3 = *a2;
  v4 = (float)(1.0 - a2[1]) * a3[1];
  v5 = (float)(1.0 - *a2) * *a3;
  v6 = (float)(1.0 - a2[2]) * a3[2];
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(float *)a1 = v3;
  *(float *)(a1 + 20) = a2[1];
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(float *)(a1 + 40) = a2[2];
  result = a1;
  *(float *)(a1 + 48) = v5;
  *(float *)(a1 + 52) = v4;
  *(float *)(a1 + 56) = v6;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}
