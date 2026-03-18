/*
 * XREFs of ?ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY@@@Z @ 0x1801B02BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B03D0 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMaxOpacity(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY *a3)
{
  CProjectedShadowScene::SetMaxOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
