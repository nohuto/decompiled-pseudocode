/*
 * XREFs of ??_GCRenderData@@MEAAPEAXI@Z @ 0x180042FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderData@@MEAA@XZ @ 0x180043010 (--1CRenderData@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CRenderData *__fastcall CRenderData::`scalar deleting destructor'(CRenderData *this, char a2)
{
  CRenderData::~CRenderData(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
