/*
 * XREFs of ?QueryInterface@CCompositionSurfaceBitmap@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CBitmapRealization::QueryInterface((CBitmapRealization *)(a1 - 56), a2, a3);
}
