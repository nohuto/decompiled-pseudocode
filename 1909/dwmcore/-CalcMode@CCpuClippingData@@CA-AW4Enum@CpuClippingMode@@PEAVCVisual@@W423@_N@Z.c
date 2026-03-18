/*
 * XREFs of ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x180061AC0
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180060C00 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180006C7C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180061D20 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007FADC (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18008C050 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x1800CCEA8 (-IsRectangles@CShapePtr@@QEBA_NPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::CalcMode(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  const struct D2D_SIZE_F *v7; // r14
  CGeometry *v8; // rcx
  unsigned int v9; // edi
  float v10; // xmm1_4
  CTransform3D *v11; // rbx
  const struct CMILMatrix *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  float *v16; // rax
  float v17; // xmm2_4
  float v18; // xmm1_4
  int ShapeData; // eax
  unsigned int v20; // ecx
  CTransform3D *EffectInternal; // rdi
  const struct CMILMatrix *Matrix; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  float *v27; // rax
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  char v29; // [rsp+38h] [rbp-30h]
  unsigned int v30; // [rsp+78h] [rbp+10h] BYREF

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
  Matrix = CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a1 + 132));
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(Matrix, v23, v24, v25) )
    return 4LL;
  v27 = (float *)CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a1 + 132));
  if ( !CMILMatrix::IsInvertibleDeterminant((float)(v27[5] * *v27) - (float)(v27[4] * v27[1])) )
    return 4LL;
LABEL_6:
  if ( a2 != 2 )
  {
    v8 = *(CGeometry **)(a1 + 248);
    if ( !v8 )
      goto LABEL_8;
    v28 = 0LL;
    v29 = 0;
    ShapeData = CGeometry::GetShapeData(v8, v7, (struct CShapePtr *)&v28);
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, ShapeData, 0x11Fu, 0LL);
    }
    else if ( CShapePtr::IsRectangles((CShapePtr *)&v28, &v30) && v30 <= 1 )
    {
      goto LABEL_29;
    }
    a3 = 1;
LABEL_29:
    CShapePtr::Release((CShapePtr *)&v28);
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
    v12 = CTransform3D::GetMatrix(v11, v7);
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(v12, v13, v14, v15) )
      return v9;
    v16 = (float *)CTransform3D::GetMatrix(v11, v7);
    v17 = (float)(v16[5] * *v16) - (float)(v16[4] * v16[1]);
    v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - 0.0)) & _xmm);
    if ( v18 < 0.00000011920929 || !_finite((float)(1.0 / v17)) )
      return v9;
  }
  if ( a2 == 2 || a3 )
    return 2LL;
  return 1LL;
}
