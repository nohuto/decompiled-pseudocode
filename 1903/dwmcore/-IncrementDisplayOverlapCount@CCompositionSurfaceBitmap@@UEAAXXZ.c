/*
 * XREFs of ?IncrementDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x1800DA5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::IncrementDisplayOverlapCount(CCompositionSurfaceBitmap *this)
{
  ++*((_DWORD *)this + 24);
}
