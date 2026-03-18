/*
 * XREFs of ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x1801CF7E0
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800BB0A0 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18006FC34 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180071D5C (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18021CF90 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x18021D028 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetScaleRotationTranslationRealization(
        CComponentTransform3D *this,
        struct CMILMatrix *a2)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  int v7; // xmm1_4
  float v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // [rsp+28h] [rbp-19h] BYREF
  int v16; // [rsp+2Ch] [rbp-15h]
  int v17; // [rsp+30h] [rbp-11h]
  int v18; // [rsp+34h] [rbp-Dh]
  _BYTE v19[64]; // [rsp+38h] [rbp-9h] BYREF
  int v20; // [rsp+78h] [rbp+37h]

  *(_OWORD *)a2 = _xmm;
  *((_WORD *)a2 + 32) = 32085;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  v4 = *((float *)this + 49);
  if ( v4 != 1.0 || *((float *)this + 50) != 1.0 || *((float *)this + 51) != 1.0 )
    CMILMatrix::Scale(a2, v4, *((float *)this + 50), *((float *)this + 51));
  v5 = *((float *)this + 56);
  if ( v5 != 0.0 )
  {
    v6 = *((float *)this + 46);
    v7 = *((_DWORD *)this + 47);
    v20 = 0;
    v15 = v6;
    v17 = *((_DWORD *)this + 48);
    v16 = v7;
    CMILMatrix::SetRotation((CMILMatrix *)v19, (const struct Windows::Foundation::Numerics::float3 *)&v15, v5);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v19);
  }
  v8 = *((float *)this + 52);
  if ( v8 != 0.0 || *((float *)this + 53) != 0.0 || *((float *)this + 54) != 0.0 || *((float *)this + 55) != 1.0 )
  {
    v9 = *((_DWORD *)this + 53);
    v20 = 0;
    v16 = v9;
    v10 = *((_DWORD *)this + 55);
    v15 = v8;
    v11 = *((_DWORD *)this + 54);
    v18 = v10;
    v17 = v11;
    CMILMatrix::SetRotation((CMILMatrix *)v19, (const struct Windows::Foundation::Numerics::quaternion *)&v15);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v19);
  }
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 43)) & _xmm);
  if ( v12 >= 0.0000011920929
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 44)) & _xmm), v13 >= 0.0000011920929)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 45)) & _xmm), v14 >= 0.0000011920929) )
  {
    CMILMatrix::Translate(a2, *((float *)this + 43), *((float *)this + 44), *((float *)this + 45));
  }
}
