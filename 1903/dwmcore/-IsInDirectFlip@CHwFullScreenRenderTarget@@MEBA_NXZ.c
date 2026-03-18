/*
 * XREFs of ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1800C3E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwFullScreenRenderTarget::IsInDirectFlip(CHwFullScreenRenderTarget *this)
{
  return *((_QWORD *)this + 63) != 0LL;
}
