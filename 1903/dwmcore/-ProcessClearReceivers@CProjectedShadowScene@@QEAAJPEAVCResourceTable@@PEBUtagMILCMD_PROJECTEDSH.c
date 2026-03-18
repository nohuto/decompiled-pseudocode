/*
 * XREFs of ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801F3688
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180003C54 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessClearReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS *a3)
{
  CProjectedShadowScene::ClearReceivers(this);
  return 0LL;
}
