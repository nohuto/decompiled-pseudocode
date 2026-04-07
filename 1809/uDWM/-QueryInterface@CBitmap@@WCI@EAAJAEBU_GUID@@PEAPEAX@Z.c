/*
 * XREFs of ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCompoundBitmapLock::QueryInterface((CCompoundBitmapLock *)(a1 - 40), a2, a3);
}
