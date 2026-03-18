/*
 * XREFs of ?ProcessSetMinOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY@@@Z @ 0x1801F3710
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180006658 (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMinOpacity(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY *a3)
{
  CProjectedShadowScene::SetMinOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
