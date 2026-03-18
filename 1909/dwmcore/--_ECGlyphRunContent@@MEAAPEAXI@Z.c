/*
 * XREFs of ??_ECGlyphRunContent@@MEAAPEAXI@Z @ 0x1801D4E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CGlyphRunContent@@MEAA@XZ @ 0x180205134 (--1CGlyphRunContent@@MEAA@XZ.c)
 */

CGlyphRunContent *__fastcall CGlyphRunContent::`vector deleting destructor'(CGlyphRunContent *this, char a2)
{
  CGlyphRunContent::~CGlyphRunContent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
