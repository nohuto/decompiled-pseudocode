/*
 * XREFs of ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x18022A8D0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
        const struct CDrawListBitmap *a1,
        const struct D2D_MATRIX_3X2_F *a2,
        struct Matrix3x3 *a3)
{
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm3_4
  int v8; // xmm4_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+24h] [rbp-3Ch]
  _DWORD v13[6]; // [rsp+28h] [rbp-38h] BYREF
  float v14[6]; // [rsp+40h] [rbp-20h] BYREF

  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)a1 + 1) + 40LL))(*((_QWORD *)a1 + 1), &v11);
  v14[1] = 0.0;
  v14[2] = 0.0;
  v14[0] = (float)v11;
  v14[3] = (float)v12;
  v14[4] = 0.0 - (float)((float)v11 * 0.0);
  v14[5] = 0.0 - (float)((float)v12 * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v13,
    (const struct D2D1::Matrix3x2F *)a2,
    (const struct D2D1::Matrix3x2F *)v14);
  v5 = v13[2];
  v6 = v13[3];
  v7 = v13[0];
  v8 = v13[1];
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 3) = v5;
  v9 = v13[4];
  *((_DWORD *)a3 + 4) = v6;
  v10 = v13[5];
  *((_DWORD *)a3 + 6) = v9;
  *((_DWORD *)a3 + 7) = v10;
  *(_DWORD *)a3 = v7;
  *((_DWORD *)a3 + 1) = v8;
  *((_DWORD *)a3 + 8) = 1065353216;
}
