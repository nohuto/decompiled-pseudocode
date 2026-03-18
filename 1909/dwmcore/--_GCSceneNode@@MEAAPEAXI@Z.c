/*
 * XREFs of ??_GCSceneNode@@MEAAPEAXI@Z @ 0x1801F7F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSceneNode@@MEAA@XZ @ 0x1801F7E84 (--1CSceneNode@@MEAA@XZ.c)
 */

CSceneNode *__fastcall CSceneNode::`scalar deleting destructor'(CSceneNode *this, char a2)
{
  CSceneNode::~CSceneNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
