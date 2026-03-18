/*
 * XREFs of ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801B7804
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E574 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessRemoveAllChildren(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_REMOVEALLCHILDREN *a3)
{
  CVisual::RemoveAllChildren(this);
  return 0LL;
}
