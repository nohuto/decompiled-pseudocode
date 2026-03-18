/*
 * XREFs of ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18001151C
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000E640 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008B108 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

char __fastcall CComponentTransform2D::IsIdentity(CComponentTransform2D *this)
{
  char v1; // dl
  char IsIdentity; // al

  v1 = 0;
  if ( *((float *)this + 38) == 0.0
    && *((float *)this + 39) == 0.0
    && *((float *)this + 44) == 1.0
    && *((float *)this + 45) == 1.0
    && *((float *)this + 46) == 0.0
    && *((float *)this + 42) == 0.0
    && *((float *)this + 43) == 0.0 )
  {
    IsIdentity = D2D1::Matrix3x2F::IsIdentity((CComponentTransform2D *)((char *)this + 188));
    if ( IsIdentity != v1 )
      return 1;
  }
  return v1;
}
