/*
 * XREFs of ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x18019EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801CF4F0 (--1CCombinedGeometry@@MEAA@XZ.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::`vector deleting destructor'(CCombinedGeometry *this, char a2)
{
  CCombinedGeometry::~CCombinedGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
