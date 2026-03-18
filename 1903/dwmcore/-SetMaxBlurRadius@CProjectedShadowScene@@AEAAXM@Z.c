/*
 * XREFs of ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180006584
 * Callers:
 *     ?ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS@@@Z @ 0x1801F36BC (-ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTED.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F3750 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180006AB4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CProjectedShadowScene::SetMaxBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(0.0, a2);
  if ( *((float *)this + 26) != v3 )
  {
    *((float *)this + 26) = v3;
    CResource::InvalidateAnimationSources(this, 3u);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
