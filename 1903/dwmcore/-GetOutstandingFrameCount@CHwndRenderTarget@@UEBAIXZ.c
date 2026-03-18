/*
 * XREFs of ?GetOutstandingFrameCount@CHwndRenderTarget@@UEBAIXZ @ 0x1801A9170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::GetOutstandingFrameCount(CHwndRenderTarget *this)
{
  return (*((_DWORD *)this + 134) - *((_DWORD *)this + 135)) & (unsigned int)-(*((_DWORD *)this + 135) < *((_DWORD *)this + 134));
}
