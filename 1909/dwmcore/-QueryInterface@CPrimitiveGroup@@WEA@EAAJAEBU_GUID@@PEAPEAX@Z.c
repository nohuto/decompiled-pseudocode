/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CGdiSpriteBitmap::QueryInterface((CGdiSpriteBitmap *)(a1 - 64), a2, a3);
}
