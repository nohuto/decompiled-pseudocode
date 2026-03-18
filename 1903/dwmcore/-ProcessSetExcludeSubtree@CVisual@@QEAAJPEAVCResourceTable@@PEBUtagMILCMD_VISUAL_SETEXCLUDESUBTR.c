/*
 * XREFs of ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800D5428
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetExcludeSubtree(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETEXCLUDESUBTREE *a3)
{
  char v3; // r9
  char v4; // r8

  v3 = *((_BYTE *)a3 + 8) != 0;
  v4 = (*((_BYTE *)this + 94) & 8) != 0;
  *((_BYTE *)this + 94) = *((_BYTE *)this + 94) & 0xF7 | (8 * v3);
  if ( v4 != v3 )
    CVisual::PropagateFlags((__int64)this, 4u, 0);
  return 0LL;
}
