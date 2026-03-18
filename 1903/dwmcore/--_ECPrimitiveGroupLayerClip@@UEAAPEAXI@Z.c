/*
 * XREFs of ??_ECPrimitiveGroupLayerClip@@UEAAPEAXI@Z @ 0x18019F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800C62D0 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CPrimitiveGroupLayerClip *__fastcall CPrimitiveGroupLayerClip::`vector deleting destructor'(
        CPrimitiveGroupLayerClip *this,
        char a2)
{
  CPrimitiveGroup::~CPrimitiveGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
