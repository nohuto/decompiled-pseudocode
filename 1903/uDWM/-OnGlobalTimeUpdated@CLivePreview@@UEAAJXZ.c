/*
 * XREFs of ?OnGlobalTimeUpdated@CLivePreview@@UEAAJXZ @ 0x18007AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CLivePreview::OnGlobalTimeUpdated(CLivePreview *this)
{
  CVisual::SetDirtyFlags(this, 0x2000);
  return 0LL;
}
