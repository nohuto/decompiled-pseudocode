/*
 * XREFs of ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x18005ED84
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetMaximizedClipMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS *a3)
{
  if ( *((_DWORD *)this + 220) != *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 221) != *((_DWORD *)a3 + 3)
    || *((_DWORD *)this + 222) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 223) != *((_DWORD *)a3 + 5) )
  {
    *((_OWORD *)this + 55) = *(_OWORD *)((char *)a3 + 8);
    CVisual::PropagateFlags(this, 5LL);
  }
  return 0LL;
}
