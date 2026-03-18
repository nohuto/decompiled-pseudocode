/*
 * XREFs of ??_ECBspNode@@UEAAPEAXI@Z @ 0x180259DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x180259D1C (--1CBspNode@@UEAA@XZ.c)
 */

CBspNode *__fastcall CBspNode::`vector deleting destructor'(CBspNode *this, char a2)
{
  CBspNode::~CBspNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
