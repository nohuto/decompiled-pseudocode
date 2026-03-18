/*
 * XREFs of ?ProcessSetBlurRadiusMultiplier@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETBLURRADIUSMULTIPLIER@@@Z @ 0x1801B01A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B032C (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetBlurRadiusMultiplier(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_SETBLURRADIUSMULTIPLIER *a3)
{
  CProjectedShadowScene::SetBlurRadiusMultiplier(this, *((float *)a3 + 2));
  return 0LL;
}
