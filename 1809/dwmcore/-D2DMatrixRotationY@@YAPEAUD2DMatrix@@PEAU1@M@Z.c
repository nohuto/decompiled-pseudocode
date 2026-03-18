/*
 * XREFs of ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180219434
 * Callers:
 *     ?Matrix4x4FromRotationY@CExpressionValueStack@@QEAAJI@Z @ 0x1801D0AFC (-Matrix4x4FromRotationY@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     cosf_0 @ 0x1800F0003 (cosf_0.c)
 *     sinf_0 @ 0x1800F003F (sinf_0.c)
 */

struct D2DMatrix *__fastcall D2DMatrixRotationY(struct D2DMatrix *a1, float a2)
{
  float v3; // xmm7_4
  float v4; // xmm0_4
  struct D2DMatrix *result; // rax

  v3 = sinf_0(a2);
  v4 = cosf_0(a2);
  *((float *)a1 + 8) = v3;
  *(_QWORD *)((char *)a1 + 20) = 1065353216LL;
  *((_DWORD *)a1 + 15) = 1065353216;
  result = a1;
  *((_DWORD *)a1 + 2) = LODWORD(v3) ^ _xmm;
  *(float *)a1 = v4;
  *((float *)a1 + 10) = v4;
  *((_DWORD *)a1 + 1) = 0;
  *(_QWORD *)((char *)a1 + 12) = 0LL;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 9) = 0;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  return result;
}
