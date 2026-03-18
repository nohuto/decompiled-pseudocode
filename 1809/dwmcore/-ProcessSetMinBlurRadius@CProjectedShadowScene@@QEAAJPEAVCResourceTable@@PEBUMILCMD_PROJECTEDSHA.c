/*
 * XREFs of ?ProcessSetMinBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETMINBLURRADIUS@@@Z @ 0x1801B02D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B0434 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMinBlurRadius(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_SETMINBLURRADIUS *a3)
{
  CProjectedShadowScene::SetMinBlurRadius(this, *((float *)a3 + 2));
  return 0LL;
}
