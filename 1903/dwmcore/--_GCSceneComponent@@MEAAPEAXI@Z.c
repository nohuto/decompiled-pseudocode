/*
 * XREFs of ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x18020DE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSceneComponent@@MEAA@XZ @ 0x18020DDF8 (--1CSceneComponent@@MEAA@XZ.c)
 */

CSceneComponent *__fastcall CSceneComponent::`scalar deleting destructor'(CSceneComponent *this, char a2)
{
  CSceneComponent::~CSceneComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
