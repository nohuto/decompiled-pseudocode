/*
 * XREFs of ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801C284C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180078CC0 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessRemoveAllChildren(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_REMOVEALLCHILDREN *a3)
{
  CVisual::RemoveAllChildren(this);
  return 0LL;
}
