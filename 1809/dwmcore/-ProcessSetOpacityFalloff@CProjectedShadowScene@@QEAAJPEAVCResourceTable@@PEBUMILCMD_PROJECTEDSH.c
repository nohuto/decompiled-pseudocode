/*
 * XREFs of ?ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF@@@Z @ 0x1801B0310
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B04EC (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetOpacityFalloff(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF *a3)
{
  CProjectedShadowScene::SetOpacityFalloff(this, *((float *)a3 + 2));
  return 0LL;
}
