/*
 * XREFs of ?ProcessDetach@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_DETACH@@@Z @ 0x18004C5C8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CWindowNode::ProcessDetach(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_DETACH *a3)
{
  return CWindowNode::Detach(this);
}
