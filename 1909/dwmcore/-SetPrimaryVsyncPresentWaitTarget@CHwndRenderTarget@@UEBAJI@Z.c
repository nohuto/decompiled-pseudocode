/*
 * XREFs of ?SetPrimaryVsyncPresentWaitTarget@CHwndRenderTarget@@UEBAJI@Z @ 0x1801A81C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::SetPrimaryVsyncPresentWaitTarget(CHwndRenderTarget *this, unsigned int a2)
{
  return CHwndRenderTarget::SetSyncRefreshCountWaitTargetInternal(this, a2, 1);
}
