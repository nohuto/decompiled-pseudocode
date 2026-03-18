/*
 * XREFs of ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180199D8C
 * Callers:
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AD7D4 (-GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEAA_NXZ @ 0x1801ADA80 (-IsRectangular@CProjectedShadowCaster@@QEAA_NXZ.c)
 *     ?TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z @ 0x1801AE228 (-TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002B47C (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180165870 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 */

bool __fastcall CGeometry::TryGetAxisAlignedRectangle(CGeometry *a1, const struct D2D_SIZE_F *a2, _QWORD *a3)
{
  bool v3; // bl
  CShape *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v3 = 0;
  a3[1] = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (int)CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v5) >= 0 && CShapePtr::IsAxisAlignedRectangle(&v5) )
    v3 = (int)CShapePtr::GetTightBounds((__int64 *)&v5) >= 0;
  CShapePtr::Release((CShapePtr *)&v5);
  return v3;
}
