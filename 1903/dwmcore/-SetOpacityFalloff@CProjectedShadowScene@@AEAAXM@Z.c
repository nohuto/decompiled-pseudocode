/*
 * XREFs of ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x1800065C8
 * Callers:
 *     ?ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF@@@Z @ 0x1801F372C (-ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F3750 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180006AB4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CProjectedShadowScene::SetOpacityFalloff(CProjectedShadowScene *this, float a2)
{
  if ( *((float *)this + 31) != a2 )
  {
    *((float *)this + 31) = a2;
    CResource::InvalidateAnimationSources(this, 7u);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
