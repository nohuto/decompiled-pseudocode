/*
 * XREFs of ?OnGlobalTimeUpdated@CButton@@UEAAJXZ @ 0x180078190
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CButton::OnGlobalTimeUpdated(CButton *this)
{
  CVisual::SetDirtyFlags(this, 0x10000);
  return 0LL;
}
