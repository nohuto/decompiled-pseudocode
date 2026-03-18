/*
 * XREFs of ?IsDisplayClone@CHwndRenderTarget@@MEBA_NXZ @ 0x1801A91B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsDisplayClone(CHwndRenderTarget *this)
{
  return *(_QWORD *)(*((_QWORD *)this + 21) + 152LL) != *((_QWORD *)this + 21);
}
