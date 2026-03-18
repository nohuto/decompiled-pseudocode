/*
 * XREFs of ?ProcessSetMinOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY@@@Z @ 0x1801B02F4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B0488 (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMinOpacity(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY *a3)
{
  CProjectedShadowScene::SetMinOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
