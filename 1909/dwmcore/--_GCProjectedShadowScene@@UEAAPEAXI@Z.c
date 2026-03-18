/*
 * XREFs of ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x180003980
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800039C0 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::`scalar deleting destructor'(
        CProjectedShadowScene *this,
        char a2)
{
  CProjectedShadowScene::~CProjectedShadowScene(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
