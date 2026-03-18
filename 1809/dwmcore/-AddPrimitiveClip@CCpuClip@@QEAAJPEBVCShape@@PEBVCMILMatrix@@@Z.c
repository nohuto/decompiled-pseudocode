/*
 * XREFs of ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x180182490
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x180015BC8 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCpuClip::AddPrimitiveClip(CCpuClip *this, const struct CShape *a2, const struct CMILMatrix *a3)
{
  CShapePtr *v3; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct CShape *v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CCpuClip *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (v7 = CCpuClip::ConvertContextDependentClipToLocal((CShape **)this), v9 = v7, v7 >= 0) )
  {
    if ( *(_QWORD *)v3 )
    {
      v12 = CShape::Combine(*(CShape **)v3, (__int64)a2, a2, (float *)a3, 1, &v15);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x4Au);
        return v9;
      }
    }
    else
    {
      v10 = CShape::CopyShape(a2, a3, &v15);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x40u);
        return v9;
      }
    }
    CShapePtr::Release(v3);
    *(_QWORD *)v3 = v15;
    *((_BYTE *)v3 + 8) = 1;
    *((_BYTE *)this + 32) = 1;
    return v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Au);
  return v9;
}
