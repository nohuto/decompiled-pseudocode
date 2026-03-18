/*
 * XREFs of ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801B018C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ClearReceivers@CProjectedShadowScene@@QEAAXXZ @ 0x1801AFBC4 (-ClearReceivers@CProjectedShadowScene@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessClearReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS *a3)
{
  CProjectedShadowScene::ClearReceivers(this);
  return 0LL;
}
