/*
 * XREFs of ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x180219368
 * Callers:
 *     ?Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z @ 0x1801D0908 (-Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     cosf_0 @ 0x1800F0003 (cosf_0.c)
 *     sinf_0 @ 0x1800F003F (sinf_0.c)
 */

__int64 __fastcall D2DMatrixRotationX(__int64 a1, float a2, __int64 a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  __int64 result; // rax

  v5 = sinf_0(a2);
  v6 = cosf_0(a2);
  v7 = *(float *)(a3 + 4);
  v8 = *(float *)(a3 + 8);
  *(float *)(a1 + 20) = v6;
  *(float *)(a1 + 40) = v6;
  *(_DWORD *)(a1 + 36) = LODWORD(v5) ^ _xmm;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  result = a1;
  *(float *)(a1 + 24) = v5;
  *(_QWORD *)a1 = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 52) = (float)((float)(1.0 - v6) * v7) + (float)(v8 * v5);
  *(float *)(a1 + 56) = (float)((float)(1.0 - v6) * v8) - (float)(v7 * v5);
  return result;
}
