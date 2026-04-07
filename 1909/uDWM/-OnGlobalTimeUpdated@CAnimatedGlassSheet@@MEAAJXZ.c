/*
 * XREFs of ?OnGlobalTimeUpdated@CAnimatedGlassSheet@@MEAAJXZ @ 0x180093FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::OnGlobalTimeUpdated(CAnimatedGlassSheet *this)
{
  CVisual::SetDirtyFlags(this, 0x4000);
  return 0LL;
}
