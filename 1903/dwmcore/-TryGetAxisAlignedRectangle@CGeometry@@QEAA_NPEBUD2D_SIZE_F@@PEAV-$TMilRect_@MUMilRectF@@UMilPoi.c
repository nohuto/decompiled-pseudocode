/*
 * XREFs of ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800046EC
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x18000440C (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801F2798 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18000475C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180004818 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

bool __fastcall CGeometry::TryGetAxisAlignedRectangle(CGeometry *a1, const struct D2D_SIZE_F *a2, _QWORD *a3)
{
  bool v3; // bl
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v3 = 0;
  a3[1] = 0LL;
  *a3 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (int)CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v6) >= 0
    && CShapePtr::IsAxisAlignedRectangle((CShapePtr *)&v6) )
  {
    v3 = (int)CShapePtr::GetTightBounds(&v6, a3, 0LL) >= 0;
  }
  CShapePtr::Release((CShapePtr *)&v6);
  return v3;
}
