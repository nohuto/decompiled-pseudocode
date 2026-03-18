/*
 * XREFs of ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x18001CB40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x18001CB80 (--1CTransformGroup@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CTransformGroup *__fastcall CTransformGroup::`scalar deleting destructor'(CTransformGroup *this, char a2)
{
  CTransformGroup::~CTransformGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
