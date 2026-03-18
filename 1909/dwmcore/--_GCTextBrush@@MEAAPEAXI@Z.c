/*
 * XREFs of ??_GCTextBrush@@MEAAPEAXI@Z @ 0x1801FB190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CTextBrush@@MEAA@XZ @ 0x1801FB11C (--1CTextBrush@@MEAA@XZ.c)
 */

CTextBrush *__fastcall CTextBrush::`scalar deleting destructor'(CTextBrush *this, char a2)
{
  CTextBrush::~CTextBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
