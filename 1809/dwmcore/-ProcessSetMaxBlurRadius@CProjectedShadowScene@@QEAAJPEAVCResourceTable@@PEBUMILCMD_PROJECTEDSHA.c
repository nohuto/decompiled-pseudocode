/*
 * XREFs of ?ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS@@@Z @ 0x1801B02A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B037C (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMaxBlurRadius(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS *a3)
{
  CProjectedShadowScene::SetMaxBlurRadius(this, *((float *)a3 + 2));
  return 0LL;
}
