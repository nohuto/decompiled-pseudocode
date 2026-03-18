/*
 * XREFs of ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801F945C
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1802513F0 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180004A74 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001C4D8 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1801F986C (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801F9C78 (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

void __fastcall CSpriteVectorShape::ComputeBounds(CSpriteVectorShape *this)
{
  CGeometry *v2; // rcx
  __int64 v3; // r8
  bool v4; // al
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  *((_WORD *)this + 40) = 0;
  v2 = (CGeometry *)*((_QWORD *)this + 13);
  v5 = 0LL;
  v6 = 0;
  if ( v2 )
    CGeometry::GetShapeData(v2, 0LL, (struct CShapePtr *)&v5);
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v5) )
  {
    if ( *((_QWORD *)this + 12) && (int)CSpriteVectorShape::EnsureStrokeStyleForBounds(this) >= 0 )
      *((_BYTE *)this + 81) = (int)CShapePtr::GetWidenedBounds(&v5, (char *)this + 64, v3, *((_QWORD *)this + 14)) >= 0;
    if ( *((_BYTE *)this + 81)
      || *((_QWORD *)this + 11) && (v4 = (int)CShapePtr::GetTightBounds(&v5) >= 0, (*((_BYTE *)this + 81) = v4) != 0) )
    {
      *((_BYTE *)this + 81) = (int)CShapePtr::GetWidenedBounds(&v5, (char *)this + 128, v3, 0LL) >= 0;
    }
  }
  CShapePtr::Release((CShapePtr *)&v5);
}
