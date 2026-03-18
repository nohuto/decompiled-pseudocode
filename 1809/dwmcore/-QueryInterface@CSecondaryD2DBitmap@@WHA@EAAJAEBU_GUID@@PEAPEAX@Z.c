/*
 * XREFs of ?QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F07D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 112), a2, a3);
}
