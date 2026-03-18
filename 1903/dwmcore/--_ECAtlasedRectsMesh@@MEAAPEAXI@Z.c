/*
 * XREFs of ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x18002A570
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18002A5B0 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CAtlasedRectsMesh *__fastcall CAtlasedRectsMesh::`vector deleting destructor'(CAtlasedRectsMesh *this, char a2)
{
  CAtlasedRectsMesh::~CAtlasedRectsMesh(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
