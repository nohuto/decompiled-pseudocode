/*
 * XREFs of ?IncrementDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x1800DB270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::IncrementDisplayOverlapCount(CCompositionSurfaceBitmap *this)
{
  ++*((_DWORD *)this + 24);
}
