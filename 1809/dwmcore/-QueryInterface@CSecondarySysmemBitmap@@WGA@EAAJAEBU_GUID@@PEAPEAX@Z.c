/*
 * XREFs of ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F08A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 96), a2, a3);
}
