/*
 * XREFs of ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x18021B1A0
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017C3E4 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022FAAC (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180028EDC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4A8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

void __fastcall CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
        CMILMatrix *this,
        struct CMILMatrix *a2,
        struct CMILMatrix *a3,
        bool *a4)
{
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  bool v12; // al
  CMILMatrix *v13; // rcx
  float v14; // [rsp+48h] [rbp+10h] BYREF
  float v15; // [rsp+50h] [rbp+18h] BYREF

  CMILMatrix::Get2DScaleDimensions(this, &v15, &v14);
  *(_OWORD *)a2 = _xmm;
  *((_WORD *)a2 + 32) = 32085;
  *((_OWORD *)a2 + 1) = _xmm;
  v8 = v15;
  *((_OWORD *)a2 + 2) = _xmm;
  v9 = v14;
  *((_OWORD *)a2 + 3) = _xmm;
  CMILMatrix::Scale(a2, v8, v9, 1.0);
  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 16);
  v12 = CMILMatrix::Invert(a3, v10, v11);
  *a4 = v12;
  if ( v12 )
    CMILMatrix::Multiply(v13, this);
}
