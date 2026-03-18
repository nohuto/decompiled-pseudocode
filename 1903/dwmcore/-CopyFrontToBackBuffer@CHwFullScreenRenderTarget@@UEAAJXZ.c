/*
 * XREFs of ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18008CF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBuffer(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((char *)this - 144, 0LL, a3);
}
