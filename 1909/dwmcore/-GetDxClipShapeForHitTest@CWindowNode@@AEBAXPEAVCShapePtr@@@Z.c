/*
 * XREFs of ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180217E40
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C2450 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 */

void __fastcall CWindowNode::GetDxClipShapeForHitTest(CWindowNode *this, struct CShapePtr *a2)
{
  if ( *((_QWORD *)this + 110) )
    CGeometry::GetShapeData(*((CGeometry **)this + 110), (const struct D2D_SIZE_F *)((char *)this + 132), a2);
}
