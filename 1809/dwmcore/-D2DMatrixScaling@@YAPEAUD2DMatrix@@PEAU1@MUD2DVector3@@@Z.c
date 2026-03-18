/*
 * XREFs of ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18021973C
 * Callers:
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1801D0EE4 (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DMatrixScaling(__int64 a1, float a2, float *a3)
{
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  __int64 result; // rax

  v3 = (float)(1.0 - a2) * *a3;
  v4 = (float)(1.0 - a2) * a3[1];
  v5 = (float)(1.0 - a2) * a3[2];
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  *(float *)(a1 + 48) = v3;
  *(float *)(a1 + 52) = v4;
  *(float *)a1 = a2;
  *(float *)(a1 + 20) = a2;
  *(float *)(a1 + 40) = a2;
  *(float *)(a1 + 56) = v5;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}
