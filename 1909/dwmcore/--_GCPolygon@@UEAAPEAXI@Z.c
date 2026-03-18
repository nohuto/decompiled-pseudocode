/*
 * XREFs of ??_GCPolygon@@UEAAPEAXI@Z @ 0x1801BC530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CPolygon@@UEAA@XZ @ 0x1801BC4A8 (--1CPolygon@@UEAA@XZ.c)
 */

CPolygon *__fastcall CPolygon::`scalar deleting destructor'(CPolygon *this, char a2)
{
  CPolygon::~CPolygon(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
