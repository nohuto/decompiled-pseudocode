/*
 * XREFs of ?ProcessSetCompositorComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x18018BEC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetCompositorComment(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT *a3,
        __int64 a4,
        unsigned int a5)
{
  return SetCommentHelper<MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT const>(
           (__int64)this + 152,
           (__int64)a3,
           a4,
           a5);
}
