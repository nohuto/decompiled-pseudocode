/*
 * XREFs of ?CheckOcclusionState@CDesktopRenderTarget@@WGI@EAAJXZ @ 0x1800ED110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::CheckOcclusionState(__int64 a1, void **a2)
{
  return CDesktopRenderTarget::GetVBlankEvent((CDesktopRenderTarget *)(a1 - 104), a2);
}
