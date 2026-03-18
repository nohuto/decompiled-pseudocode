/*
 * XREFs of ?ProcessSetComposeOnce@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSEONCE@@@Z @ 0x18007BE1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::ProcessSetComposeOnce(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETCOMPOSEONCE *a3)
{
  *((_BYTE *)this + 954) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
