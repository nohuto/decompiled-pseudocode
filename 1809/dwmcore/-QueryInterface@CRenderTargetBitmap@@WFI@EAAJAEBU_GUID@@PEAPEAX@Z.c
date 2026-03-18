/*
 * XREFs of ?QueryInterface@CRenderTargetBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 88), a2, a3);
}
