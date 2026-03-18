/*
 * XREFs of ?CheckIndependentFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180207EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckIndependentFlipSupport(CHwFullScreenRenderTarget *this, bool *a2)
{
  *a2 = *(_DWORD *)(*((_QWORD *)this + 3) + 260LL) >= 1300;
  return 0LL;
}
