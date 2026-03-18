/*
 * XREFs of ??_ECPrimitiveGroupLayerClip@@UEAAPEAXI@Z @ 0x18019DF30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800C6A70 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
