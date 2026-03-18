/*
 * XREFs of ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18006DFA0
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18006D9E0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180023B10 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180064380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18006E200 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x18006ECA4 (-IsRectangles@CShapePtr@@QEBA_NPEAI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::CalcMode(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  const struct D2D_SIZE_F *v7; // r14
  CGeometry *v8; // rcx
  unsigned int v9; // edi
  float v10; // xmm1_4
  CTransform3D *v11; // rbx
  float *v12; // rax
  float *v13; // rax
  float v14; // xmm2_4
  float v15; // xmm1_4
  int ShapeData; // eax
  unsigned int v17; // ecx
  CTransform3D *EffectInternal; // rdi
  float *Matrix; // rax
  float *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+38h] [rbp-30h]
  unsigned int v24; // [rsp+78h] [rbp+10h] BYREF

  result = 5LL;
  if ( a2 == 5 || !CCommonRegistryData::m_fEnableCpuClipping )
    return result;
  if ( a2 == 4 )
    return 4LL;
  if ( (**(_DWORD **)(a1 + 224) & 0x200000) == 0 )
  {
LABEL_5:
    v7 = (const struct D2D_SIZE_F *)(a1 + 132);
    goto LABEL_6;
  }
  EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
  if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
          EffectInternal,
          180LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
            EffectInternal,
            53LL) )
      goto LABEL_5;
    EffectInternal = (CTransform3D *)*((_QWORD *)EffectInternal + 10);
  }
  if ( !EffectInternal )
    goto LABEL_5;
  v7 = (const struct D2D_SIZE_F *)(a1 + 132);
  Matrix = (float *)CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a1 + 132));
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(Matrix) )
    return 4LL;
  v21 = (float *)CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a1 + 132));
  if ( !CMILMatrix::IsInvertibleDeterminant((float)(v21[5] * *v21) - (float)(v21[4] * v21[1])) )
    return 4LL;
LABEL_6:
  if ( a2 != 2 )
  {
    v8 = *(CGeometry **)(a1 + 248);
    if ( !v8 )
      goto LABEL_8;
    v22 = 0LL;
    v23 = 0;
    ShapeData = CGeometry::GetShapeData(v8, v7, (struct CShapePtr *)&v22);
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ShapeData, 0x11Fu, 0LL);
    }
    else if ( CShapePtr::IsRectangles((CShapePtr *)&v22, &v24) && v24 <= 1 )
    {
      goto LABEL_29;
    }
    a3 = 1;
LABEL_29:
    CShapePtr::Release((CShapePtr *)&v22);
    goto LABEL_8;
  }
  a3 = 1;
LABEL_8:
  v9 = 3;
  if ( !*(_QWORD *)(a1 + 248) || a3 )
    v9 = 4;
  if ( a2 == 3 )
    return v9;
  v10 = *(float *)(a1 + 112);
  if ( (*(float *)(a1 + 116) != 0.0 || *(float *)(a1 + 120) != 0.0 || v10 != 0.0) && v10 != 0.0 )
    return v9;
  v11 = *(CTransform3D **)(a1 + 240);
  if ( v11 )
  {
    v12 = (float *)CTransform3D::GetMatrix(v11, v7);
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(v12) )
      return v9;
    v13 = (float *)CTransform3D::GetMatrix(v11, v7);
    v14 = (float)(v13[5] * *v13) - (float)(v13[4] * v13[1]);
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 0.0)) & _xmm);
    if ( v15 < 0.00000011920929 || !_finite((float)(1.0 / v14)) )
      return v9;
  }
  if ( a2 == 2 || a3 )
    return 2LL;
  return 1LL;
}
