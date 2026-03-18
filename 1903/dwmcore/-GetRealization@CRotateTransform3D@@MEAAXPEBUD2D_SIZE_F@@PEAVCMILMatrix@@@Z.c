/*
 * XREFs of ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180219F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180071D5C (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x18021CAA4 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18021CF90 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 */

void __fastcall CRotateTransform3D::GetRealization(
        CRotateTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v4; // xmm1_4
  float v6; // xmm2_4
  int v7; // xmm0_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  CMILMatrix *v11; // rcx
  _DWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *((_DWORD *)this + 40);
  v6 = *((float *)this + 38) * 0.017453292;
  v12[0] = *((_DWORD *)this + 39);
  v7 = *((_DWORD *)this + 41);
  v12[1] = v4;
  v12[2] = v7;
  CMILMatrix::SetRotation(a3, (const struct Windows::Foundation::Numerics::float3 *)v12, v6);
  v8 = *((float *)this + 42);
  v9 = *((float *)this + 43);
  v10 = *((float *)this + 44);
  if ( v8 != 0.0 || v9 != 0.0 || v10 != 0.0 )
  {
    CMILMatrix::PrependTranslate(
      a3,
      COERCE_FLOAT(LODWORD(v8) ^ _xmm),
      COERCE_FLOAT(LODWORD(v9) ^ _xmm),
      COERCE_FLOAT(LODWORD(v10) ^ _xmm));
    CMILMatrix::Translate(v11, v8, v9, v10);
  }
}
