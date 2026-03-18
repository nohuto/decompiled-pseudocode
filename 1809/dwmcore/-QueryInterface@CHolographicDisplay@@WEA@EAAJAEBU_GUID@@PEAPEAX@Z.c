/*
 * XREFs of ?QueryInterface@CHolographicDisplay@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicDisplay::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 64), a2, a3);
}
