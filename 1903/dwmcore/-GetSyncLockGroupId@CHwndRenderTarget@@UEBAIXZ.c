/*
 * XREFs of ?GetSyncLockGroupId@CHwndRenderTarget@@UEBAIXZ @ 0x1800DA760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::GetSyncLockGroupId(CHwndRenderTarget *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 21) + 308LL);
}
