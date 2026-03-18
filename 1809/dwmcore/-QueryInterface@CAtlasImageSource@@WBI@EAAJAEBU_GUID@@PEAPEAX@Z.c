/*
 * XREFs of ?QueryInterface@CAtlasImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasImageSource::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 24), a2, a3);
}
