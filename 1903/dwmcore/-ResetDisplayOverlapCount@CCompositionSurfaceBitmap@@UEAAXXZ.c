/*
 * XREFs of ?ResetDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x1800DA670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::ResetDisplayOverlapCount(CCompositionSurfaceBitmap *this)
{
  *((_DWORD *)this + 24) = 0;
}
