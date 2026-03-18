/*
 * XREFs of ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x1801B9C10
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessProtectContent(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_PROTECTCONTENT *a3)
{
  int v3; // r10d
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_BYTE *)this + 957) != (v3 != 0) )
  {
    v5 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 957) = v3 != 0;
    v6 = *(_DWORD *)(v5 + 264);
    v7 = v6 - 1;
    v8 = v6 + 1;
    if ( !v3 )
      v8 = v7;
    *(_DWORD *)(v5 + 264) = v8;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
